//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSponsoredSupportConfiguration, IGUserSession, NSString, UIViewController;
@protocol IGDirectResponseHandling, IGDirectResponseLogging, IGFeedItemDirectResponseLoggingProviderDelegate;

@interface IGFeedDirectResponseHandler : NSObject
{
    IGUserSession *_userSession;
    id <IGDirectResponseLogging> _logger;
    id <IGDirectResponseHandling> _handler;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
    NSString *_module;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)_handleFeedItem:(id)arg1 mediaType:(long long)arg2 directResponseInfo:(id)arg3 feedItemTracker:(id)arg4 shoppingSessionTracker:(id)arg5 pageCellState:(id)arg6 mediaPosition:(long long)arg7 userSession:(id)arg8 context:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;
- (void)handleDirectResponseActionForMedia:(id)arg1 feedItemTracker:(id)arg2 shoppingSessionTracker:(id)arg3 pageCellState:(id)arg4 mediaPosition:(long long)arg5 userSession:(id)arg6 context:(unsigned long long)arg7 extraFields:(id)arg8 completion:(CDUnknownBlockType)arg9 directResponseInfo:(id)arg10;
- (id)initWithLogger:(id)arg1 loggingDelegate:(id)arg2 userSession:(id)arg3 module:(id)arg4 sponsoredSupportConfiguration:(id)arg5;

@end
