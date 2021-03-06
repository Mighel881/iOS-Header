//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCapturePhotoOutputInternal, AVCapturePhotoSettings, NSArray;

@interface AVCapturePhotoOutput : AVCaptureOutput
{
    AVCapturePhotoOutputInternal *_internal;
}

+ (struct __CFDictionary *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (id)validMetadataTopLevelCGImagePropertiesKeys;
+ (CDStruct_79c71658)maxLivePhotoMovieDimensions;
+ (unsigned long long)maxLivePhotoDataSize;
+ (id)DNGPhotoDataRepresentationForRawSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
+ (id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
+ (id)new;
+ (void)initialize;
- (void)_handleDidFinishMovieCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishWritingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishRecordingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidBeginRecordingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 movieRequest:(id)arg2 payload:(id)arg3 isSpatialOverCaptureMovie:(_Bool)arg4;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 photoRequest:(id)arg2 payload:(id)arg3 isOriginalMovie:(_Bool)arg4;
- (void)setFigCaptureSessionSectionProperty:(struct __CFString *)arg1 withHostTime:(CDStruct_1b6d18a9)arg2 settingStateVariableToNoOnFailure:(_Bool *)arg3;
- (void)_handleDidFinishRecordingVideoNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleStillImageCompleteNotification:(id)arg1 withPayload:(id)arg2 forRequest:(id)arg3;
- (void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2;
- (void)_handlePreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_movieRequestForUniqueID:(long long)arg1;
- (void)_dispatchFailureCallbacks:(unsigned int)arg1 forMovieRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(_Bool)arg4;
- (void)_dispatchFailureCallbacksForMovieRecordingSettings:(id)arg1 momentCaptureSettings:(id)arg2 toDelegate:(id)arg3 withError:(id)arg4;
- (id)_photoRequestForUniqueID:(long long)arg1;
- (void)_dispatchFailureCallbacks:(unsigned int)arg1 forPhotoRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(_Bool)arg4;
- (void)_dispatchFailureCallbacksForPhotoSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3;
- (id)_sanitizedSettingsForSettings:(id)arg1;
- (id)_figCaptureIrisPreparedSettingsForRequest:(id)arg1;
- (id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (id)_figCaptureMovieFileRecordingSettingsForAVMomentCaptureMovieRecordingSettings:(id)arg1 momentCaptureSettings:(id)arg2 delegate:(id)arg3 connections:(id)arg4;
- (void)_setDigitalFlashScene:(id)arg1 fireStatusKVO:(_Bool)arg2 fireExposureTimesKVO:(_Bool)arg3;
- (void)_setIsStillImageStabilizationScene:(_Bool)arg1 firingKVO:(_Bool)arg2;
- (void)_setIsHDRScene:(_Bool)arg1 firingKVO:(_Bool)arg2;
- (void)_setIsFlashScene:(_Bool)arg1 firingKVO:(_Bool)arg2;
- (void)_decrementObserverCountForKeyPath:(id)arg1;
- (void)_incrementObserverCountForKeyPath:(id)arg1;
- (void)_updateProcessedPhotoZoomWithoutUpscalingSupportedForSourceDevice:(id)arg1;
- (void)_updateDeferredProcessingSupportedForSourceDevice:(id)arg1;
- (void)_updateMovieRecordingSupportedForSourceDevice:(id)arg1;
- (void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateSceneMonitoringForSourceDevice:(id)arg1;
- (void)_resetLivePhotoMovieProcessingSuspended;
- (void)_resetLivePhotoCaptureSuspended;
- (void)_updateOfflineVISSupportedForSourceDevice:(id)arg1;
- (void)_updateAvailableLivePhotoVideoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1;
- (void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1;
- (void)_updateSupportedDigitalFlashModesForSourceDevice:(id)arg1;
- (void)_updateSupportedFlashModesForSourceDevice:(id)arg1;
- (void)_updateSupportedHDRModesForSourceDevice:(id)arg1;
- (void)_updateCameraCalibrationDataDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateVirtualDeviceConstituentPhotoDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateDualCameraDualPhotoDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateVirtualDeviceFusionSupportedForSourceDevice:(id)arg1;
- (void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1;
- (void)_updateAvailableRawPhotoFileTypesForSourceDevice:(id)arg1;
- (void)_updateAutoRedReductionSupportedForSourceDevice:(id)arg1;
- (_Bool)_HEVCAndHEIFAreAvailableForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoFileTypesForSourceDevice:(id)arg1;
- (void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateSupportedPropertiesForSourceDevice:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)connectionMediaTypes;
- (void)setSession:(id)arg1;
- (id)figCaptureIrisPreparedSettings;
- (_Bool)isProcessedPhotoZoomWithoutUpscalingSupported;
- (void)endCaptureWithUniqueID:(long long)arg1;
- (void)commitCaptureWithSettings:(id)arg1 delegate:(id)arg2;
- (void)initiateCaptureWithSettings:(id)arg1;
- (_Bool)isVideoCaptureEnabled;
- (void)setVideoCaptureEnabled:(_Bool)arg1;
- (_Bool)isVideoCaptureSupported;
- (void)endMomentCaptureWithUniqueID:(long long)arg1;
- (void)cancelMomentCaptureWithUniqueID:(long long)arg1;
- (void)commitMomentCaptureWithUniqueID:(long long)arg1 toMovieRecordingWithSettings:(id)arg2 delegate:(id)arg3;
- (void)commitMomentCaptureWithUniqueID:(long long)arg1 toPhotoCaptureWithSettings:(id)arg2 delegate:(id)arg3;
- (void)beginMomentCaptureWithSettings:(id)arg1;
- (void)setMovieRecordingEnabled:(_Bool)arg1;
- (_Bool)isMovieRecordingEnabled;
- (_Bool)isMovieRecordingSupported;
- (void)userInitiatedCaptureRequestAtTime:(unsigned long long)arg1;
- (void)setFilterRenderingEnabled:(_Bool)arg1;
- (_Bool)isFilterRenderingEnabled;
- (CDStruct_79c71658)optimizedImageDimensionsForOfflineStabilization;
- (void)setOptimizesImagesForOfflineVideoStabilization:(_Bool)arg1;
- (_Bool)optimizesImagesForOfflineVideoStabilization;
- (_Bool)isImageOptimizationForOfflineVideoStabilizationSupported;
- (CDStruct_1b6d18a9)livePhotoMovieVideoFrameDuration;
- (CDStruct_1b6d18a9)livePhotoMovieDuration;
- (CDStruct_79c71658)livePhotoMovieDimensions;
- (void)setEnabledSemanticSegmentationMatteTypes:(id)arg1;
- (id)enabledSemanticSegmentationMatteTypes;
- (id)availableSemanticSegmentationMatteTypes;
- (void)setPortraitEffectsMatteDeliveryEnabled:(_Bool)arg1;
- (_Bool)isPortraitEffectsMatteDeliveryEnabled;
- (_Bool)isPortraitEffectsMatteDeliverySupported;
- (void)setDepthDataDeliveryEnabled:(_Bool)arg1;
- (_Bool)isDepthDataDeliveryEnabled;
- (_Bool)isDepthDataDeliverySupported;
- (void)setLivePhotoMovieProcessingSuspended:(_Bool)arg1;
- (_Bool)isLivePhotoMovieProcessingSuspended;
@property(readonly, nonatomic) NSArray *availableLivePhotoVideoCodecTypes;
@property(nonatomic, getter=isLivePhotoAutoTrimmingEnabled) _Bool livePhotoAutoTrimmingEnabled;
@property(nonatomic, getter=isLivePhotoCaptureSuspended) _Bool livePhotoCaptureSuspended;
@property(nonatomic, getter=isLivePhotoCaptureEnabled) _Bool livePhotoCaptureEnabled;
@property(readonly, nonatomic, getter=isLivePhotoCaptureSupported) _Bool livePhotoCaptureSupported;
@property(readonly, nonatomic, getter=isLensStabilizationDuringBracketedCaptureSupported) _Bool lensStabilizationDuringBracketedCaptureSupported;
@property(readonly, nonatomic) unsigned long long maxBracketedCapturePhotoCount;
@property(nonatomic, getter=isHighResolutionCaptureEnabled) _Bool highResolutionCaptureEnabled;
@property(copy, nonatomic) AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
- (void)setDeferredProcessingEnabled:(_Bool)arg1;
- (_Bool)isDeferredProcessingEnabled;
- (_Bool)isDeferredProcessingSupported;
@property(readonly, nonatomic, getter=isCameraCalibrationDataDeliverySupported) _Bool cameraCalibrationDataDeliverySupported;
@property(nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) _Bool dualCameraDualPhotoDeliveryEnabled;
@property(nonatomic, getter=isVirtualDeviceConstituentPhotoDeliveryEnabled) _Bool virtualDeviceConstituentPhotoDeliveryEnabled;
@property(readonly, nonatomic, getter=isDualCameraDualPhotoDeliverySupported) _Bool dualCameraDualPhotoDeliverySupported;
@property(readonly, nonatomic, getter=isVirtualDeviceConstituentPhotoDeliverySupported) _Bool virtualDeviceConstituentPhotoDeliverySupported;
@property(readonly, nonatomic, getter=isDualCameraFusionSupported) _Bool dualCameraFusionSupported;
@property(readonly, nonatomic, getter=isVirtualDeviceFusionSupported) _Bool virtualDeviceFusionSupported;
- (id)digitalFlashExposureTimes;
- (long long)digitalFlashStatus;
- (id)supportedDigitalFlashModes;
- (void)setDigitalFlashCaptureEnabled:(_Bool)arg1;
- (_Bool)isDigitalFlashCaptureEnabled;
@property(readonly, nonatomic) _Bool isFlashScene;
@property(readonly, nonatomic, getter=isAutoRedEyeReductionSupported) _Bool autoRedEyeReductionSupported;
@property(readonly, nonatomic) NSArray *supportedFlashModes;
@property(readonly, nonatomic) _Bool isStillImageStabilizationScene;
- (_Bool)isHDRScene;
- (id)supportedHDRModes;
@property(readonly, nonatomic, getter=isStillImageStabilizationSupported) _Bool stillImageStabilizationSupported;
@property(nonatomic) long long maxPhotoQualityPrioritization;
- (id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1;
- (id)supportedPhotoCodecTypesForFileType:(id)arg1;
- (id)supportedPhotoPixelFormatTypesForFileType:(id)arg1;
@property(readonly, nonatomic) NSArray *availableRawPhotoFileTypes;
@property(readonly, nonatomic) NSArray *availablePhotoFileTypes;
@property(readonly, nonatomic) NSArray *availableRawPhotoPixelFormatTypes;
@property(readonly, nonatomic) NSArray *availablePhotoCodecTypes;
@property(readonly, nonatomic) NSArray *availablePhotoPixelFormatTypes;
- (void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *preparedPhotoSettingsArray;
- (void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

