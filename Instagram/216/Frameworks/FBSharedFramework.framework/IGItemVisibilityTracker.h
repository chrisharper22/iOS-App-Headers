//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol IGItemVisibilityTrackerDelegate;

@interface IGItemVisibilityTracker : NSObject
{
    NSSet *_lastVisibleItems;
    NSMutableSet *_viewedItems;
    _Bool _trackingDisabled;
    id <IGItemVisibilityTrackerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGItemVisibilityTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool trackingDisabled; // @synthesize trackingDisabled=_trackingDisabled;
- (void)updateItemNotViewedWithItem:(id)arg1;
- (void)updateItemViewedWithItem:(id)arg1;
- (void)updateItemVisibilitiesWithSet:(id)arg1;
- (id)init;

@end

