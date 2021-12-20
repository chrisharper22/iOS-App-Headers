//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListSectionContext-Protocol.h"
#import "IGStoryTrayCollectionViewCellDelegate-Protocol.h"
#import "IGStoryTrayControllerDataSource-Protocol.h"
#import "IGStoryTrayControllerDelegate-Protocol.h"
#import "IGStoryTraySectionContext-Protocol.h"
#import "IGStoryTraySectionHeaderCellControllerDelegate-Protocol.h"
#import "IGStoryViewerDelegate-Protocol.h"

@class IGMainFeedNetegoImpressionStrategy, IGStoryDataController, IGStoryTrayController, IGStoryTrayLoggingContext, IGStoryTraySectionConfiguration, IGStoryTraySectionHeaderCellController, IGStoryViewerConfiguration, IGUserSession, NSString;
@protocol IGMainFeedStoryTrayLoggingContextProvider, IGStoryTrayControllerTrayInViewerDelegate, IGStoryTrayDataSource, IGStoryTraySectionControllerActionDelegate, IGStoryTraySectionControllerHeaderDelegate, IGStoryTraySectionControllerLoggingDelegate, IGStoryTraySectionControllerViewerDelegate;

@interface IGStoryTraySectionController : IGListSectionController <IGStoryTrayCollectionViewCellDelegate, IGStoryTraySectionContext, IGListSectionContext, IGStoryTraySectionHeaderCellControllerDelegate, IGStoryTrayControllerDataSource, IGStoryTrayControllerDelegate, IGStoryViewerDelegate>
{
    IGUserSession *_userSession;
    IGStoryDataController *_dataController;
    id <IGStoryTrayDataSource> _dataSource;
    IGStoryTrayLoggingContext *_loggingContext;
    id <IGStoryTraySectionControllerLoggingDelegate> _loggingDelegate;
    long long _entryPoint;
    IGStoryTraySectionConfiguration *_traySectionConfiguration;
    IGStoryViewerConfiguration *_storyViewerConfiguration;
    IGMainFeedNetegoImpressionStrategy *_netegoStrategy;
    IGStoryTraySectionHeaderCellController *_headerCellController;
    IGStoryTrayController *_trayController;
    id <IGStoryTraySectionControllerViewerDelegate> _viewerDelegate;
    id <IGStoryTraySectionControllerHeaderDelegate> _headerDelegate;
    id <IGStoryTraySectionControllerActionDelegate> _actionDelegate;
    id <IGStoryTrayControllerTrayInViewerDelegate> _trayInViewerDelegate;
    id <IGMainFeedStoryTrayLoggingContextProvider> _mainFeedLoggingProvider;
    double _percentCollapsed;
}

- (void).cxx_destruct;
@property(nonatomic) double percentCollapsed; // @synthesize percentCollapsed=_percentCollapsed;
@property(nonatomic) __weak id <IGMainFeedStoryTrayLoggingContextProvider> mainFeedLoggingProvider; // @synthesize mainFeedLoggingProvider=_mainFeedLoggingProvider;
@property(nonatomic) __weak id <IGStoryTrayControllerTrayInViewerDelegate> trayInViewerDelegate; // @synthesize trayInViewerDelegate=_trayInViewerDelegate;
@property(nonatomic) __weak id <IGStoryTraySectionControllerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <IGStoryTraySectionControllerHeaderDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
@property(nonatomic) __weak id <IGStoryTraySectionControllerViewerDelegate> viewerDelegate; // @synthesize viewerDelegate=_viewerDelegate;
@property(readonly, nonatomic) IGStoryTrayController *trayController; // @synthesize trayController=_trayController;
@property(readonly, nonatomic) id <IGStoryTrayDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool isViewerDisplayed;
- (void)setLoggingContext:(id)arg1;
- (id)loggingContext;
- (void)animatePendingPrivateStories;
- (void)hideCloseFriendsAttributionTooltipIfVisible;
- (void)showCloseFriendsAttributionTooltipIfNecessary;
- (void)dataSourceWasUpdated;
- (void)logTraySectionImpressionWithModule:(id)arg1 filterTag:(id)arg2 positionInFeed:(id)arg3 isHideable:(_Bool)arg4 onlyLogFirstImpression:(_Bool)arg5 sessionId:(id)arg6 extras:(id)arg7;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2 offset:(double)arg3;
- (void)scrollToFrontAnimated:(_Bool)arg1;
- (id)storyCellForReelPK:(id)arg1;
- (id)storyCellForIndex:(long long)arg1;
- (id)firstStoryCell;
- (void)_invalidateLayoutIfAppropriate;
- (void)didUpdateVisibleContents;
- (void)didInvalidateLayout;
- (double)containerViewWidth;
- (id)cellAtIndex:(long long)arg1;
- (void)headerCellURLTapped:(id)arg1 didTapLink:(id)arg2;
- (void)headerCellSecondaryActionButtonWasPressed:(id)arg1;
- (void)headerCellActionButtonWasPressed:(id)arg1;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)trayCollectionViewCellWasRemovedFromWindow:(id)arg1;
- (id)traySectionConfiguration;
- (id)allStoryItems;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)cellForCellController:(id)arg1;
- (void)reloadSectionAnimated:(_Bool)arg1;
- (void)invalidateLayout;
- (id)analyticsModule;
- (id)navState;
- (id)userSession;
- (CDStruct_afe9634b)_layoutSpecWithStoryTrayItems:(id)arg1;
- (void)_reloadHeaderSectionAnimated:(_Bool)arg1;
- (void)_storyHeaderActionPressed;
- (id)initWithUserSession:(id)arg1 dataController:(id)arg2 dataSource:(id)arg3 loggingContext:(id)arg4 loggingDelegate:(id)arg5 entryPoint:(long long)arg6 traySectionConfiguration:(id)arg7 storyViewerConfiguration:(id)arg8 netegoImpressionStrategy:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

