//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedScrollableAttributeCellSectionControllerDelegate-Protocol.h"
#import "IGFeedScrollableClipCellSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGStoryTraySectionHeaderCellDelegate-Protocol.h"
#import "IGSundialViewerProtocol-Protocol.h"

@class IGFeedScrollableClipsModel, IGListAdapter, IGMainFeedNetegoImpressionStrategy, IGPlaybackCoordinator, IGUserSession, NSMutableSet, NSString;
@protocol IGFeedScrollableClipsSectionControllerDelegate;

@interface IGFeedScrollableClipsSectionController : IGListSectionController <IGListAdapterDataSource, IGFeedScrollableClipCellSectionControllerDelegate, IGFeedScrollableAttributeCellSectionControllerDelegate, IGStoryTraySectionHeaderCellDelegate, IGSundialViewerProtocol>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    NSString *_sourceModule;
    IGListAdapter *_listAdapter;
    _Bool _shouldScrollTrayToFront;
    NSMutableSet *_seenReels;
    NSMutableSet *_impressionLoggedReels;
    NSMutableSet *_impressionLoggedAttributePks;
    _Bool _hasLoggedTrayImpression;
    NSString *_traySessionID;
    IGPlaybackCoordinator *_playbackCoordinator;
    IGMainFeedNetegoImpressionStrategy *_netegoStrategy;
    id <IGFeedScrollableClipsSectionControllerDelegate> _delegate;
    IGFeedScrollableClipsModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFeedScrollableClipsModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGFeedScrollableClipsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_clipsViewerActionSourceForAnalyticsModule;
- (long long)_buttonActionForClipsIFUType:(unsigned long long)arg1;
- (id)_viewModelForTrendingAttribute:(id)arg1;
- (id)_viewModelForSuggestedClip:(id)arg1;
- (void)_launchSundialTrendPage;
- (void)_launchSundialViewerForSelectedItem:(id)arg1;
- (void)logTraySectionImpressionWithPositionInFeed:(long long)arg1;
- (void)sundialViewerViewControllerWillDismiss:(id)arg1 lastActiveOrganicVideo:(id)arg2;
- (void)sundialViewerViewControllerDidEndShowingActiveVideo:(id)arg1;
- (void)sundialViewerViewController:(id)arg1 didUpdateActiveVideo:(id)arg2;
- (void)headerCellURLTapped:(id)arg1 didTapLink:(id)arg2;
- (void)headerCellSecondaryActionButtonWasPressed:(id)arg1;
- (void)headerCellActionButtonWasPressed:(id)arg1;
- (void)suggestedClipCellSectionController:(id)arg1 logImpressionForReel:(id)arg2 timespentMs:(double)arg3;
- (void)suggestedClipCellSectionController:(id)arg1 didSelectedViewModel:(id)arg2;
- (void)suggestedClipCellSectionController:(id)arg1 logImpressionForAttributeViewModel:(id)arg2;
- (void)suggestedAttributeCellSectionController:(id)arg1 didSelectedViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 sourceModule:(id)arg3 config:(id)arg4 netegoImpressionStrategy:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
