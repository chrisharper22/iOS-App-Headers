//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIImageView, UILabel;

@interface IGFeedItemHiddenNoReasonSelectedCellTableViewHeader : UIView
{
    UILabel *_reasonHeaderLabel;
    UIImageView *_chevronImageView;
    CALayer *_topLineLayer;
    CALayer *_bottomLineLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *bottomLineLayer; // @synthesize bottomLineLayer=_bottomLineLayer;
@property(readonly, nonatomic) CALayer *topLineLayer; // @synthesize topLineLayer=_topLineLayer;
@property(readonly, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(readonly, nonatomic) UILabel *reasonHeaderLabel; // @synthesize reasonHeaderLabel=_reasonHeaderLabel;
- (void)setTextColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

