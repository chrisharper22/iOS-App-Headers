//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSString;
@protocol IGFeedItemVideoLoggingProviderDelegate;

@interface IGPageMediaVideoViewLoggerProvider : NSObject
{
    NSString *_module;
    IGMedia *_post;
    IGUserSession *_userSession;
    NSString *_sessionId;
    id <IGFeedItemVideoLoggingProviderDelegate> _loggingProvider;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
}

- (void).cxx_destruct;
- (id)loggingConfigForCarouselIndex:(long long)arg1 pk:(id)arg2;
- (id)loggerForCarouselIndex:(long long)arg1 pk:(id)arg2;
- (id)_extrasForCarouselIndex:(long long)arg1 pk:(id)arg2;
- (id)initWithPost:(id)arg1 module:(id)arg2 loggingProvider:(id)arg3 userSession:(id)arg4 sponsoredSupportConfiguration:(id)arg5;

@end
