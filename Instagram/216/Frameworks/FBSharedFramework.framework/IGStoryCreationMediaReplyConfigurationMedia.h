//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGPhoto, UIImage;

@interface IGStoryCreationMediaReplyConfigurationMedia : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGPhoto *_photo_sourceMediaPhoto;
    UIImage *_videoFrame_sourceMediaVideoFrame;
}

+ (id)videoFrameWithSourceMediaVideoFrame:(id)arg1;
+ (id)photoWithSourceMediaPhoto:(id)arg1;
- (void).cxx_destruct;
- (void)matchPhoto:(CDUnknownBlockType)arg1 videoFrame:(CDUnknownBlockType)arg2;

@end

