//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedUpcomingEventShoppingViewAdapterDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGFeedUpcomingEventBottomButtonsView, IGFeedUpcomingEventShoppingViewAdapter, IGFeedUpcomingEventView, IGListAdapter, IGUpcomingEvent, IGUser, IGUserSession, NSString, UICollectionView, UIViewController;
@protocol IGFeedUpcomingEventControllerDelegate;

@interface IGFeedUpcomingEventController : NSObject <IGFeedUpcomingEventShoppingViewAdapterDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    UIViewController *_viewController;
    IGUpcomingEvent *_upcomingEvent;
    NSString *_mediaPk;
    NSString *_mediaAuthorPk;
    NSString *_mediaId;
    NSString *_priorModule;
    NSString *_sourceOfAction;
    NSString *_trackingToken;
    _Bool _shouldConsiderSafeInsets;
    _Bool _shouldShowViewPostButton;
    IGUser *_mediaUser;
    long long _liveStatus;
    IGFeedUpcomingEventView *_feedReshareUpcomingEventView;
    IGFeedUpcomingEventBottomButtonsView *_bottomButtonsView;
    UICollectionView *_collectionView;
    IGListAdapter *_productListAdapter;
    IGFeedUpcomingEventShoppingViewAdapter *_productViewAdapter;
    struct IGGridLayoutConfiguration _gridLayoutConfig;
    id <IGFeedUpcomingEventControllerDelegate> _delegate;
    double _layoutOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutOffset; // @synthesize layoutOffset=_layoutOffset;
@property __weak id <IGFeedUpcomingEventControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_setupBottomButtonsView;
- (void)_calculateLiveStatus;
- (_Bool)_showScrollableView;
- (_Bool)_isHostView;
- (void)_logUpcomingEventAction:(id)arg1 timeSpent:(id)arg2;
- (void)_sendReminderRequestWithReminderStatus:(_Bool)arg1;
- (void)_handleWatchPostLiveButton:(id)arg1;
- (void)_handleWatchLiveButton:(id)arg1;
- (void)_handleStartLiveButton:(id)arg1;
- (void)_showDialogWithTitle:(id)arg1 description:(id)arg2 primaryButtonText:(id)arg3 primaryHandler:(CDUnknownBlockType)arg4 secondaryButtonText:(id)arg5;
- (void)_handleAudioPageButton:(id)arg1 withAudioId:(id)arg2;
- (void)_handleEditButton:(id)arg1;
- (void)_handleReminderSecondaryButton:(id)arg1;
- (void)_handleReminderPrimaryButton:(id)arg1;
- (void)_handleSubscribeButton:(id)arg1;
- (void)_handleReminderButton:(id)arg1;
- (void)_didTapViewPostButton;
- (void)feedUpcomingEventShoppingViewAdapter:(id)arg1 didUpdateProductFeedViewModels:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_setupNonScrollableView;
- (void)_setupScrollableView;
- (void)updateWithUpcomingEvent:(id)arg1;
- (void)layoutWithHostView:(id)arg1;
- (struct CGSize)preferredContentSizeWithWidth:(double)arg1;
- (id)analyticsModule;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 upcomingEvent:(id)arg3 priorModule:(id)arg4 sourceOfAction:(id)arg5 trackingToken:(id)arg6 shouldConsiderSafeInsets:(_Bool)arg7 shouldShowViewPostButton:(_Bool)arg8 mediaReference:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

