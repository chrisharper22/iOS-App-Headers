//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDiscoveryGridItemCell.h"

@class IGDiscoveryDestinationCellOverlayView, IGScalingTransitionImageView_DEPRECATED;
@protocol IGDiscoverySectionLoggingProvider;

@interface IGDiscoveryEntityRecommendationCarouselCell : IGDiscoveryGridItemCell
{
    IGDiscoveryDestinationCellOverlayView *_overlayView;
    id <IGDiscoverySectionLoggingProvider> _loggingProvider;
    IGScalingTransitionImageView_DEPRECATED *_transitionView;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithRecCover:(id)arg1 userSession:(id)arg2 loggingProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

