//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGViewController, NSString;
@protocol IGStoryFeedPostStickerBrowserViewControllerType;

@protocol IGStoryFeedPostStickerBrowserViewControllerLoggingDelegate <NSObject>
- (void)feedPostStickerBrowserViewController:(IGViewController<IGStoryFeedPostStickerBrowserViewControllerType> *)arg1 didDismissNuxWithIdentifier:(NSString *)arg2;
- (void)feedPostStickerBrowserViewController:(IGViewController<IGStoryFeedPostStickerBrowserViewControllerType> *)arg1 didShowNuxWithIdentifier:(NSString *)arg2;
- (void)feedPostStickerBrowserViewController:(IGViewController<IGStoryFeedPostStickerBrowserViewControllerType> *)arg1 logSelectMediaWithStickerId:(NSString *)arg2 mediaId:(NSString *)arg3 sourceMediaGroup:(long long)arg4 tabId:(NSString *)arg5;
@end

