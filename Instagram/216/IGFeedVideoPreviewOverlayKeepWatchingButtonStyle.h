//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGFeedVideoPreviewOverlayKeepWatchingButtonStyle : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _video_centerAlignment;
    _Bool _sundial_centerAlignment;
}

+ (id)videoWithCenterAlignment:(_Bool)arg1;
+ (id)unbranded;
+ (id)sundialWithCenterAlignment:(_Bool)arg1;
+ (id)igtv;
+ (id)hidden;
- (void)matchIgtv:(CDUnknownBlockType)arg1 video:(CDUnknownBlockType)arg2 unbranded:(CDUnknownBlockType)arg3 hidden:(CDUnknownBlockType)arg4 sundial:(CDUnknownBlockType)arg5;

@end

