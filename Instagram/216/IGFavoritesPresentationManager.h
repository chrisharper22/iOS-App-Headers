//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFavoritesHomeViewControllerDelegate-Protocol.h"
#import "IGStoryAudienceSelectionViewControllerDelegate-Protocol.h"

@class IGUserSession, NSString, UIViewController;
@protocol IGAlertHUDHandling, IGFavoritesPresentationManagerDelegate;

@interface IGFavoritesPresentationManager : NSObject <IGFavoritesHomeViewControllerDelegate, IGStoryAudienceSelectionViewControllerDelegate>
{
    IGUserSession *_userSession;
    UIViewController *_presentingViewController;
    NSString *_analyticsModule;
    long long _entryPoint;
    id <IGAlertHUDHandling> _alertHandler;
    id <IGFavoritesPresentationManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFavoritesPresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_favoritesEmptyAlert;
- (void)audienceSelectionViewControllerDidTapDoneButton:(id)arg1;
- (void)audienceSelectionViewControllerDidTapBackButton:(id)arg1;
- (void)audienceSelectionViewControllerWillDismissWithMembers:(id)arg1;
- (void)audienceSelectionViewControllerDidTapShare:(id)arg1 privateStoryListID:(id)arg2;
- (void)favoritesHome:(id)arg1 didSaveUserList:(id)arg2;
- (void)_addUserToFavorites:(id)arg1;
- (void)_presentFavoritesHomeWithCanShowNux:(_Bool)arg1;
- (void)_presentAlert:(id)arg1;
- (void)_showFavoritesConsumptionAlertForUser:(id)arg1 mediaType:(long long)arg2;
- (void)_logBadgeClickForItem:(id)arg1;
- (void)presentFavoritesHome;
- (void)showStoryViewerFavoritesAlertForItem:(id)arg1;
- (void)showFavoritesSetupAlert;
- (_Bool)needsFavoritesSetup;
- (_Bool)favoritesListCountEmpty;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 analyticsModule:(id)arg3 entryPoint:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

