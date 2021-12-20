//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface IGTVCardView : UIView
{
    _Bool _hasBorder;
    double _borderWidth;
    UIView *_contentView;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_updateBorder;
- (void)_updateCornerRadius;
- (struct CGRect)_contentViewFrame;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithBackgroundColor:(id)arg1 hasBorder:(_Bool)arg2 cornerRadius:(double)arg3;

@end
