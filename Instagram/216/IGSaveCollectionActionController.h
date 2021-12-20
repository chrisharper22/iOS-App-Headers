//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, IGViewController;
@protocol IGSaveCollectionActionControllerDelegate;

@interface IGSaveCollectionActionController : NSObject
{
    IGUserSession *_userSession;
    IGViewController *_viewController;
    id <IGSaveCollectionActionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSaveCollectionActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentEditCollectionViewControllerIsCollectionEmpty:(_Bool)arg1 collection:(id)arg2;
- (void)_presentAddToCollectionViewController:(id)arg1;
- (void)_leaveCollectionPressed:(id)arg1;
- (CDUnknownBlockType)_deleteActionHandlerWithNavigationController:(id)arg1 collection:(id)arg2;
- (void)_deletePressedForCollection:(id)arg1;
- (void)_showUnimplementedAlertDialogue;
- (id)_actionsForContributorCollection:(id)arg1 isCollectionEmpty:(_Bool)arg2;
- (id)_actionsForOwnerCollection:(id)arg1 hasSelectOption:(_Bool)arg2 isCollectionEmpty:(_Bool)arg3;
- (void)showActionControllerWithSelectOption:(_Bool)arg1 collection:(id)arg2 isCollectionEmpty:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2;

@end

