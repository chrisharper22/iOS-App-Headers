//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCPOnboardingStep, UILabel;

@interface SCPOnboardingStepView : UIView
{
    SCPOnboardingStep *_step;
    UIView *_stepViewContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (id)newWithStep:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *stepViewContainerView; // @synthesize stepViewContainerView=_stepViewContainerView;
@property(readonly, nonatomic) SCPOnboardingStep *step; // @synthesize step=_step;
- (void)configureConstraints;
- (void)setSubtitleFont:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)initializeViews;
- (id)initWithStep:(id)arg1;

@end
