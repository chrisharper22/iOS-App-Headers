//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UISwitch;
@protocol FBPaySecurityDynamicAuthenticating;

@interface FBPayAuthentionTestSettingsViewController : UIViewController
{
    UISwitch *_pinToggle;
    UISwitch *_bioToggle;
    double _currentIndex;
    id <FBPaySecurityDynamicAuthenticating> _dymanicAuth;
}

- (void).cxx_destruct;
- (void)authenticateWithDA;
- (void)_handleAuthenticationResponse:(id)arg1;
- (void)didTapBioToggle;
- (void)didTapPINToggle;
- (void)authenticateWithCVVTapped;
- (void)authenticateWithPinOrBioTapped;
- (void)authenticateWithPinTapped;
- (double)_incrementedConstant;
- (void)_setupConstraintsForButton:(id)arg1;
- (void)_setupButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)_setupButtons;
- (void)_setupConstraintsForToggle:(id)arg1 label:(id)arg2 toggleContainerView:(id)arg3;
- (id)_setupToggleWithTitle:(id)arg1 action:(SEL)arg2;
- (void)_setupToggles;
- (void)_loadStatusForToggles;
- (_Bool)fb_showNavBarSearchField;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

@end

