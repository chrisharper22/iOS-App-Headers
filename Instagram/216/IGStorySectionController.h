//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListDisplayDelegate-Protocol.h"
#import "IGPendingStoryItemStatusDelegate-Protocol.h"
#import "IGProfilePictureImageViewDelegate-Protocol.h"
#import "IGStorySectionControllerType-Protocol.h"
#import "IGStoryTrayAvatarWithPreviewCellDelegate-Protocol.h"
#import "IGStoryTrayBaseCellDelegate-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"
#import "IGUserFavoritesActionListener-Protocol.h"
#import "THStatusServiceListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGStoryTrayCollectionViewConfiguration, IGStoryTrayViewModel, IGTooltipView, IGUserSession, NSArray, NSString;
@protocol IGStorySectionControllerDelegate;

@interface IGStorySectionController : IGListSectionController <IGPendingStoryItemStatusDelegate, UIGestureRecognizerDelegate, IGStoryTrayAvatarWithPreviewCellDelegate, IGProfilePictureImageViewDelegate, IGStoryTrayBaseCellDelegate, THStatusServiceListener, IGUserFavoritesActionListener, IGTooltipViewDelegate, IGStorySectionControllerType, IGListDisplayDelegate>
{
    IGUserSession *_userSession;
    IGStoryTrayCollectionViewConfiguration *_storyTrayConfiguration;
    NSString *_module;
    _Bool _imagePreviewURLReceived;
    _Bool _imagePreviewLoaded;
    IGTooltipView *_selfStoryTooltip;
    id <IGStorySectionControllerDelegate> _delegate;
    IGStoryTrayViewModel *_model;
    NSArray *_uploadProgressObservers;
    long long _entryPoint;
    struct CGSize _cellSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(copy, nonatomic) NSArray *uploadProgressObservers; // @synthesize uploadProgressObservers=_uploadProgressObservers;
@property(readonly, nonatomic) IGStoryTrayViewModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGStorySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapTooltipView:(id)arg1;
- (void)_showCloseFriendsAttributionTooltipForCell:(id)arg1 withContainerView:(id)arg2;
- (_Bool)_userHasSeenCloseFriendsTooltipRecently;
- (_Bool)_userDidInteractWithCloseFriendsElement;
- (_Bool)_userHasSeenCloseFriendsTooltipMaxNumberOfTimes;
- (_Bool)_isEligibleForCloseFriendsAttributionTooltip:(id)arg1;
- (void)_recordShowCloseFriendsAttributionTooltip;
- (void)hideCloseFriendsAttributionTooltipIfVisible;
- (void)showCloseFriendsAttributionTooltipIfNecessary;
- (void)_hideSelfStoryTooltipIfVisible;
- (void)user:(id)arg1 favoritesStatusDidChange:(_Bool)arg2;
- (void)storyTrayBaseCellLongPressed:(id)arg1;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (_Bool)hasPreviewImage;
- (void)statusServiceDidReceiveUpdate:(id)arg1 forUserPks:(id)arg2;
- (void)storyTrayAvatarWithPreviewCell:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)storyTrayAvatarWithPreviewCell:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)storyTrayAvatarWithPreviewCell:(id)arg1 willLoadImageWithImageURL:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pendingItemObserver:(id)arg1 didUpdateVideoURL:(id)arg2;
- (void)pendingItemObserver:(id)arg1 didUpdateToProgress:(double)arg2;
- (void)pendingItemObserver:(id)arg1 didUpdateToStatus:(unsigned long long)arg2;
- (void)updateCellSize:(struct CGSize)arg1;
- (void)configureWithInitialCellSize:(struct CGSize)arg1;
- (void)performPeekPreviewWithImage:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)_didLongPressCell:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 storyTrayConfiguration:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

