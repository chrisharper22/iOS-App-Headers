//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedConfigurationType-Protocol.h"

@class IGDefaultFeedConfiguration, IGSponsoredSupportConfiguration, NSString;

@interface IGPBIAProxyProfileFeedConfiguration : NSObject <IGFeedConfigurationType>
{
    NSString *_analyticsModule;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGDefaultFeedConfiguration *_defaultConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDefaultFeedConfiguration *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (id)wishlistBarButton;
- (id)priorModule;
- (_Bool)supportFeaturedProducts;
- (struct UIEdgeInsets)CTAButtonTappableInsets;
- (unsigned long long)CTAButtonAccessoryPosition;
- (unsigned long long)tombstoneTypeForFeed;
- (_Bool)supportsEdgePostLabel;
- (_Bool)supportStoryRingInHeader;
- (id)sponsoredSupportConfiguration;
- (_Bool)supportSeenState;
- (_Bool)supportFavoritesTooltip;
- (long long)UFIExternalShareButtonStyle;
- (long long)UFISaveButtonStyle;
- (_Bool)supportCarouselIndexing;
- (_Bool)supportCarouselBumpingAnimation;
- (_Bool)supportAccountRecommendations;
- (_Bool)shouldTrackCarouselSeenState;
- (_Bool)shouldTombstoneForUnrelatedHashtagFeedItem;
- (double)loadDistance;
- (_Bool)shouldShowTopSeparator;
- (_Bool)shouldRenderMediaInSquare;
- (_Bool)shouldPrefetchMediaForFeedItems;
- (long long)UFIPageIndicatorPosition;
- (long long)pageIndicatorType;
- (_Bool)useAutoplayStrategyforHorizontalVideos;
- (_Bool)videoStitchingEnabled;
- (id)savedMediaCollection;
- (_Bool)persistentOverlayIndicators;
- (_Bool)interactiveTagHints;
- (_Bool)hideDismissedPostsOnDisappear;
- (id)prioritizedDirectRecipient;
- (unsigned long long)igtvViewerFeedPreviewEntryPoint;
- (unsigned long long)sponsoredPostEntryPoint;
- (long long)feedItemHeaderStoryEntryPoint;
- (id)feedConsumptionTracker;
- (id)feedAccessibilityIdentifier;
- (CDStruct_fe30105c)carouselInteractionOptions;
- (id)analyticsModule;
- (id)initWithAnalyticsModule:(id)arg1 sponsoredSupportConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

