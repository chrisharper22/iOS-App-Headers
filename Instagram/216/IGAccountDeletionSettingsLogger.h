//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGAccountDeletionSettingsLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _logger;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (void)logSessionInvalidated;
- (void)logAccountDeletionRowClick;
- (id)accountDeletionRowViewPointAction;
- (void)logAccountSettingsScreenImpression;
- (void)logSettingsScreenImpression;
- (id)initWithLogger:(id)arg1;

@end

