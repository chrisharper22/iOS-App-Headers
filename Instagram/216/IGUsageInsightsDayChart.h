//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGTooltipView, NSArray, NSMutableArray, NSString, UILongPressGestureRecognizer;
@protocol IGUsageInsightsDayChartDelegate;

@interface IGUsageInsightsDayChart : UIView <UIGestureRecognizerDelegate>
{
    NSArray *_datapoints;
    NSMutableArray *_barViews;
    NSMutableArray *_labelViews;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_selectedBarView;
    IGTooltipView *_tooltip;
    id <IGUsageInsightsDayChartDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUsageInsightsDayChartDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didEndLongPress;
- (void)_didDragLongPressWithCoordinates:(struct CGPoint)arg1;
- (void)_didStartLongPressWithCoordinates:(struct CGPoint)arg1;
- (void)_displayTooltipForBarview:(id)arg1;
- (id)_selectedBarViewForCoordinates:(struct CGPoint)arg1;
- (void)_receivedLongPress:(id)arg1;
- (double)_maxTimeSpentForDatapoints;
- (id)_createChartLabel:(_Bool)arg1;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

