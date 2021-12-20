//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectResponseInfo, IGDirectResponseLogger, IGFeedItemTracker, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSString;
@protocol IGFeedItemDirectResponseLoggingProviderDelegate;

@interface IGLeadGenLogger : NSObject
{
    IGMedia *_media;
    NSString *_module;
    IGUserSession *_session;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
    IGFeedItemTracker *_feedItemTracker;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGDirectResponseInfo *_directResponseInfo;
    IGDirectResponseLogger *_logger;
    IGFeedItemTracker *_leadGenFeedItemTracker;
}

- (void).cxx_destruct;
- (void)logLeadGenThankYouScreenCtaActionWithURL:(id)arg1 extra:(id)arg2;
- (void)logLeadGenFormSubmissionSuccessWithExtra:(id)arg1;
- (id)analyticsModule;
- (id)initWithAnalyticsModule:(id)arg1 userSession:(id)arg2 loggingDelegate:(id)arg3 media:(id)arg4 feedItemTracker:(id)arg5 sponsoredSupportConfiguration:(id)arg6 directResponseInfo:(id)arg7;

@end

