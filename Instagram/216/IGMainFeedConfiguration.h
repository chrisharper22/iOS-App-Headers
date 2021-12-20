//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedConfigurationType-Protocol.h"

@class IGDefaultFeedConfiguration, IGFeedConsumptionTracker, IGSponsoredSupportConfiguration, NSString;
@protocol IGUserLauncherSetProviding;

@interface IGMainFeedConfiguration : NSObject <IGFeedConfigurationType>
{
    IGFeedConsumptionTracker *_feedConsumptionTracker;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    _Bool _videoStitchingEnabled;
    id <IGUserLauncherSetProviding> _launcherSet;
    IGDefaultFeedConfiguration *_defaultConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDefaultFeedConfiguration *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (id)wishlistBarButton;
- (id)priorModule;
- (_Bool)supportFeaturedProducts;
- (struct UIEdgeInsets)CTAButtonTappableInsets;
- (unsigned long long)CTAButtonAccessoryPosition;
- (double)loadDistance;
- (_Bool)shouldShowTopSeparator;
- (_Bool)hideDismissedPostsOnDisappear;
- (_Bool)interactiveTagHints;
- (_Bool)persistentOverlayIndicators;
- (long long)UFIPageIndicatorPosition;
- (long long)pageIndicatorType;
- (long long)UFIExternalShareButtonStyle;
- (long long)UFISaveButtonStyle;
- (id)sponsoredSupportConfiguration;
- (_Bool)shouldRenderMediaInSquare;
- (_Bool)supportSeenState;
- (id)feedConsumptionTracker;
- (_Bool)supportCarouselIndexing;
- (_Bool)supportCarouselBumpingAnimation;
- (_Bool)shouldTrackCarouselSeenState;
- (_Bool)shouldTombstoneForUnrelatedHashtagFeedItem;
- (_Bool)supportAccountRecommendations;
- (CDStruct_fe30105c)carouselInteractionOptions;
- (unsigned long long)tombstoneTypeForFeed;
- (id)feedAccessibilityIdentifier;
- (id)savedMediaCollection;
- (id)analyticsModule;
- (_Bool)supportFavoritesTooltip;
- (_Bool)supportsEdgePostLabel;
- (_Bool)supportStoryRingInHeader;
- (_Bool)shouldPrefetchMediaForFeedItems;
- (_Bool)useAutoplayStrategyforHorizontalVideos;
- (_Bool)videoStitchingEnabled;
- (id)prioritizedDirectRecipient;
- (unsigned long long)igtvViewerFeedPreviewEntryPoint;
- (unsigned long long)sponsoredPostEntryPoint;
- (long long)feedItemHeaderStoryEntryPoint;
- (id)initWithLauncherSet:(id)arg1 feedConsumptionTracker:(id)arg2 analyticsModule:(id)arg3 sponsoredSupportConfiguration:(id)arg4 videoStitchingEnabled:(_Bool)arg5;
- (id)initWithLauncherSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
