//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAGradientLayer, UIColor;

@interface IGShareSheetButton : UIButton
{
    UIColor *_cancelTitleColor;
    UIColor *_cancelBackgroundColor;
    UIColor *_actionTitleColor;
    UIColor *_actionBackgroundColor;
    UIColor *_actionBackgroundStartGradientColor;
    UIColor *_actionBackgroundEndGradientColor;
    CAGradientLayer *_gradientLayer;
}

+ (id)defaultButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(readonly, nonatomic) UIColor *actionBackgroundEndGradientColor; // @synthesize actionBackgroundEndGradientColor=_actionBackgroundEndGradientColor;
@property(readonly, nonatomic) UIColor *actionBackgroundStartGradientColor; // @synthesize actionBackgroundStartGradientColor=_actionBackgroundStartGradientColor;
@property(readonly, nonatomic) UIColor *actionBackgroundColor; // @synthesize actionBackgroundColor=_actionBackgroundColor;
@property(readonly, nonatomic) UIColor *actionTitleColor; // @synthesize actionTitleColor=_actionTitleColor;
@property(readonly, nonatomic) UIColor *cancelBackgroundColor; // @synthesize cancelBackgroundColor=_cancelBackgroundColor;
@property(readonly, nonatomic) UIColor *cancelTitleColor; // @synthesize cancelTitleColor=_cancelTitleColor;
- (void)layoutSubviews;
- (void)setActionTheme;
- (void)setCancelTheme;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCancelTitleColor:(id)arg1 cancelBackgroundColor:(id)arg2 actionTitleColor:(id)arg3 actionBackgroundStartGradientColor:(id)arg4 actionBackgroundEndGradientColor:(id)arg5;
- (id)initWithCancelTitleColor:(id)arg1 cancelBackgroundColor:(id)arg2 actionTitleColor:(id)arg3 actionBackgroundColor:(id)arg4;

@end

