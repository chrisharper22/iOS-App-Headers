//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IGDirectInboxThreadCellAccessoryButtonConfig : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)_configWithAccessoryType:(long long)arg1 tintColor:(id)arg2 borderColor:(id)arg3 interViewPadding:(double)arg4 pulsingRepeatCount:(long long)arg5;
+ (id)_configWithAccessoryType:(long long)arg1 tintColor:(id)arg2 borderColor:(id)arg3 interViewPadding:(double)arg4;
+ (id)videoCallConfigWithTintColor:(id)arg1 tableInterViewPadding:(double)arg2;
+ (id)seenMissedAudioCallJointButtonConfigTableInterViewPadding:(double)arg1;
+ (id)seenMissedVideoCallJointButtonConfigTableInterViewPadding:(double)arg1;
+ (id)missedAudioCallJointButtonConfigTableInterViewPadding:(double)arg1;
+ (id)missedVideoCallJointButtonConfigTableInterViewPadding:(double)arg1;
+ (id)activeAudioCallJointButtonConfigTableInterViewPadding:(double)arg1 pulsingRepeatCount:(long long)arg2;
+ (id)activeVideoCallJointButtonConfigTableInterViewPadding:(double)arg1 pulsingRepeatCount:(long long)arg2;
+ (id)condensedLoadingConfigTableInterViewPadding:(double)arg1;
+ (id)condensedPlayIconOnlyConfigTableInterViewPadding:(double)arg1;
+ (id)condensedPlayConfigTableInterViewPadding:(double)arg1;
+ (id)condensedCameraReplyConfigWithTintColor:(id)arg1 tableInterViewPadding:(double)arg2;
+ (id)openThreadConfigWithTintColor:(id)arg1 tableInterViewPadding:(double)arg2;
+ (id)cameraReplyConfigWithTintColor:(id)arg1 tableInterViewPadding:(double)arg2;
+ (id)cameraConfigWithTintColor:(id)arg1 tableInterViewPadding:(double)arg2;
+ (id)noneConfig;
- (struct UIEdgeInsets)titleInsets;
- (id)accessibilityTitle;

@end
