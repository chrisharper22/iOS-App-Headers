//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGFeedItemPageIndicator;

@interface IGCoWatchCarouselControlsView : IGPassthroughView
{
    IGFeedItemPageIndicator *_pageIndicatorDots;
    long long _totalNumItems;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCarouselIndicatorsForCurrentIndex:(long long)arg1;
- (void)setCarouselIndicatorsTotalItems:(long long)arg1;
- (void)updateCarouselIndicatorsWithCarouselItem:(id)arg1;
- (id)init;

@end

