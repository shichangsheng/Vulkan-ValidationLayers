// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See command_validation_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2021 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Spencer Fricke <s.fricke@samsung.com>
 *
 ****************************************************************************/

#include "vk_layer_logging.h"
#include "core_validation.h"

static const std::array<const char *, CMD_RANGE_SIZE> kGeneratedMustBeRecordingList = {{
    kVUIDUndefined,
    "VUID-vkCmdBeginConditionalRenderingEXT-commandBuffer-recording",
    "VUID-vkCmdBeginDebugUtilsLabelEXT-commandBuffer-recording",
    "VUID-vkCmdBeginQuery-commandBuffer-recording",
    "VUID-vkCmdBeginQueryIndexedEXT-commandBuffer-recording",
    "VUID-vkCmdBeginRenderPass-commandBuffer-recording",
    "VUID-vkCmdBeginRenderPass2-commandBuffer-recording",
    "VUID-vkCmdBeginTransformFeedbackEXT-commandBuffer-recording",
    "VUID-vkCmdBeginVideoCodingKHR-commandBuffer-recording",
    "VUID-vkCmdBindDescriptorSets-commandBuffer-recording",
    "VUID-vkCmdBindIndexBuffer-commandBuffer-recording",
    "VUID-vkCmdBindPipeline-commandBuffer-recording",
    "VUID-vkCmdBindPipelineShaderGroupNV-commandBuffer-recording",
    "VUID-vkCmdBindShadingRateImageNV-commandBuffer-recording",
    "VUID-vkCmdBindTransformFeedbackBuffersEXT-commandBuffer-recording",
    "VUID-vkCmdBindVertexBuffers-commandBuffer-recording",
    "VUID-vkCmdBindVertexBuffers2EXT-commandBuffer-recording",
    "VUID-vkCmdBlitImage-commandBuffer-recording",
    "VUID-vkCmdBlitImage2KHR-commandBuffer-recording",
    "VUID-vkCmdBuildAccelerationStructureNV-commandBuffer-recording",
    "VUID-vkCmdBuildAccelerationStructuresIndirectKHR-commandBuffer-recording",
    "VUID-vkCmdBuildAccelerationStructuresKHR-commandBuffer-recording",
    "VUID-vkCmdClearAttachments-commandBuffer-recording",
    "VUID-vkCmdClearColorImage-commandBuffer-recording",
    "VUID-vkCmdClearDepthStencilImage-commandBuffer-recording",
    "VUID-vkCmdControlVideoCodingKHR-commandBuffer-recording",
    "VUID-vkCmdCopyAccelerationStructureKHR-commandBuffer-recording",
    "VUID-vkCmdCopyAccelerationStructureNV-commandBuffer-recording",
    "VUID-vkCmdCopyAccelerationStructureToMemoryKHR-commandBuffer-recording",
    "VUID-vkCmdCopyBuffer-commandBuffer-recording",
    "VUID-vkCmdCopyBuffer2KHR-commandBuffer-recording",
    "VUID-vkCmdCopyBufferToImage-commandBuffer-recording",
    "VUID-vkCmdCopyBufferToImage2KHR-commandBuffer-recording",
    "VUID-vkCmdCopyImage-commandBuffer-recording",
    "VUID-vkCmdCopyImage2KHR-commandBuffer-recording",
    "VUID-vkCmdCopyImageToBuffer-commandBuffer-recording",
    "VUID-vkCmdCopyImageToBuffer2KHR-commandBuffer-recording",
    "VUID-vkCmdCopyMemoryToAccelerationStructureKHR-commandBuffer-recording",
    "VUID-vkCmdCopyQueryPoolResults-commandBuffer-recording",
    "UNASSIGNED-vkCmdCuLaunchKernelNVX-commandBuffer-recording",
    "VUID-vkCmdDebugMarkerBeginEXT-commandBuffer-recording",
    "VUID-vkCmdDebugMarkerEndEXT-commandBuffer-recording",
    "VUID-vkCmdDebugMarkerInsertEXT-commandBuffer-recording",
    "VUID-vkCmdDecodeVideoKHR-commandBuffer-recording",
    "VUID-vkCmdDispatch-commandBuffer-recording",
    "VUID-vkCmdDispatchBase-commandBuffer-recording",
    "VUID-vkCmdDispatchIndirect-commandBuffer-recording",
    "VUID-vkCmdDraw-commandBuffer-recording",
    "VUID-vkCmdDrawIndexed-commandBuffer-recording",
    "VUID-vkCmdDrawIndexedIndirect-commandBuffer-recording",
    "VUID-vkCmdDrawIndexedIndirectCount-commandBuffer-recording",
    "VUID-vkCmdDrawIndirect-commandBuffer-recording",
    "VUID-vkCmdDrawIndirectByteCountEXT-commandBuffer-recording",
    "VUID-vkCmdDrawIndirectCount-commandBuffer-recording",
    "VUID-vkCmdDrawMeshTasksIndirectCountNV-commandBuffer-recording",
    "VUID-vkCmdDrawMeshTasksIndirectNV-commandBuffer-recording",
    "VUID-vkCmdDrawMeshTasksNV-commandBuffer-recording",
    "VUID-vkCmdDrawMultiEXT-commandBuffer-recording",
    "VUID-vkCmdDrawMultiIndexedEXT-commandBuffer-recording",
    "VUID-vkCmdEncodeVideoKHR-commandBuffer-recording",
    "VUID-vkCmdEndConditionalRenderingEXT-commandBuffer-recording",
    "VUID-vkCmdEndDebugUtilsLabelEXT-commandBuffer-recording",
    "VUID-vkCmdEndQuery-commandBuffer-recording",
    "VUID-vkCmdEndQueryIndexedEXT-commandBuffer-recording",
    "VUID-vkCmdEndRenderPass-commandBuffer-recording",
    "VUID-vkCmdEndRenderPass2-commandBuffer-recording",
    "VUID-vkCmdEndTransformFeedbackEXT-commandBuffer-recording",
    "VUID-vkCmdEndVideoCodingKHR-commandBuffer-recording",
    "VUID-vkCmdExecuteCommands-commandBuffer-recording",
    "VUID-vkCmdExecuteGeneratedCommandsNV-commandBuffer-recording",
    "VUID-vkCmdFillBuffer-commandBuffer-recording",
    "VUID-vkCmdInsertDebugUtilsLabelEXT-commandBuffer-recording",
    "VUID-vkCmdNextSubpass-commandBuffer-recording",
    "VUID-vkCmdNextSubpass2-commandBuffer-recording",
    "VUID-vkCmdPipelineBarrier-commandBuffer-recording",
    "VUID-vkCmdPipelineBarrier2KHR-commandBuffer-recording",
    "VUID-vkCmdPreprocessGeneratedCommandsNV-commandBuffer-recording",
    "VUID-vkCmdPushConstants-commandBuffer-recording",
    "VUID-vkCmdPushDescriptorSetKHR-commandBuffer-recording",
    "VUID-vkCmdPushDescriptorSetWithTemplateKHR-commandBuffer-recording",
    "VUID-vkCmdResetEvent-commandBuffer-recording",
    "VUID-vkCmdResetEvent2KHR-commandBuffer-recording",
    "VUID-vkCmdResetQueryPool-commandBuffer-recording",
    "VUID-vkCmdResolveImage-commandBuffer-recording",
    "VUID-vkCmdResolveImage2KHR-commandBuffer-recording",
    "VUID-vkCmdSetBlendConstants-commandBuffer-recording",
    "VUID-vkCmdSetCheckpointNV-commandBuffer-recording",
    "VUID-vkCmdSetCoarseSampleOrderNV-commandBuffer-recording",
    "VUID-vkCmdSetColorWriteEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetCullModeEXT-commandBuffer-recording",
    "VUID-vkCmdSetDepthBias-commandBuffer-recording",
    "VUID-vkCmdSetDepthBiasEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetDepthBounds-commandBuffer-recording",
    "VUID-vkCmdSetDepthBoundsTestEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetDepthCompareOpEXT-commandBuffer-recording",
    "VUID-vkCmdSetDepthTestEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetDepthWriteEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetDeviceMask-commandBuffer-recording",
    "VUID-vkCmdSetDiscardRectangleEXT-commandBuffer-recording",
    "VUID-vkCmdSetEvent-commandBuffer-recording",
    "VUID-vkCmdSetEvent2KHR-commandBuffer-recording",
    "VUID-vkCmdSetExclusiveScissorNV-commandBuffer-recording",
    "VUID-vkCmdSetFragmentShadingRateEnumNV-commandBuffer-recording",
    "VUID-vkCmdSetFragmentShadingRateKHR-commandBuffer-recording",
    "VUID-vkCmdSetFrontFaceEXT-commandBuffer-recording",
    "VUID-vkCmdSetLineStippleEXT-commandBuffer-recording",
    "VUID-vkCmdSetLineWidth-commandBuffer-recording",
    "VUID-vkCmdSetLogicOpEXT-commandBuffer-recording",
    "VUID-vkCmdSetPatchControlPointsEXT-commandBuffer-recording",
    "VUID-vkCmdSetPerformanceMarkerINTEL-commandBuffer-recording",
    "VUID-vkCmdSetPerformanceOverrideINTEL-commandBuffer-recording",
    "VUID-vkCmdSetPerformanceStreamMarkerINTEL-commandBuffer-recording",
    "VUID-vkCmdSetPrimitiveRestartEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetPrimitiveTopologyEXT-commandBuffer-recording",
    "VUID-vkCmdSetRasterizerDiscardEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetRayTracingPipelineStackSizeKHR-commandBuffer-recording",
    "VUID-vkCmdSetSampleLocationsEXT-commandBuffer-recording",
    "VUID-vkCmdSetScissor-commandBuffer-recording",
    "VUID-vkCmdSetScissorWithCountEXT-commandBuffer-recording",
    "VUID-vkCmdSetStencilCompareMask-commandBuffer-recording",
    "VUID-vkCmdSetStencilOpEXT-commandBuffer-recording",
    "VUID-vkCmdSetStencilReference-commandBuffer-recording",
    "VUID-vkCmdSetStencilTestEnableEXT-commandBuffer-recording",
    "VUID-vkCmdSetStencilWriteMask-commandBuffer-recording",
    "VUID-vkCmdSetVertexInputEXT-commandBuffer-recording",
    "VUID-vkCmdSetViewport-commandBuffer-recording",
    "VUID-vkCmdSetViewportShadingRatePaletteNV-commandBuffer-recording",
    "VUID-vkCmdSetViewportWScalingNV-commandBuffer-recording",
    "VUID-vkCmdSetViewportWithCountEXT-commandBuffer-recording",
    "VUID-vkCmdTraceRaysIndirectKHR-commandBuffer-recording",
    "VUID-vkCmdTraceRaysKHR-commandBuffer-recording",
    "VUID-vkCmdTraceRaysNV-commandBuffer-recording",
    "VUID-vkCmdUpdateBuffer-commandBuffer-recording",
    "VUID-vkCmdWaitEvents-commandBuffer-recording",
    "VUID-vkCmdWaitEvents2KHR-commandBuffer-recording",
    "VUID-vkCmdWriteAccelerationStructuresPropertiesKHR-commandBuffer-recording",
    "VUID-vkCmdWriteAccelerationStructuresPropertiesNV-commandBuffer-recording",
    "VUID-vkCmdWriteBufferMarker2AMD-commandBuffer-recording",
    "VUID-vkCmdWriteBufferMarkerAMD-commandBuffer-recording",
    "VUID-vkCmdWriteTimestamp-commandBuffer-recording",
    "VUID-vkCmdWriteTimestamp2KHR-commandBuffer-recording",
}};

struct CommandSupportedQueueType {
    VkQueueFlags flags;
    const char* vuid;
};
static const std::array<CommandSupportedQueueType, CMD_RANGE_SIZE> kGeneratedQueueTypeList = {{
    {VK_QUEUE_FLAG_BITS_MAX_ENUM, kVUIDUndefined},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBeginConditionalRenderingEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBeginDebugUtilsLabelEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBeginQuery-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBeginQueryIndexedEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBeginRenderPass-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBeginRenderPass2-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBeginTransformFeedbackEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_VIDEO_DECODE_BIT_KHR | VK_QUEUE_VIDEO_ENCODE_BIT_KHR, "VUID-vkCmdBeginVideoCodingKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBindDescriptorSets-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBindIndexBuffer-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBindPipeline-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBindPipelineShaderGroupNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBindShadingRateImageNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBindTransformFeedbackBuffersEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBindVertexBuffers-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBindVertexBuffers2EXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBlitImage-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdBlitImage2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBuildAccelerationStructureNV-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBuildAccelerationStructuresIndirectKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdBuildAccelerationStructuresKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdClearAttachments-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdClearColorImage-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdClearDepthStencilImage-commandBuffer-cmdpool"},
    {VK_QUEUE_VIDEO_DECODE_BIT_KHR | VK_QUEUE_VIDEO_ENCODE_BIT_KHR, "VUID-vkCmdControlVideoCodingKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyAccelerationStructureKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyAccelerationStructureNV-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyAccelerationStructureToMemoryKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyBuffer-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyBuffer2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyBufferToImage-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyBufferToImage2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyImage-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyImage2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyImageToBuffer-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyImageToBuffer2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyMemoryToAccelerationStructureKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdCopyQueryPoolResults-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "UNASSIGNED-vkCmdCuLaunchKernelNVX-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdDebugMarkerBeginEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdDebugMarkerEndEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdDebugMarkerInsertEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_VIDEO_DECODE_BIT_KHR, "VUID-vkCmdDecodeVideoKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdDispatch-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdDispatchBase-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdDispatchIndirect-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDraw-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawIndexed-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawIndexedIndirect-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawIndexedIndirectCount-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawIndirect-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawIndirectByteCountEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawIndirectCount-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawMeshTasksIndirectCountNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawMeshTasksIndirectNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawMeshTasksNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawMultiEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdDrawMultiIndexedEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_VIDEO_ENCODE_BIT_KHR, "VUID-vkCmdEncodeVideoKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdEndConditionalRenderingEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdEndDebugUtilsLabelEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdEndQuery-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdEndQueryIndexedEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdEndRenderPass-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdEndRenderPass2-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdEndTransformFeedbackEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_VIDEO_DECODE_BIT_KHR | VK_QUEUE_VIDEO_ENCODE_BIT_KHR, "VUID-vkCmdEndVideoCodingKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdExecuteCommands-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdExecuteGeneratedCommandsNV-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdFillBuffer-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdInsertDebugUtilsLabelEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdNextSubpass-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdNextSubpass2-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdPipelineBarrier-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdPipelineBarrier2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdPreprocessGeneratedCommandsNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdPushConstants-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdPushDescriptorSetKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdPushDescriptorSetWithTemplateKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdResetEvent-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdResetEvent2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdResetQueryPool-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdResolveImage-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdResolveImage2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetBlendConstants-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT, "VUID-vkCmdSetCheckpointNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetCoarseSampleOrderNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetColorWriteEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetCullModeEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDepthBias-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDepthBiasEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDepthBounds-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDepthBoundsTestEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDepthCompareOpEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDepthTestEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDepthWriteEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT, "VUID-vkCmdSetDeviceMask-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetDiscardRectangleEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdSetEvent-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdSetEvent2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetExclusiveScissorNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetFragmentShadingRateEnumNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetFragmentShadingRateKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetFrontFaceEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetLineStippleEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetLineWidth-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetLogicOpEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetPatchControlPointsEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT, "VUID-vkCmdSetPerformanceMarkerINTEL-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT, "VUID-vkCmdSetPerformanceOverrideINTEL-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT, "VUID-vkCmdSetPerformanceStreamMarkerINTEL-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetPrimitiveRestartEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetPrimitiveTopologyEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetRasterizerDiscardEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdSetRayTracingPipelineStackSizeKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetSampleLocationsEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetScissor-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetScissorWithCountEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetStencilCompareMask-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetStencilOpEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetStencilReference-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetStencilTestEnableEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetStencilWriteMask-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetVertexInputEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetViewport-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetViewportShadingRatePaletteNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetViewportWScalingNV-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT, "VUID-vkCmdSetViewportWithCountEXT-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdTraceRaysIndirectKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdTraceRaysKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdTraceRaysNV-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdUpdateBuffer-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWaitEvents-commandBuffer-cmdpool"},
    {VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWaitEvents2KHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWriteAccelerationStructuresPropertiesKHR-commandBuffer-cmdpool"},
    {VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWriteAccelerationStructuresPropertiesNV-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWriteBufferMarker2AMD-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWriteBufferMarkerAMD-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWriteTimestamp-commandBuffer-cmdpool"},
    {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT, "VUID-vkCmdWriteTimestamp2KHR-commandBuffer-cmdpool"},
}};

enum CMD_RENDER_PASS_TYPE {
    CMD_RENDER_PASS_INSIDE,
    CMD_RENDER_PASS_OUTSIDE,
    CMD_RENDER_PASS_BOTH
};
struct CommandSupportedRenderPass {
    CMD_RENDER_PASS_TYPE renderPass;
    const char* vuid;
};
static const std::array<CommandSupportedRenderPass, CMD_RANGE_SIZE> kGeneratedRenderPassList = {{
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined}, // CMD_NONE
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBeginRenderPass-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBeginRenderPass2-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdBeginTransformFeedbackEXT-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBeginVideoCodingKHR-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBlitImage-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBlitImage2KHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBuildAccelerationStructureNV-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBuildAccelerationStructuresIndirectKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdBuildAccelerationStructuresKHR-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdClearAttachments-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdClearColorImage-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdClearDepthStencilImage-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdControlVideoCodingKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyAccelerationStructureKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyAccelerationStructureNV-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyAccelerationStructureToMemoryKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyBuffer-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyBuffer2KHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyBufferToImage-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyBufferToImage2KHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyImage-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyImage2KHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyImageToBuffer-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyImageToBuffer2KHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyMemoryToAccelerationStructureKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdCopyQueryPoolResults-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdDecodeVideoKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdDispatch-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdDispatchBase-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdDispatchIndirect-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDraw-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawIndexed-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawIndexedIndirect-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawIndexedIndirectCount-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawIndirect-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawIndirectByteCountEXT-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawIndirectCount-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawMeshTasksIndirectCountNV-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawMeshTasksIndirectNV-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawMeshTasksNV-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawMultiEXT-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdDrawMultiIndexedEXT-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdEncodeVideoKHR-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdEndRenderPass-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdEndRenderPass2-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdEndTransformFeedbackEXT-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdEndVideoCodingKHR-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdExecuteGeneratedCommandsNV-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdFillBuffer-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdNextSubpass-renderpass"},
    {CMD_RENDER_PASS_INSIDE, "VUID-vkCmdNextSubpass2-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdPreprocessGeneratedCommandsNV-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdResetEvent-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdResetEvent2KHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdResetQueryPool-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdResolveImage-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdResolveImage2KHR-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdSetEvent-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdSetEvent2KHR-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdSetRayTracingPipelineStackSizeKHR-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdTraceRaysIndirectKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdTraceRaysKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdTraceRaysNV-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdUpdateBuffer-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdWriteAccelerationStructuresPropertiesKHR-renderpass"},
    {CMD_RENDER_PASS_OUTSIDE, "VUID-vkCmdWriteAccelerationStructuresPropertiesNV-renderpass"},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
    {CMD_RENDER_PASS_BOTH, kVUIDUndefined},
}};

static const std::array<const char *, CMD_RANGE_SIZE> kGeneratedBufferLevelList = {{
    kVUIDUndefined, // CMD_NONE
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    "VUID-vkCmdBeginRenderPass-bufferlevel",
    "VUID-vkCmdBeginRenderPass2-bufferlevel",
    nullptr,
    "VUID-vkCmdBeginVideoCodingKHR-bufferlevel",
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    "VUID-vkCmdControlVideoCodingKHR-bufferlevel",
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    "VUID-vkCmdDecodeVideoKHR-bufferlevel",
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    "VUID-vkCmdEncodeVideoKHR-bufferlevel",
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    "VUID-vkCmdEndRenderPass-bufferlevel",
    "VUID-vkCmdEndRenderPass2-bufferlevel",
    nullptr,
    "VUID-vkCmdEndVideoCodingKHR-bufferlevel",
    "VUID-vkCmdExecuteCommands-bufferlevel",
    nullptr,
    nullptr,
    nullptr,
    "VUID-vkCmdNextSubpass-bufferlevel",
    "VUID-vkCmdNextSubpass2-bufferlevel",
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
}};

// Used to handle all the implicit VUs that are autogenerated from the registry
bool CoreChecks::ValidateCmd(const CMD_BUFFER_STATE *cb_state, const CMD_TYPE cmd, const char *caller_name) const {
    bool skip = false;

    // Tracks the number of commands recorded in a command buffer
    // This const_cast is not ideal, but easier to maintain incrementing here as this is a single location
    // all vkCmd* calls are funneled into. The other option is to append another function pointer for each call
    // in the ValidationObject object_dispatch. This is also making assumption this function is locked and this
    // write is not going to race without another copy of the CMD_BUFFER_STATE instance.
    const_cast<CMD_BUFFER_STATE *>(cb_state)->commandCount++;

    // Validate the given command being added to the specified cmd buffer,
    // flagging errors if CB is not in the recording state or if there's an issue with the Cmd ordering
    switch (cb_state->state) {
        case CB_RECORDING:
            skip |= ValidateCmdSubpassState(cb_state, cmd);
            break;

        case CB_INVALID_COMPLETE:
        case CB_INVALID_INCOMPLETE:
            skip |= ReportInvalidCommandBuffer(cb_state, caller_name);
            break;

        default:
            assert(cmd != CMD_NONE);
            const auto error = kGeneratedMustBeRecordingList[cmd];
            skip |= LogError(cb_state->commandBuffer(), error, "You must call vkBeginCommandBuffer() before this call to %s.",
                            caller_name);
    }

    // Validate the command pool from which the command buffer is from that the command is allowed for queue type
    const auto supportedQueueType = kGeneratedQueueTypeList[cmd];
    skip |= ValidateCmdQueueFlags(cb_state, caller_name, supportedQueueType.flags, supportedQueueType.vuid);

    // Validate if command is inside or outside a render pass if applicable
    const auto supportedRenderPass = kGeneratedRenderPassList[cmd];
    if (supportedRenderPass.renderPass == CMD_RENDER_PASS_INSIDE) {
        skip |= OutsideRenderPass(cb_state, caller_name, supportedRenderPass.vuid);
    } else if (supportedRenderPass.renderPass == CMD_RENDER_PASS_OUTSIDE) {
        skip |= InsideRenderPass(cb_state, caller_name, supportedRenderPass.vuid);
    }

    // Validate if command has to be recorded in a primary command buffer
    const auto supportedBufferLevel = kGeneratedBufferLevelList[cmd];
    if (supportedBufferLevel != nullptr) {
        skip |= ValidatePrimaryCommandBuffer(cb_state, caller_name, supportedBufferLevel);
    }

    return skip;
}
