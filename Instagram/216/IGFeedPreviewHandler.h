//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGFeedItemPreviewControllerActionProvider-Protocol.h"
#import "IGPreviewPresentationDelegate-Protocol.h"
#import "IGPreviewingDelegate-Protocol.h"
#import "IGShoppingProductPreviewSaveProductDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, IGViewController, NSIndexPath, NSString, UICollectionView;
@protocol IGDirectShareSheetControlling, IGFeedPreviewHandlerDelegate, IGListDiffable;

@interface IGFeedPreviewHandler : NSObject <IGDirectShareSheetControllerDelegate, IGPreviewPresentationDelegate, IGFeedItemPreviewControllerActionProvider, IGShoppingProductPreviewSaveProductDelegate, IGPreviewingDelegate>
{
    IGUserSession *_userSession;
    NSIndexPath *_thumbnailIndexPath;
    NSObject<IGListDiffable> *_previewedObject;
    IGViewController *_controller;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    id <IGDirectShareSheetControlling> _reshareController;
    _Bool _isEnabled;
    id <IGFeedPreviewHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedPreviewHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)_contextMenuConfigurationForPreviewObject:(id)arg1;
- (void)_registerPropertiesForPreviewObject:(id)arg1;
- (id)_previewObjectForLocation:(struct CGPoint)arg1 inCollectionView:(id)arg2;
- (_Bool)_shouldPresentPreviewControllerForPreviewedItem:(id)arg1;
- (id)_previewViewControllerForChannelSectionItemViewModel:(id)arg1 atIndexPath:(id)arg2 placeholderImage:(id)arg3 previewingContext:(id)arg4 shoppingSessionId:(id)arg5 sourcePosition:(id)arg6 sourceNavigationInfo:(id)arg7;
- (id)_previewViewControllerForContentTileViewModel:(id)arg1;
- (id)_previewViewControllerForProductItem:(id)arg1 actions:(long long)arg2 coverMedia:(id)arg3 shoppingSessionId:(id)arg4 sourcePosition:(id)arg5 sourceNavigationInfo:(id)arg6 rankingInfo:(id)arg7;
- (id)_previewControllerForMedia:(id)arg1 atIndexPath:(id)arg2 image:(id)arg3 previewingContext:(id)arg4 storyItem:(id)arg5 storyLoggingContext:(id)arg6 storyViewModel:(id)arg7 fromShoppingSource:(_Bool)arg8 navigationInfo:(id)arg9 shoppingSessionId:(id)arg10;
- (id)_previewControllerForDiscoveryStoriesModel:(id)arg1 image:(id)arg2 previewingContext:(id)arg3 storyItem:(id)arg4 storyLoggingContext:(id)arg5 storyViewModel:(id)arg6;
- (id)_previewViewControllerForPreviewObject:(id)arg1 previewingContext:(id)arg2;
- (id)_previewedItemForPreviewedObject:(id)arg1;
- (void)shoppingProductPreviewViewController:(id)arg1 shouldSave:(_Bool)arg2 productItem:(id)arg3;
- (id)previewActionsForFeedItemController:(id)arg1 defaultActionProvider:(CDUnknownBlockType)arg2;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)previewControllerWillPresentDirectShareSheetController:(id)arg1;
- (void)performViewControllerCommitForPreviewedItem;
- (id)contextMenuConfigurationForCollectionViewCell:(id)arg1 collectionView:(id)arg2 viewController:(id)arg3 location:(struct CGPoint)arg4;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithUserSession:(id)arg1 controller:(id)arg2 collectionView:(id)arg3 listAdapter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

