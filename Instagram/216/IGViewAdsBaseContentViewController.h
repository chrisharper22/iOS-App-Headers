//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAdActivityNetworkSourceDelegate-Protocol.h"
#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGInfoViewDelegate-Protocol.h"
#import "IGListAdapterCompletionListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#import "IGViewAdsFeedDisplayProtocol-Protocol.h"

@class IGAdActivityNetworkSource, IGEmptyFeedView, IGFeedPreviewHandler, IGFeedStarterKit, IGInfoView, IGUserSession, NSArray, NSString;

@interface IGViewAdsBaseContentViewController : IGViewController <IGListAdapterDataSource, IGListAdapterDelegate, IGListAdapterCompletionListener, IGFeedScrollViewListener, IGAdActivityNetworkSourceDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGEmptyFeedViewDelegate, IGInfoViewDelegate, IGViewAdsFeedDisplayProtocol>
{
    IGAdActivityNetworkSource *_networkSource;
    IGEmptyFeedView *_emptyView;
    IGInfoView *_infoView;
    IGFeedPreviewHandler *_previewHandler;
    _Bool _enable3DTouchPreview;
    IGUserSession *_userSession;
    IGFeedStarterKit *_feed;
    NSArray *_feedItems;
    unsigned long long _networkRequestType;
    struct IGGridLayoutConfiguration _thumbnailSectionLayoutConfiguration;
}

- (void).cxx_destruct;
@property(nonatomic) struct IGGridLayoutConfiguration thumbnailSectionLayoutConfiguration; // @synthesize thumbnailSectionLayoutConfiguration=_thumbnailSectionLayoutConfiguration;
@property(nonatomic) unsigned long long networkRequestType; // @synthesize networkRequestType=_networkRequestType;
@property(nonatomic) _Bool enable3DTouchPreview; // @synthesize enable3DTouchPreview=_enable3DTouchPreview;
@property(retain, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(readonly, nonatomic) IGFeedStarterKit *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)_showInfoView;
- (_Bool)_shouldDisplayEmptyView;
- (void)_refresh;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (id)analyticsExtras;
- (void)infoViewWasTapped:(id)arg1;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)networkSourceDidFailFetchAdsRequest:(id)arg1 requestType:(unsigned long long)arg2;
- (void)networkSource:(id)arg1 didFetchFeedItems:(id)arg2 reelItems:(id)arg3 igtvAdItems:(id)arg4 sundialAdItems:(id)arg5 requestType:(unsigned long long)arg6;
- (void)networkSource:(id)arg1 didFetchItemsWithModel:(id)arg2;
- (void)listAdapter:(id)arg1 didCompleteReloadAndRefreshHidden:(_Bool)arg2;
- (void)listAdapter:(id)arg1 didCompleteUpdateAnimated:(_Bool)arg2 refreshHidden:(_Bool)arg3;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (id)processedFeedItemFromNetworkFetchedFeedItems:(id)arg1 reelItems:(id)arg2;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 targetUser:(id)arg2 analyticsModule:(id)arg3 feedAccessibilityIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
