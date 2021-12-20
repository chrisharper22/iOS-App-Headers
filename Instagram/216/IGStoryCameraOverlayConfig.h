//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGARBrandAdsCameraCoordinator, IGDirectShareRecipient, IGDirectThreadKey, IGMedia, IGShoppingCameraCoordinator, IGStoryCameraFormatModel, IGStoryCreateModeAttributionModel, IGStoryCreationDirectConfiguration, IGStoryCreationMediaReplyConfiguration, IGStoryStickerDataSource, IGSundialRemixedVideo, NSArray;

@interface IGStoryCameraOverlayConfig : NSObject
{
    _Bool _showLiveAREffects;
    _Bool _isReply;
    _Bool _isLiveSupported;
    _Bool _sourceMediaOverlayStyleToggleEnabled;
    _Bool _isFriendCardSupported;
    _Bool _prefersStatusBarHidden;
    _Bool _continuousCaptureRingEnabled;
    _Bool _supportsGallery;
    _Bool _showSettingsButton;
    _Bool _canShowEffectDiscovery;
    IGDirectShareRecipient *_directRecipient;
    IGDirectThreadKey *_threadKey;
    IGStoryCreationDirectConfiguration *_directConfiguration;
    IGShoppingCameraCoordinator *_shoppingCameraCoordinator;
    IGARBrandAdsCameraCoordinator *_arBandAdsCameraCoordinator;
    long long _creationStyle;
    NSArray *_availableCameraSwitcherModes;
    NSArray *_availableCaptureButtonModes;
    IGStoryCameraFormatModel *_initialCameraSwitcherMode;
    IGStoryCameraFormatModel *_targetCameraSwitcherMode;
    IGStoryCreationMediaReplyConfiguration *_mediaReplyConfig;
    double _cameraCornerRadius;
    NSArray *_availableCameraCaptureFormats;
    IGStoryCreateModeAttributionModel *_createModeAttributionModel;
    IGSundialRemixedVideo *_sundialRemixedVideo;
    IGStoryStickerDataSource *_stickerDataSource;
    IGMedia *_reshareStickerTutorialMedia;
    double _maxVideoDuration;
    NSArray *_preferredMediaTypes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *preferredMediaTypes; // @synthesize preferredMediaTypes=_preferredMediaTypes;
@property(readonly, nonatomic) double maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(readonly, nonatomic) IGMedia *reshareStickerTutorialMedia; // @synthesize reshareStickerTutorialMedia=_reshareStickerTutorialMedia;
@property(readonly, nonatomic) IGStoryStickerDataSource *stickerDataSource; // @synthesize stickerDataSource=_stickerDataSource;
@property(readonly, nonatomic) IGSundialRemixedVideo *sundialRemixedVideo; // @synthesize sundialRemixedVideo=_sundialRemixedVideo;
@property(readonly, nonatomic) IGStoryCreateModeAttributionModel *createModeAttributionModel; // @synthesize createModeAttributionModel=_createModeAttributionModel;
@property(readonly, nonatomic) _Bool canShowEffectDiscovery; // @synthesize canShowEffectDiscovery=_canShowEffectDiscovery;
@property(readonly, nonatomic) _Bool showSettingsButton; // @synthesize showSettingsButton=_showSettingsButton;
@property(readonly, nonatomic) _Bool supportsGallery; // @synthesize supportsGallery=_supportsGallery;
@property(readonly, nonatomic) NSArray *availableCameraCaptureFormats; // @synthesize availableCameraCaptureFormats=_availableCameraCaptureFormats;
@property(readonly, nonatomic) _Bool continuousCaptureRingEnabled; // @synthesize continuousCaptureRingEnabled=_continuousCaptureRingEnabled;
@property(readonly, nonatomic) double cameraCornerRadius; // @synthesize cameraCornerRadius=_cameraCornerRadius;
@property(readonly, nonatomic) _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(readonly, nonatomic) _Bool isFriendCardSupported; // @synthesize isFriendCardSupported=_isFriendCardSupported;
@property(readonly, nonatomic) IGStoryCreationMediaReplyConfiguration *mediaReplyConfig; // @synthesize mediaReplyConfig=_mediaReplyConfig;
@property(readonly, nonatomic) _Bool sourceMediaOverlayStyleToggleEnabled; // @synthesize sourceMediaOverlayStyleToggleEnabled=_sourceMediaOverlayStyleToggleEnabled;
@property(readonly, nonatomic) _Bool isLiveSupported; // @synthesize isLiveSupported=_isLiveSupported;
@property(readonly, nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(readonly, nonatomic) _Bool showLiveAREffects; // @synthesize showLiveAREffects=_showLiveAREffects;
@property(readonly, nonatomic) IGStoryCameraFormatModel *targetCameraSwitcherMode; // @synthesize targetCameraSwitcherMode=_targetCameraSwitcherMode;
@property(readonly, nonatomic) IGStoryCameraFormatModel *initialCameraSwitcherMode; // @synthesize initialCameraSwitcherMode=_initialCameraSwitcherMode;
@property(readonly, nonatomic) NSArray *availableCaptureButtonModes; // @synthesize availableCaptureButtonModes=_availableCaptureButtonModes;
@property(readonly, nonatomic) NSArray *availableCameraSwitcherModes; // @synthesize availableCameraSwitcherModes=_availableCameraSwitcherModes;
@property(readonly, nonatomic) long long creationStyle; // @synthesize creationStyle=_creationStyle;
@property(readonly, nonatomic) IGARBrandAdsCameraCoordinator *arBandAdsCameraCoordinator; // @synthesize arBandAdsCameraCoordinator=_arBandAdsCameraCoordinator;
@property(readonly, nonatomic) IGShoppingCameraCoordinator *shoppingCameraCoordinator; // @synthesize shoppingCameraCoordinator=_shoppingCameraCoordinator;
@property(readonly, nonatomic) IGStoryCreationDirectConfiguration *directConfiguration; // @synthesize directConfiguration=_directConfiguration;
@property(readonly, nonatomic) IGDirectThreadKey *threadKey; // @synthesize threadKey=_threadKey;
@property(readonly, nonatomic) IGDirectShareRecipient *directRecipient; // @synthesize directRecipient=_directRecipient;
- (_Bool)isValidCameraSwitcherMode:(id)arg1;
- (id)initWithCreationConfig:(id)arg1 availableSwitcherModes:(id)arg2 availableCaptureButtonModes:(id)arg3 initialCameraSwitcherMode:(id)arg4 storyCameraFormatModel:(id)arg5 availableCameraCaptureFormats:(id)arg6 preferredMediaTypes:(id)arg7 canShowEffectDiscovery:(_Bool)arg8;

@end

