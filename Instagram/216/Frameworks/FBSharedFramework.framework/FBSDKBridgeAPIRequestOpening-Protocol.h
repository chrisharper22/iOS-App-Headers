//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSObject, NSURL, UIViewController;
@protocol FBSDKBridgeAPIRequest, FBSDKURLOpening;

@protocol FBSDKBridgeAPIRequestOpening <NSObject>
- (void)openURL:(NSURL *)arg1 sender:(id <FBSDKURLOpening>)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)openURLWithSafariViewController:(NSURL *)arg1 sender:(id <FBSDKURLOpening>)arg2 fromViewController:(UIViewController *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
- (void)openBridgeAPIRequest:(NSObject<FBSDKBridgeAPIRequest> *)arg1 useSafariViewController:(_Bool)arg2 fromViewController:(UIViewController *)arg3 completionBlock:(void (^)(FBSDKBridgeAPIResponse *))arg4;
@end

