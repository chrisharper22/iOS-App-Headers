//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveInteractivityService, IGLiveQuestionEvent;

@protocol IGLiveInteractivityServiceDelegate <NSObject>
- (void)interactivityService:(IGLiveInteractivityService *)arg1 didReceiveBadgesStatusChange:(_Bool)arg2;
- (void)interactivityServiceQuestionSubmissionStatusDidChange:(_Bool)arg1 submittedQuestionCount:(long long)arg2;
- (void)interactivityService:(IGLiveInteractivityService *)arg1 didReceiveQuestionEvent:(IGLiveQuestionEvent *)arg2;
@end

