//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGColumnCollectionViewLayoutDelegate-Protocol.h"
#import "IGDirectAnimatedMediaSectionControllerDelegate-Protocol.h"
#import "IGDirectScrollingTabChildViewControllerProtocol-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGSearchControlling-Protocol.h"

@class IGDirectAnimatedMediaLogger, IGDirectGIFSearchDataSource, IGListAdapter, IGVideoPlayerManager, NSArray, NSString, UICollectionView;
@protocol IGAnalyticsEventLoggingProtocol, IGDirectGIFViewControllerDelegate, IGDirectInteropFeatureGating;

@interface IGDirectGIFViewController : IGViewController <IGListAdapterDataSource, IGDirectAnimatedMediaSectionControllerDelegate, IGColumnCollectionViewLayoutDelegate, IGDirectScrollingTabChildViewControllerProtocol, IGSearchControlling>
{
    IGDirectGIFSearchDataSource *_searchDataSource;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGDirectInteropFeatureGating> _interopFeatureGating;
    IGVideoPlayerManager *_videoPlayerManager;
    IGDirectAnimatedMediaLogger *_logger;
    NSArray *_items;
    _Bool _isVisible;
    NSString *_searchQuery;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    struct UIEdgeInsets _insets;
    id <IGDirectGIFViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectGIFViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateInsets;
- (void)_updateSearchQueryIfNeeded;
- (_Bool)columnCollectionViewLayout:(id)arg1 itemIsCenteredAtIndexPath:(id)arg2;
- (double)columnCollectionViewLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (void)animatedMediaSectionController:(id)arg1 didSelectAnimatedMedia:(id)arg2;
- (_Bool)prefersNavigationBarHidden;
- (void)containerDidTapSend;
- (void)containerDidUpdateBottomInset:(double)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)reloadWithItems:(id)arg1 giphyResponseId:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)searchWithText:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSearchDataSource:(id)arg1 analyticsLogger:(id)arg2 interopFeatureGating:(id)arg3 videoPlayerManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
