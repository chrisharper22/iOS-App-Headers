//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IGCoPresenceUserFlowLogger : NSObject
{
    unsigned long long _userFlowId;
    NSDictionary *_annotations;
    _Bool _isCaller;
    _Bool _isConnected;
}

- (void).cxx_destruct;
- (_Bool)_wasSuccessful:(long long)arg1;
- (void)endCoPresenceSession:(long long)arg1;
- (void)markCountdownVisible:(long long)arg1;
- (void)markCalleeTapAcceptDropInFromTrigger:(long long)arg1;
- (void)markCalleeSeeCallerVideo;
- (void)markCallerSeeVideoSharingStarted;
- (id)initWithVideoCallSession:(id)arg1 joinInfo:(id)arg2 threadId:(id)arg3 presenceSessionId:(id)arg4;

@end

