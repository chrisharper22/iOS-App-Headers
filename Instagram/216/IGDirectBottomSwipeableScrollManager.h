//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGKeyboardObserver;
@protocol IGDirectBottomSwipeableScrollManagerDelegate;

@interface IGDirectBottomSwipeableScrollManager : NSObject
{
    double _keyboardVisibleSwipeThreshold;
    double _keyboardHiddenSwipeThreshold;
    IGKeyboardObserver *_keyboardObserver;
    double _distanceSwiped;
    double _progress;
    id <IGDirectBottomSwipeableScrollManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectBottomSwipeableScrollManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) double distanceSwiped; // @synthesize distanceSwiped=_distanceSwiped;
- (double)_swipeThreshold;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithKeyboardVisibleSwipeThreshold:(double)arg1 keyboardHiddenSwipeThreshold:(double)arg2 keyboardObserver:(id)arg3;

@end

