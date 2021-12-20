//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCTAPresenterContext, IGCommentThreadConfiguration, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSString, UIViewController;
@protocol IGCommentViewControllerType><IGGestureHandler, IGFeedItemLoggingProviderDelegate;

@protocol IGCommentIntf <NSObject>
+ (UIViewController<IGCommentViewControllerType><IGGestureHandler> *)commentsViewControllerForFeedItemPK:(NSString *)arg1 ctaPresenterContext:(IGCTAPresenterContext *)arg2 loggingDelegate:(id <IGFeedItemLoggingProviderDelegate>)arg3 replyText:(NSString *)arg4 userSession:(IGUserSession *)arg5 commentThreadConfiguration:(IGCommentThreadConfiguration *)arg6 sponsoredSupportConfiguration:(IGSponsoredSupportConfiguration *)arg7;
+ (UIViewController<IGCommentViewControllerType><IGGestureHandler> *)commentsViewControllerForMedia:(IGMedia *)arg1 ctaPresenterContext:(IGCTAPresenterContext *)arg2 loggingDelegate:(id <IGFeedItemLoggingProviderDelegate>)arg3 replyText:(NSString *)arg4 userSession:(IGUserSession *)arg5 commentThreadConfiguration:(IGCommentThreadConfiguration *)arg6 sponsoredSupportConfiguration:(IGSponsoredSupportConfiguration *)arg7;
@end

