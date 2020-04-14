#include "cast_utils.h"
#include "layer_validation_tests.h"

TEST_F(VkLayerTest, SyncCopyOptimalImageHazards) {
    // TODO: Add code to enable sync validation
    ASSERT_NO_FATAL_FAILURE(Init());

    VkImageUsageFlags usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;
    VkImageObj image_a(m_device);
    const auto image_ci = VkImageObj::ImageCreateInfo2D(128, 128, 1, 1, format, usage, VK_IMAGE_TILING_OPTIMAL);
    image_a.Init(image_ci);}
