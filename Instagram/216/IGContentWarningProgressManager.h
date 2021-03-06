//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGContentWarningActionDelegate-Protocol.h"

@class CADisplayLink, FBTimer, IGUserSession, NSString;

@interface IGContentWarningProgressManager : NSObject <IGContentWarningActionDelegate>
{
    IGUserSession *_userSession;
    FBTimer *_timer;
    CADisplayLink *_displayLink;
    double _totalDuration;
    double _durationConsumed;
    double _createdAt;
    CDUnknownBlockType _progressCompletionBlock;
}

- (void).cxx_destruct;
- (void)contentWarningShouldStartWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateDisplayLinkAndTimer;
- (void)_displayLinkTicked;
- (void)_startTimer;
- (void)executeBlockAndInvalidate;
- (void)invalidate;
- (void)resume;
- (void)start;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pause;
- (id)initWithUserSession:(id)arg1 delayInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

