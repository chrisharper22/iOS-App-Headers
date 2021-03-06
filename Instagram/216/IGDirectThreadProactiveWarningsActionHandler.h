//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadMegaphoneActionHandler-Protocol.h"

@class IGUserSession, NSString;

@interface IGDirectThreadProactiveWarningsActionHandler : NSObject <IGDirectThreadMegaphoneActionHandler>
{
    NSString *_context;
    IGUserSession *_userSession;
    NSString *_threadIdV2ForInboxPaging;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)_markProactiveWarningAsDismissed;
- (void)_launchSafetyNoticeFlow;
- (void)setDelegate:(id)arg1;
- (void)megaphoneDidShown:(id)arg1;
- (void)megaphoneDidSelectButton:(id)arg1;
- (void)megaphoneDidDismiss;
- (id)initWithUserSession:(id)arg1 threadIdV2ForInboxPaging:(id)arg2 context:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

