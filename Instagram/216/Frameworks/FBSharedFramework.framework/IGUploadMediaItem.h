//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGUploadAudioItem, IGUploadPhotoItem, IGUploadVideoItem;

@interface IGUploadMediaItem : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGUploadPhotoItem *_photoItem_photo;
    IGUploadVideoItem *_videoItem_video;
    IGUploadAudioItem *_audioItem_audio;
}

+ (id)videoItemWithVideo:(id)arg1;
+ (id)photoItemWithPhoto:(id)arg1;
+ (id)audioItemWithAudio:(id)arg1;
- (void).cxx_destruct;
- (void)matchPhotoItem:(CDUnknownBlockType)arg1 videoItem:(CDUnknownBlockType)arg2 audioItem:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
