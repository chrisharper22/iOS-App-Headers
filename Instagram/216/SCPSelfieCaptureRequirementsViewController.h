//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCPSelfieCaptureRequirementsViewControllerConfiguration, UIImageView, UILabel, UIView;

@interface SCPSelfieCaptureRequirementsViewController : UIViewController
{
    SCPSelfieCaptureRequirementsViewControllerConfiguration *_configuration;
    UIView *_containerView;
    UILabel *_titleLabel;
    UIView *_firstCircleView;
    UILabel *_firstRequirementTitleLabel;
    UILabel *_firstRequirementExplanationLabel;
    UIImageView *_firstRequirementImageHolder;
    UIView *_separatorView;
    UIView *_secondCircleView;
    UILabel *_secondRequirementTitleLabel;
    UILabel *_secondRequirementExplanationLabel;
    UIImageView *_secondRequirementImageHolder;
    UIView *_privacyDisclaimerView;
}

+ (id)newWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *privacyDisclaimerView; // @synthesize privacyDisclaimerView=_privacyDisclaimerView;
@property(retain, nonatomic) UIImageView *secondRequirementImageHolder; // @synthesize secondRequirementImageHolder=_secondRequirementImageHolder;
@property(retain, nonatomic) UILabel *secondRequirementExplanationLabel; // @synthesize secondRequirementExplanationLabel=_secondRequirementExplanationLabel;
@property(retain, nonatomic) UILabel *secondRequirementTitleLabel; // @synthesize secondRequirementTitleLabel=_secondRequirementTitleLabel;
@property(retain, nonatomic) UIView *secondCircleView; // @synthesize secondCircleView=_secondCircleView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *firstRequirementImageHolder; // @synthesize firstRequirementImageHolder=_firstRequirementImageHolder;
@property(retain, nonatomic) UILabel *firstRequirementExplanationLabel; // @synthesize firstRequirementExplanationLabel=_firstRequirementExplanationLabel;
@property(retain, nonatomic) UILabel *firstRequirementTitleLabel; // @synthesize firstRequirementTitleLabel=_firstRequirementTitleLabel;
@property(retain, nonatomic) UIView *firstCircleView; // @synthesize firstCircleView=_firstCircleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) SCPSelfieCaptureRequirementsViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (struct CGSize)preferredContentSize;
- (void)configureConstraints;
- (void)initializeViews;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end

