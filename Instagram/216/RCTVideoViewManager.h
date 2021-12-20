//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTVideoViewDelegate-Protocol.h"

@class NSString;

@interface RCTVideoViewManager : RCTViewManager <RCTVideoViewDelegate>
{
}

+ (const struct RCTMethodInfo *)__rct_export__720;
+ (id)propConfig_onStateChange;
+ (id)propConfig_onProgress;
+ (id)propConfig_silentMode;
+ (id)propConfig_resizeMode;
+ (id)propConfig_volume;
+ (id)propConfig_isPaused;
+ (id)propConfig_src;
+ (_Bool)requiresMainQueueSetup;
+ (id)moduleName;
- (void)videoViewCurrentTimeDidChange:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(float)arg3;
- (void)videoViewStateDidChange:(id)arg1;
- (void)seekTo:(id)arg1 toTime:(double)arg2;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
