//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, IGGalleryPreloadHandler, IGMovingAverageCalculator, UIScrollView;

@interface IGGalleryPreloadThrottler : NSObject
{
    FBTimer *_backoffTimer;
    struct CGPoint _lastContentOffset;
    double _lastScrollTime;
    IGGalleryPreloadHandler *_preloadHandler;
    UIScrollView *_scrollView;
    IGMovingAverageCalculator *_scrollSpeedCalculator;
}

- (void).cxx_destruct;
- (void)_cancelBackoffTimer;
- (void)_scheduleBackoffTimer;
- (void)scrollViewDidScroll;
- (void)scrollViewDidEndDecelerating;
- (id)initWithScrollView:(id)arg1 preloadHandler:(id)arg2;

@end

