#include "cast_utils.h"
#include "layer_validation_tests.h"

TEST_F(VkLayerTest, CompressedImageMipCopyTests) {
    TEST_DESCRIPTION("Image/Buffer copies for higher mip levels");

    ASSERT_NO_FATAL_FAILURE(Init());

    VkPhysicalDeviceFeatures device_features = {};
    ASSERT_NO_FATAL_FAILURE(GetPhysicalDeviceFeatures(&device_features));
    VkFormat compressed_format = VK_FORMAT_UNDEFINED;
    if (device_features.textureCompressionBC) {
        compressed_format = VK_FORMAT_BC3_SRGB_BLOCK;
    } else if (device_features.textureCompressionETC2) {
        compressed_format = VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK;
    } else if (device_features.textureCompressionASTC_LDR) {
        compressed_format = VK_FORMAT_ASTC_4x4_UNORM_BLOCK;
    } else {
        printf("%s No compressed formats supported - CompressedImageMipCopyTests skipped.\n", kSkipPrefix);
        return;
    }

    VkImageCreateInfo ci;
    ci.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    ci.pNext = NULL;
    ci.flags = 0;
    ci.imageType = VK_IMAGE_TYPE_2D;
    ci.format = compressed_format;
    ci.extent = {32, 32, 1};
    ci.mipLevels = 6;
    ci.arrayLayers = 1;
    ci.samples = VK_SAMPLE_COUNT_1_BIT;
    ci.tiling = VK_IMAGE_TILING_OPTIMAL;
    ci.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    ci.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    ci.queueFamilyIndexCount = 0;
    ci.pQueueFamilyIndices = NULL;
    ci.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

    VkImageObj image(m_device);
    std::cout << "image: " << std::endl;
    image.init(&ci);
    ASSERT_TRUE(image.initialized());

    VkImageObj odd_image(m_device);
    ci.extent = {31, 32, 1};  // Mips are [31,32] [15,16] [7,8] [3,4], [1,2] [1,1]
    std::cout << "odd_image: " << std::endl;
    odd_image.init(&ci);
    ASSERT_TRUE(odd_image.initialized());

    // Allocate buffers
    VkMemoryPropertyFlags reqs = 0;
    VkBufferObj buffer_1024, buffer_64, buffer_16, buffer_8;
    std::cout << "buffer_1024: " << std::endl;
    buffer_1024.init_as_src_and_dst(*m_device, 1024, reqs);
    std::cout << "buffer_64: " << std::endl;
    buffer_64.init_as_src_and_dst(*m_device, 64, reqs);
    std::cout << "buffer_16: " << std::endl;
    buffer_16.init_as_src_and_dst(*m_device, 16, reqs);
    std::cout << "buffer_8: " << std::endl;
    buffer_8.init_as_src_and_dst(*m_device, 8, reqs);

    VkBufferImageCopy region = {};
    region.bufferRowLength = 0;
    region.bufferImageHeight = 0;
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1;
    region.imageOffset = {0, 0, 0};
    region.bufferOffset = 0;

    // start recording
    m_commandBuffer->begin();

    VkMemoryBarrier mem_barriers[3];
    mem_barriers[0] = lvl_init_struct<VkMemoryBarrier>();
    mem_barriers[0].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    mem_barriers[0].dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    mem_barriers[1] = lvl_init_struct<VkMemoryBarrier>();
    mem_barriers[1].srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    mem_barriers[1].dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    mem_barriers[2] = lvl_init_struct<VkMemoryBarrier>();
    mem_barriers[2].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    mem_barriers[2].dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;

    // Mip level copies that work - 5 levels
    /*m_errorMonitor->ExpectSuccess();
    // Mip 0 should fit in 1k buffer - 1k texels @ 1b each
    region.imageExtent = {32, 32, 1};
    region.imageSubresource.mipLevel = 0;
    std::cout << "test 0000"<< std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_1024.handle(), 1, &region);
    m_errorMonitor->VerifyNotFound();
    std::cout << "test 1111" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1,
                           &mem_barriers[2], 0, nullptr, 0, nullptr);
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_1024.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);
    */
    // Mip 2 should fit in 64b buffer - 64 texels @ 1b each
    region.imageExtent = {8, 8, 1};
    region.imageSubresource.mipLevel = 2;
    /*m_errorMonitor->ExpectSuccess();
    std::cout << "test 2222" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_64.handle(), 1, &region);
    m_errorMonitor->VerifyNotFound();

    std::cout << "test 3333" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 2,
                           &mem_barriers[1], 0, nullptr, 0, nullptr);
    std::cout << "test 4444" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_64.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);
    */
    // Mip 3 should fit in 16b buffer - 16 texels @ 1b each
    region.imageExtent = {4, 4, 1};
    region.imageSubresource.mipLevel = 3;
    /*m_errorMonitor->ExpectSuccess();
    std::cout << "test 5555" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1, &region);
    m_errorMonitor->VerifyNotFound();

    std::cout << "test 6666" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 2,
                           &mem_barriers[1], 0, nullptr, 0, nullptr);
    std::cout << "test 7777" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);*/

    // Mip 4&5 should fit in 16b buffer with no complaint - 4 & 1 texels @ 1b each
    region.imageExtent = {2, 2, 1};
    region.imageSubresource.mipLevel = 4;

    /*std::cout << "test 8888" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1,
                           &mem_barriers[0], 0, nullptr, 0, nullptr);
    m_errorMonitor->ExpectSuccess();
    std::cout << "test 9999" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1, &region);
    m_errorMonitor->VerifyNotFound();

    std::cout << "test aaaa" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 2,
                           &mem_barriers[1], 0, nullptr, 0, nullptr);
    std::cout << "test bbbb" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);*/

    region.imageExtent = {1, 1, 1};
    region.imageSubresource.mipLevel = 5;
    /*std::cout << "test cccc" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1,
                           &mem_barriers[0], 0, nullptr, 0, nullptr);
    m_errorMonitor->ExpectSuccess();
    std::cout << "test dddd" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1, &region);*/
    /*std::cout << "test eeee" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 2,
                           &mem_barriers[1], 0, nullptr, 0, nullptr);*/
    std::cout << "\ntest ffff" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);
    m_errorMonitor->VerifyNotFound();
    /*
    // Buffer must accommodate a full compressed block, regardless of texel count
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit, "VUID-vkCmdCopyImageToBuffer-pRegions-00183");
    std::cout << "test gggg" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_8.handle(), 1, &region);
    m_errorMonitor->VerifyFound();
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit, "VUID-vkCmdCopyBufferToImage-pRegions-00171");
    std::cout << "test hhhh" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_8.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);
    m_errorMonitor->VerifyFound();*/

    // Copy width < compressed block size, but not the full mip width
    region.imageExtent = {1, 2, 1};
    region.imageSubresource.mipLevel = 4;
    /*m_errorMonitor->SetDesiredFailureMsg(
        kErrorBit,
        "VUID-VkBufferImageCopy-imageExtent-00207");  // width not a multiple of compressed block width
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyImageToBuffer-imageOffset-01794");  // image transfer granularity
    std::cout << "test iiiii" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1, &region);
    m_errorMonitor->VerifyFound();
    m_errorMonitor->SetDesiredFailureMsg(
        kErrorBit,
        "VUID-VkBufferImageCopy-imageExtent-00207");  // width not a multiple of compressed block width
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyBufferToImage-imageOffset-01793");  // image transfer granularity
    std::cout << "test jjjj" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);
    m_errorMonitor->VerifyFound();

    // Copy height < compressed block size but not the full mip height
    region.imageExtent = {2, 1, 1};
    m_errorMonitor->SetDesiredFailureMsg(
        kErrorBit,
        "VUID-VkBufferImageCopy-imageExtent-00208");  // height not a multiple of compressed block width
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyImageToBuffer-imageOffset-01794");  // image transfer granularity
    std::cout << "test kkkk" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1, &region);
    m_errorMonitor->VerifyFound();
    m_errorMonitor->SetDesiredFailureMsg(
        kErrorBit,
        "VUID-VkBufferImageCopy-imageExtent-00208");  // height not a multiple of compressed block width
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyBufferToImage-imageOffset-01793");  // image transfer granularity
    std::cout << "test llll" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);
    m_errorMonitor->VerifyFound();*/

    // Offsets must be multiple of compressed block size
    region.imageOffset = {1, 1, 0};
    region.imageExtent = {1, 1, 1};
    /*m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-VkBufferImageCopy-imageOffset-00205");  // imageOffset not a multiple of block size
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyImageToBuffer-imageOffset-01794");  // image transfer granularity
    std::cout << "test mmm" << std::endl;
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1, &region);
    m_errorMonitor->VerifyFound();
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-VkBufferImageCopy-imageOffset-00205");  // imageOffset not a multiple of block size
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyBufferToImage-imageOffset-01793");  // image transfer granularity
    std::cout << "test nnnn" << std::endl;
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1, &region);
    m_errorMonitor->VerifyFound();*/

    // Offset + extent width = mip width - should succeed
    region.imageOffset = {4, 4, 0};
    region.imageExtent = {3, 4, 1};
    region.imageSubresource.mipLevel = 2;

    m_errorMonitor->ExpectSuccess();
    std::cout << "\ntest oooo" << std::endl;
    vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1,
                           &mem_barriers[0], 0, nullptr, 0, nullptr);
    m_errorMonitor->VerifyNotFound();
    printf("\ntest error xxxx aaaa\n");
    m_errorMonitor->ExpectSuccess();
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), odd_image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1,
                             &region);
    m_errorMonitor->VerifyNotFound();
    printf("\ntest error xxxx bbbb\n");
    m_errorMonitor->ExpectSuccess();
    /*vk::CmdPipelineBarrier(m_commandBuffer->handle(), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 2,
                           &mem_barriers[1], 0, nullptr, 0, nullptr);
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), odd_image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1,
                             &region);
    m_errorMonitor->VerifyNotFound();

    // Offset + extent width < mip width and not a multiple of block width - should fail
    region.imageExtent = {3, 3, 1};
    m_errorMonitor->SetDesiredFailureMsg(
        kErrorBit,
        "VUID-VkBufferImageCopy-imageExtent-00208");  // offset+extent not a multiple of block width
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyImageToBuffer-imageOffset-01794");  // image transfer granularity
    vk::CmdCopyImageToBuffer(m_commandBuffer->handle(), odd_image.handle(), VK_IMAGE_LAYOUT_GENERAL, buffer_16.handle(), 1,
                             &region);
    m_errorMonitor->VerifyFound();
    m_errorMonitor->SetDesiredFailureMsg(
        kErrorBit,
        "VUID-VkBufferImageCopy-imageExtent-00208");  // offset+extent not a multiple of block width
    m_errorMonitor->SetDesiredFailureMsg(kErrorBit,
                                         "VUID-vkCmdCopyBufferToImage-imageOffset-01793");  // image transfer granularity
    vk::CmdCopyBufferToImage(m_commandBuffer->handle(), buffer_16.handle(), odd_image.handle(), VK_IMAGE_LAYOUT_GENERAL, 1,
                             &region);
    m_errorMonitor->VerifyFound();*/
}