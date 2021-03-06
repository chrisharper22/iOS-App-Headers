//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@class NSMutableDictionary;

@interface THMultiTapGestureRecognizer : UITapGestureRecognizer
{
    double _maximumTapInterval;
    NSMutableDictionary *_tapHandlers;
    long long _tapCount;
    long long _maximumNumberOfTapsHandled;
    struct CGPoint _tapLocationInView;
}

- (void).cxx_destruct;
- (void)_processTaps;
- (void)_handleTap:(id)arg1;
- (void)prepareForReuse;
- (void)addTapHandler:(CDUnknownBlockType)arg1 forNumberOfTaps:(long long)arg2;
- (id)initWithMaximumTapInterval:(double)arg1;

@end

