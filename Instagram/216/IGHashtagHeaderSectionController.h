//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGHashtagHeaderCellDelegate-Protocol.h"
#import "IGStoryViewerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGBloksAsyncActionHandler, IGFollowAttributionModel, IGHashtagHeaderItem, IGStoryReelOwnerView, IGStoryTrayViewModel, IGStoryViewerPresentationAnimationController, IGUserSession, NSString;
@protocol IGHashtagHeaderSectionControllerDelegate;

@interface IGHashtagHeaderSectionController : IGListSectionController <IGHashtagHeaderCellDelegate, UIViewControllerTransitioningDelegate, IGStoryViewerDelegate>
{
    IGHashtagHeaderItem *_hashtagHeaderItem;
    IGUserSession *_userSession;
    IGStoryTrayViewModel *_reelViewModel;
    IGStoryViewerPresentationAnimationController *_animationController;
    IGStoryReelOwnerView *_reelOwnerView;
    NSString *_sessionID;
    IGFollowAttributionModel *_attribution;
    IGBloksAsyncActionHandler *_asyncActionHandler;
    id <IGHashtagHeaderSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGHashtagHeaderSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (void)headerCellDidTapSupportCTA:(id)arg1;
- (void)headerCellDidTapSocialContextMutualFollowers:(id)arg1;
- (void)headerCellDidTapSocialContextProfile:(id)arg1 URL:(id)arg2 targetUserId:(id)arg3;
- (void)headerCellDidTapDropdownButton:(id)arg1;
- (void)headerCellDidLongPressOwnerView:(id)arg1;
- (void)headerCellDidTapOwnerView:(id)arg1;
- (id)_headerItemFromDropdownButtonTap;
- (void)_launchStoryViewer;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 sessionID:(id)arg2 attribution:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
