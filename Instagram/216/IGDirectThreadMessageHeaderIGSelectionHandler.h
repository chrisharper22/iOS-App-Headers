//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadMessageHeaderSelectionHandler-Protocol.h"

@class IGDirectThreadAnalyticsLogger, IGDirectUIThread, IGUserSession, NSString;

@interface IGDirectThreadMessageHeaderIGSelectionHandler : NSObject <IGDirectThreadMessageHeaderSelectionHandler>
{
    IGUserSession *_userSession;
    IGDirectUIThread *_thread;
    IGDirectThreadAnalyticsLogger *_logger;
}

- (void).cxx_destruct;
- (void)_showProfileForUserKey:(id)arg1 viewController:(id)arg2;
- (void)didTapViewModel:(id)arg1 viewController:(id)arg2;
- (id)initWithUserSession:(id)arg1 thread:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

