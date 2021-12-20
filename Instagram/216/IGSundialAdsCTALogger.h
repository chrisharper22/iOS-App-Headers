//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectResponseLogging-Protocol.h"

@class IGFeedItemTracker, IGUserSession, NSString;

@interface IGSundialAdsCTALogger : NSObject <IGDirectResponseLogging>
{
    IGUserSession *_userSession;
    IGFeedItemTracker *_sponsoredItemTracker;
}

- (void).cxx_destruct;
- (void)_logCTAActionForMedia:(id)arg1 ctaContext:(unsigned long long)arg2 analyticsModule:(id)arg3 url:(id)arg4 action:(id)arg5 extraFields:(id)arg6 sponsoredInfoProvider:(id)arg7;
- (void)logShoppingSheetActionForMedia:(id)arg1 userSession:(id)arg2 ctaContext:(unsigned long long)arg3 action:(id)arg4 url:(id)arg5 adMetadata:(id)arg6 module:(id)arg7;
- (void)logActionFailedForMedia:(id)arg1 feedItemTracker:(id)arg2 directResponseInfo:(id)arg3 ctaContext:(unsigned long long)arg4 analyticsModule:(id)arg5 openTarget:(id)arg6 action:(id)arg7 url:(id)arg8 sponsoredInfoProvider:(id)arg9;
- (void)logActionForMedia:(id)arg1 feedItemTracker:(id)arg2 directResponseInfo:(id)arg3 ctaContext:(unsigned long long)arg4 analyticsModule:(id)arg5 action:(id)arg6 url:(id)arg7 extraFields:(id)arg8 sponsoredInfoProvider:(id)arg9;
- (void)logCTAActionForMedia:(id)arg1 ctaContext:(unsigned long long)arg2 analyticsModule:(id)arg3 link:(id)arg4 extraFields:(id)arg5 sponsoredInfoProvider:(id)arg6;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
