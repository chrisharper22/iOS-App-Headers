//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectUserBlockAlertLogger : NSObject
{
    NSString *_analyticsModule;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (Optional_8822d440)usertypeForUser:(id)arg1;
- (void)logReportedThreadWarningDialogDisplayedWithSender:(id)arg1 action:(long long)arg2 threadId:(id)arg3 isGroup:(_Bool)arg4;
- (void)logReportedThreadActionWithSender:(id)arg1 action:(long long)arg2 threadId:(id)arg3 isGroup:(_Bool)arg4;
- (void)logGroupThreadBlockedUserAlertAction:(id)arg1 source:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (void)logGroupThreadBlockedUserWarningDialogDisplayedWithSource:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)initWithAnalyticsLogger:(id)arg1 analyticsModule:(id)arg2;

@end
