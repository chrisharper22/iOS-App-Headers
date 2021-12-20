//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class UIView;

@interface IGRTCVideoCallParticipantVideoInfo : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIView *_stalled_view;
    UIView *_running_view;
}

+ (id)stalledWithView:(id)arg1;
+ (id)runningWithView:(id)arg1;
+ (id)disabled;
- (void).cxx_destruct;
- (void)matchDisabled:(CDUnknownBlockType)arg1 stalled:(CDUnknownBlockType)arg2 running:(CDUnknownBlockType)arg3;

@end
