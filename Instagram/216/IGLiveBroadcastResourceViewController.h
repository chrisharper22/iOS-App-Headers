//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCompassionResourceModuleDelegate-Protocol.h"

@class IGLiveBroadcastBannerView, IGUserSession, NSDictionary, NSString, UIView;
@protocol IGLiveBroadcastResourceViewControllerDelegate;

@interface IGLiveBroadcastResourceViewController : UIViewController <IGCompassionResourceModuleDelegate>
{
    NSString *_resourceType;
    NSDictionary *_resourceData;
    IGUserSession *_userSession;
    UIViewController *_reactNativeResourceController;
    IGLiveBroadcastBannerView *_textBanner;
    UIView *_backgroundView;
    id <IGLiveBroadcastResourceViewControllerDelegate> _delegate;
}

+ (id)_reactModuleWithUserSession:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveBroadcastResourceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)compassionResourceModuleDidRequestClose:(id)arg1 rootViewController:(id)arg2;
- (void)_dismissLiveResource;
- (id)_createCompassionAppController;
- (id)_createReactNativeController;
- (id)_createBackgroundView;
- (id)_createTextBanner;
- (void)presentLiveResource;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithResourceType:(id)arg1 resourceData:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
