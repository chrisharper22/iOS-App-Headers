//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGImageViewDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGSundialTrendHeaderCellDelegate-Protocol.h"
#import "IGSundialTrendPreviewDelegate-Protocol.h"

@class IGCollectionViewDelegatePreviewingProxy, IGFeedPreviewHandler, IGListAdapter, IGMedia, IGSundialTrend, IGSundialTrendNavigationPerfComponents, IGUserSession, NSArray, NSString;
@protocol IGPlaybackCoordinating;

@interface IGSundialTrendSectionController : IGListSectionController <IGListAdapterDataSource, IGSundialTrendPreviewDelegate, IGSundialTrendHeaderCellDelegate, IGListDisplayDelegate, IGImageViewDelegate>
{
    IGSundialTrend *_trend;
    IGUserSession *_userSession;
    NSArray *_medias;
    _Bool _isCameraButtonHidden;
    id <IGPlaybackCoordinating> _playbackCoordinator;
    IGCollectionViewDelegatePreviewingProxy *_previewingProxy;
    IGFeedPreviewHandler *_previewHandler;
    IGSundialTrendNavigationPerfComponents *_perfLogger;
    IGListAdapter *_adapter;
    IGMedia *_sourceMedia;
    NSString *_initialMediaPK;
    NSString *_viewerSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *viewerSessionId; // @synthesize viewerSessionId=_viewerSessionId;
@property(retain, nonatomic) NSString *initialMediaPK; // @synthesize initialMediaPK=_initialMediaPK;
@property(retain, nonatomic) IGMedia *sourceMedia; // @synthesize sourceMedia=_sourceMedia;
@property(copy, nonatomic) IGSundialTrend *trend; // @synthesize trend=_trend;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)sundialTrendPreviewDidTapWithMedia:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)didTapCamera;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithTrend:(id)arg1 userSession:(id)arg2 cameraButtonHidden:(_Bool)arg3 playbackCooridinator:(id)arg4 perfLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

