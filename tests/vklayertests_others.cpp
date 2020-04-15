#include "cast_utils.h"
#include "layer_validation_tests.h"

TEST_F(VkLayerTest, AndroidHardwareBufferFetchUnboundImageInfo) {
    TEST_DESCRIPTION("Verify AndroidHardwareBuffer retreive image properties while memory unbound.");

    SetTargetApiVersion(VK_API_VERSION_1_1);
    ASSERT_NO_FATAL_FAILURE(InitFramework(m_errorMonitor));

    if ((DeviceExtensionSupported(gpu(), nullptr, VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME)) &&
        // Also skip on devices that advertise AHB, but not the pre-requisite foreign_queue extension
        (DeviceExtensionSupported(gpu(), nullptr, VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME))) {
        m_device_extension_names.push_back(VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME);
        m_device_extension_names.push_back(VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME);
        m_device_extension_names.push_back(VK_KHR_MAINTENANCE1_EXTENSION_NAME);
        m_device_extension_names.push_back(VK_KHR_BIND_MEMORY_2_EXTENSION_NAME);
        m_device_extension_names.push_back(VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME);
        m_device_extension_names.push_back(VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME);
        m_device_extension_names.push_back(VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME);
    } else {
        printf("%s %s extension not supported, skipping tests\n", kSkipPrefix,
               VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME);
        return;
    }

    ASSERT_NO_FATAL_FAILURE(InitState());

    VkImageCreateInfo ici = {};
    ici.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    ici.pNext = nullptr;
    ici.imageType = VK_IMAGE_TYPE_2D;
    ici.arrayLayers = 1;
    ici.extent = {64, 64, 1};
    ici.format = VK_FORMAT_R8G8B8A8_UNORM;
    ici.mipLevels = 1;
    ici.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    ici.samples = VK_SAMPLE_COUNT_1_BIT;
    ici.tiling = VK_IMAGE_TILING_LINEAR;
    ici.usage = VK_IMAGE_USAGE_SAMPLED_BIT;

    VkImageObj img(m_device);
    m_errorMonitor->ExpectSuccess();
    img.init(&ici);
    m_errorMonitor->VerifyNotFound();

    VkSubresourceLayout layout = {};
    VkImageSubresource subres = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0};

    m_errorMonitor->ExpectSuccess();
    std::cout << "test 0000" << std::endl;
    vk::GetImageSubresourceLayout(device(), img.image, &subres, &layout);
    std::cout << "test 1111" << std::endl;
    std::cout << "layout offset: " << layout.offset << "  size: " << layout.size << "  rowPitch: " << layout.rowPitch
              << "  depthPitch: " << layout.depthPitch << "  arrayPitch: " << layout.arrayPitch << std::endl;
    m_errorMonitor->VerifyNotFound();

    VkExternalMemoryImageCreateInfo emici = {};
    emici.sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
    emici.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID;
    ici.pNext = &emici;

    VkImageObj img111(m_device);
    m_errorMonitor->ExpectSuccess();
    img.init(&ici);
    m_errorMonitor->VerifyNotFound();

    m_errorMonitor->ExpectSuccess();
    std::cout << "test aaaa" << std::endl;
    vk::GetImageSubresourceLayout(dev, img111.image, &subres, &layout);
    std::cout << "test bbbb" << std::endl;
    std::cout << "layout offset: " << layout.offset << "  size: " << layout.size << "  rowPitch: " << layout.rowPitch
              << "  depthPitch: " << layout.depthPitch << "  arrayPitch: " << layout.arrayPitch << std::endl;
    m_errorMonitor->VerifyNotFound();
}
