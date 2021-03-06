//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGNotificationHandler-Protocol.h"

@class AVAsset, FBARCommerceCameraModel, IGMainAppDestination, IGMainAppSurfaceIntent, IGMediaMetadata, IGNavigationController, IGStoryCreationModel, IGStoryDismissCard, NSArray, NSString, NSURL, UIImage, UIView, UIViewController;
@protocol IGFeedCreationFlowHandler, IGStickerViewType, IGTVTabBarControllerType, IGTabBarControllerType;

@protocol IGAppNavigationHandler <IGNotificationHandler>
@property(readonly, nonatomic) UIViewController<IGTVTabBarControllerType> *igtvAppTabBarController;
- (void)presentPostingRestrictedSheet;
- (void)showBrowserIfEligible;
- (_Bool)isUserViewingExplore;
- (void)dismissPushedProfileViewControllerAnimated:(_Bool)arg1;
- (_Bool)shouldSuppressDirectNotifications;
- (_Bool)isUserInMaximizedVideoCall;
- (_Bool)isUserViewingThreadWithThreadId:(NSString *)arg1;
- (_Bool)isUserViewingInbox;
- (void)presentShoppingCameraWithEntryPoint:(long long)arg1 productID:(NSString *)arg2 merchantID:(NSString *)arg3 containerEffectConfigId:(NSString *)arg4 cryptohash:(NSString *)arg5;
- (void)presentARCommerceCameraWithModel:(FBARCommerceCameraModel *)arg1;
- (void)presentStoryDismissCard:(IGStoryDismissCard *)arg1 source:(long long)arg2;
- (void)presentStoryCameraPreviewWithEntryPoint:(long long)arg1 mediaMetadata:(IGMediaMetadata *)arg2;
- (void)presentStoryCameraPreviewWithEntryPoint:(long long)arg1 creationModel:(IGStoryCreationModel *)arg2 assetSource:(unsigned long long)arg3 sourceApplication:(NSString *)arg4 stickerView:(UIView<IGStickerViewType> *)arg5 backgroundImage:(UIImage *)arg6 backgroundVideo:(AVAsset *)arg7 backgroundColors:(NSArray *)arg8 canSegmentLongVideo:(_Bool)arg9 analyticsModule:(NSString *)arg10;
- (id <IGFeedCreationFlowHandler>)creationFlowHandler;
- (long long)currentScrollingViewControllerItem;
- (_Bool)isUserInFeed;
- (void)openURLInNewsTab:(NSURL *)arg1;
- (_Bool)isTabBarVisible;
- (UIViewController<IGTabBarControllerType> *)igTabBarController;
- (NSString *)currentViewControllerAnalyticsModule;
- (void)handleAppSurfaceIntent:(IGMainAppSurfaceIntent *)arg1 animated:(_Bool)arg2;
- (IGNavigationController *)navigationControllerForAppSurfaceIntent:(IGMainAppSurfaceIntent *)arg1;
- (void)showDestination:(IGMainAppDestination *)arg1;

@optional
- (void)focusTabBarControllerAnimated:(_Bool)arg1;
- (void)prefetchActivityFeed;
- (void)focusActivityFeedControllerAnimated:(_Bool)arg1;
@end

