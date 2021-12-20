//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingProductViewerHeaderControlling-Protocol.h"

@class BKContext, BKLispyExpression, IGFullsizeNavigationTitleViewContainerView, IGSessionTracker, IGShoppingCartBarButtonItem, IGShoppingProfileShopTitleButton, IGShoppingShopsNavigationMenuButtonItem, IGUser, IGUserSession, NSArray, NSString, UIViewController;
@protocol IGShoppingProductViewerHeaderControllingDelegate;

@interface IGShoppingProductViewerShopsHeaderController : NSObject <IGShoppingProductViewerHeaderControlling>
{
    IGUserSession *_userSession;
    IGUser *_merchant;
    long long _headerStyle;
    IGFullsizeNavigationTitleViewContainerView *_titleView;
    UIViewController *_hostingViewController;
    IGShoppingCartBarButtonItem *_bagButton;
    BKContext *_bloksContext;
    IGShoppingShopsNavigationMenuButtonItem *_menuButton;
    BKLispyExpression *_menuActionExpression;
    NSString *_module;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    IGSessionTracker *_sessionTracker;
    _Bool _isTitleLeftAligned;
    NSString *_shopLinkedCreatorId;
    NSString *_storefrontAttributionUsername;
    IGShoppingProfileShopTitleButton *_titleButton;
    NSString *_sellerBadgeTitle;
    _Bool _moreButtonEnabled;
    _Bool _bagButtonEnabled;
    long long _dismissIconType;
    id <IGShoppingProductViewerHeaderControllingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingCartBarButtonItem *bagButton; // @synthesize bagButton=_bagButton;
@property(nonatomic) __weak id <IGShoppingProductViewerHeaderControllingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bagButtonEnabled; // @synthesize bagButtonEnabled=_bagButtonEnabled;
@property(nonatomic) _Bool moreButtonEnabled; // @synthesize moreButtonEnabled=_moreButtonEnabled;
@property(nonatomic) long long dismissIconType; // @synthesize dismissIconType=_dismissIconType;
- (void)_didTapMore;
- (void)_didTapMenu;
- (void)_didTapBag;
- (void)setHeaderTitleUsingTitleButton;
- (void)setHeaderTitleAsLocalizedString;
@property(readonly, nonatomic) struct CGRect headerFrame;
@property(readonly, nonatomic) NSArray *accessibilityElements;
- (void)setSellerBadgeTitle:(id)arg1;
- (long long)preferredStatusBarAnimation;
- (void)_setupRightBarButtonItems;
- (void)_setupHeader;
- (id)initWithUserSession:(id)arg1 merchant:(id)arg2 headerStyle:(long long)arg3 hostingViewController:(id)arg4 module:(id)arg5 priorModule:(id)arg6 priorSubmodule:(id)arg7 sessionTracker:(id)arg8;
- (id)initWithUserSession:(id)arg1 merchant:(id)arg2 headerStyle:(long long)arg3 hostingViewController:(id)arg4 module:(id)arg5 priorModule:(id)arg6 priorSubmodule:(id)arg7 sessionTracker:(id)arg8 isNavBarTitleLeftAligned:(_Bool)arg9 shopLinkedCreatorId:(id)arg10 storefrontAttributionUsername:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

