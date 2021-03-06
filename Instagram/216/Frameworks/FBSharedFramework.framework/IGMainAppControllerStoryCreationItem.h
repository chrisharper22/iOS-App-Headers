//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGMainAppControllerStoryEphemeralEffectParams, IGPromptStickerModel, IGStoryCameraFormatModel, IGStoryGalleryConfiguration, NSString;

@interface IGMainAppControllerStoryCreationItem : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_targetEffect_targetEffectId;
    NSString *_targetEffect_cryptohash;
    IGMainAppControllerStoryEphemeralEffectParams *_targetEffect_ephemeralEffectParams;
    NSString *_targetEffect_revisionId;
    NSString *_targetEffect_attributionId;
    NSString *_targetSticker_targetStickerId;
    _Bool _targetSticker_isSuggestedSticker;
    IGStoryCameraFormatModel *_targetSwitcherMode_cameraFormatModel;
    IGPromptStickerModel *_promptSticker_promptStickerModel;
    IGStoryGalleryConfiguration *_gallery_galleryConfiguration;
}

+ (id)targetSwitcherModeWithCameraFormatModel:(id)arg1;
+ (id)targetStickerWithTargetStickerId:(id)arg1 isSuggestedSticker:(_Bool)arg2;
+ (id)targetEffectWithTargetEffectId:(id)arg1 cryptohash:(id)arg2 ephemeralEffectParams:(id)arg3 revisionId:(id)arg4 attributionId:(id)arg5;
+ (id)promptStickerWithPromptStickerModel:(id)arg1;
+ (id)galleryWithGalleryConfiguration:(id)arg1;
+ (id)defaultCamera;
- (void).cxx_destruct;
- (void)matchDefaultCamera:(CDUnknownBlockType)arg1 targetEffect:(CDUnknownBlockType)arg2 targetSticker:(CDUnknownBlockType)arg3 targetSwitcherMode:(CDUnknownBlockType)arg4 promptSticker:(CDUnknownBlockType)arg5 gallery:(CDUnknownBlockType)arg6;

@end

