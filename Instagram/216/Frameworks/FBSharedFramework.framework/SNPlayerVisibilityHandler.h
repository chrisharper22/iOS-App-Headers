//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SNPlaybackExtendableVisibilityListener;

@interface SNPlayerVisibilityHandler : NSObject
{
    id <SNPlaybackExtendableVisibilityListener> _listener;
    double _visibilityThreshold;
    _Bool _isVisibleState;
}

- (void).cxx_destruct;
- (void)updatePercentVisible:(double)arg1 forPlayback:(id)arg2;
- (id)initWithListener:(id)arg1 minPercentageForVisibility:(double)arg2 visibleState:(_Bool)arg3;

@end

