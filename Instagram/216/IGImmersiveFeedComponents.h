//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSundialViewerCarouselViewpointProvider-Protocol.h"

@class IGFeedScrollViewAnnouncer, IGUnifiedVideoCollectionView, MISSING_TYPE;

@interface IGImmersiveFeedComponents : NSObject <IGSundialViewerCarouselViewpointProvider>
{
    MISSING_TYPE *scrollViewAnnouncer;
    MISSING_TYPE *lookaheadPageDistance;
    MISSING_TYPE *$__lazy_storage_$_collectionView;
    MISSING_TYPE *userSession;
    MISSING_TYPE *componentConfiguration;
    MISSING_TYPE *feedNetworkSource;
    MISSING_TYPE *interactionCoordinator;
    MISSING_TYPE *itemConfiguration;
    MISSING_TYPE *mediaPrefetchManager;
    MISSING_TYPE *playbackCoordinator;
    MISSING_TYPE *analyticsModule;
    MISSING_TYPE *customLayout;
    MISSING_TYPE *config;
    MISSING_TYPE *adItemMapper;
}

- (void).cxx_destruct;
- (id)init;
- (id)carouselViewPointActionForMedia:(id)arg1 atIndex:(long long)arg2;
- (id)adSectionControllerFor:(id)arg1 with:(id)arg2;
- (id)loadingSectionController;
- (id)mediaSectionControllerFor:(id)arg1;
- (id)sectionControllerFor:(id)arg1 with:(id)arg2;
- (id)listAdapterObjectsWithIncludeCustomObject:(CDUnknownBlockType)arg1;
- (id)listAdapterObjects;
- (id)initWithViewController:(id)arg1 feedNetworkSource:(id)arg2 itemConfiguration:(id)arg3 componentConfiguration:(id)arg4 userSession:(id)arg5 analyticsModule:(id)arg6 customLayout:(id)arg7;
- (id)initWithViewController:(id)arg1 feedNetworkSource:(id)arg2 itemConfiguration:(id)arg3 componentConfiguration:(id)arg4 userSession:(id)arg5 analyticsModule:(id)arg6;
@property(nonatomic, retain) IGUnifiedVideoCollectionView *collectionView;
@property(nonatomic, readonly) long long lookaheadPageDistance; // @synthesize lookaheadPageDistance;
@property(nonatomic, readonly) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer;

@end
