//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface IGSundialTimelineRangeView : UIView
{
    UIView *_leftHandleMark;
    UIView *_rightHandleMark;
    UIImageView *_leftChevronHandle;
    UIImageView *_rightChevronHandle;
    CAShapeLayer *_rangeRectangle;
    _Bool _showLeftChevron;
    _Bool _showRightChevron;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showRightChevron; // @synthesize showRightChevron=_showRightChevron;
@property(nonatomic) _Bool showLeftChevron; // @synthesize showLeftChevron=_showLeftChevron;
- (long long)dragHandleAtPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

