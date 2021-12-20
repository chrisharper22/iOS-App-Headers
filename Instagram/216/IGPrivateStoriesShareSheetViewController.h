//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFavoritesPresentationManagerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGPrivateStoriesRecipientListViewControllerDelegate-Protocol.h"
#import "IGPrivateStoryListsUpdateListener-Protocol.h"
#import "IGPrivateStoryListsViewControllerDelegate-Protocol.h"
#import "IGPrivateStoryMemberListener-Protocol.h"
#import "IGShareSheetNuxViewDelegate-Protocol.h"
#import "IGStoryAudienceSelectionViewControllerDelegate-Protocol.h"
#import "IGStoryShareSheetCollectionViewCellDelegate-Protocol.h"
#import "IGStoryShareToFbOptionsControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGBottomButtonsView, IGDirectRecipientOneTapStateTracker, IGFavoritesPresentationManager, IGGLKSession, IGPostCaptureARController, IGShareSheetNuxView, IGStoryCreationConfiguration, IGStoryShareToFbOptionsController, IGUserSession, NSArray, NSIndexPath, NSNumber, NSString, UICollectionView;
@protocol IGPrivateStoriesShareSheetViewControllerDelegate;

@interface IGPrivateStoriesShareSheetViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGPrivateStoriesRecipientListViewControllerDelegate, IGStoryShareSheetCollectionViewCellDelegate, IGStoryAudienceSelectionViewControllerDelegate, IGShareSheetNuxViewDelegate, IGFavoritesPresentationManagerDelegate, IGStoryShareToFbOptionsControllerDelegate, IGPrivateStoryMemberListener, IGPrivateStoryListsUpdateListener, IGPrivateStoryListsViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGBottomButtonsView *_footerButton;
    IGShareSheetNuxView *_nuxView;
    NSArray *_compositions;
    IGGLKSession *_igglkSession;
    IGPostCaptureARController *_postcaptureAREffectController;
    IGStoryCreationConfiguration *_storyCreationConfiguration;
    IGFavoritesPresentationManager *_favoritesPresentationManager;
    IGDirectRecipientOneTapStateTracker *_oneTapStateTracker;
    id <IGPrivateStoriesShareSheetViewControllerDelegate> _delegate;
    NSArray *_collectionViewCellOrder;
    NSIndexPath *_selectedIndexPath;
    NSNumber *_privateStoryMemberCount;
    NSNumber *_fanClubMemberCount;
    IGStoryShareToFbOptionsController *_shareToFbController;
    _Bool _isUserAuthorizedToSeeFbOption;
    _Bool _isSharingToFBEnabled;
    _Bool _shouldShowNux;
}

- (void).cxx_destruct;
- (void)didUpdateSelectedPrivateList;
- (void)didUpdatePrivateLists:(id)arg1;
- (void)didUpdateMembersForPrivateList:(id)arg1 members:(id)arg2;
- (void)didUpdateSharedWithMembersForStory:(id)arg1 members:(id)arg2;
- (void)didUpdateMembersForMainList:(id)arg1;
- (void)shareToFbControllerDidDismissActionSheet;
- (void)shareToFbControllerDidUpdateWithShare:(_Bool)arg1 automaticPreferencesUpdated:(_Bool)arg2;
- (void)privateStoriesRecipientListViewController:(id)arg1 didSendToStoryTarget:(long long)arg2 directRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5;
- (void)didTapClose:(id)arg1;
- (void)favoritesPresentationManagerDidFinishSetup:(id)arg1 withUsers:(id)arg2;
- (void)favoritesPresentationManagerDidCancelSetup:(id)arg1;
- (void)privateStoryListsViewControllerDidTapShare:(id)arg1 privateStoryListID:(id)arg2;
- (void)audienceSelectionViewControllerDidTapDoneButton:(id)arg1;
- (void)audienceSelectionViewControllerDidTapBackButton:(id)arg1;
- (void)audienceSelectionViewControllerWillDismissWithMembers:(id)arg1;
- (void)audienceSelectionViewControllerDidTapShare:(id)arg1 privateStoryListID:(id)arg2;
- (void)didTapSubtitleForType:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (int)_recipientOneTapTargetForSendTarget:(long long)arg1;
- (void)_shareToStory:(long long)arg1 postingSurface:(long long)arg2 shareToFacebook:(_Bool)arg3 privateStoryListID:(id)arg4;
- (void)_learnMoreMusicRestrictionsTapped;
- (void)_pushViewController:(id)arg1;
- (void)_pushPostShareStoryShareSheet:(unsigned long long)arg1 storySendTarget:(long long)arg2 metadataArray:(id)arg3;
- (void)_pushToMessagesScreen:(_Bool)arg1;
- (void)_pushFanClubMemberList;
- (void)_pushPrivateStoryListsViewController;
- (void)_pushToAudienceSelection;
- (void)_footerButtonTapped:(id)arg1;
- (void)_presentMusicStickerCannotPostToFanClubDialog;
- (void)_logMusicShareToFanClubAttempted;
- (_Bool)_storyContainsMusicSticker;
- (long long)_closeFriendsSendTarget;
- (id)_footerButtonTextForSelectedType:(long long)arg1;
- (void)_performSubActionForType:(long long)arg1;
- (void)_performMainActionForType:(long long)arg1;
- (id)_fanClubSubtitle;
- (id)_subtitleForCellType:(long long)arg1;
- (id)_indexPathFromCellType:(long long)arg1;
- (long long)_cellTypeFromIndexPath:(id)arg1;
- (void)_setCollectionViewCellOrder;
- (void)_setupCollectionView;
- (void)_setupFooter;
- (long long)_numberOfRows;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_fetchFanClubShareInfo;
- (void)_fetchPrivateStoriesShareInfo;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 compositions:(id)arg2 igglkSession:(id)arg3 postcaptureAREffectController:(id)arg4 isSharingToFBEnabled:(_Bool)arg5 configuration:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

