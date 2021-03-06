//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGDirectResponseInfo, IGFeedItemTracker, IGMedia, IGShoppingAdMetadata, IGUserSession, NSDictionary, NSString, NSURL;
@protocol IGSponsoredInfoProviding;

@protocol IGDirectResponseLogging <NSObject>
- (void)logShoppingSheetActionForMedia:(IGMedia *)arg1 userSession:(IGUserSession *)arg2 ctaContext:(unsigned long long)arg3 action:(NSString *)arg4 url:(NSURL *)arg5 adMetadata:(IGShoppingAdMetadata *)arg6 module:(NSString *)arg7;
- (void)logActionFailedForMedia:(IGMedia *)arg1 feedItemTracker:(IGFeedItemTracker *)arg2 directResponseInfo:(IGDirectResponseInfo *)arg3 ctaContext:(unsigned long long)arg4 analyticsModule:(NSString *)arg5 openTarget:(NSString *)arg6 action:(NSString *)arg7 url:(NSURL *)arg8 sponsoredInfoProvider:(id <IGSponsoredInfoProviding>)arg9;
- (void)logActionForMedia:(IGMedia *)arg1 feedItemTracker:(IGFeedItemTracker *)arg2 directResponseInfo:(IGDirectResponseInfo *)arg3 ctaContext:(unsigned long long)arg4 analyticsModule:(NSString *)arg5 action:(NSString *)arg6 url:(NSURL *)arg7 extraFields:(NSDictionary *)arg8 sponsoredInfoProvider:(id <IGSponsoredInfoProviding>)arg9;
@end

