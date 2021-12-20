//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPPermissionGrantingViewControlling-Protocol.h"

@class NSString, SCPButton, SCPPermissionGrantingPresenter, UIImageView, UILabel, UIView;
@protocol SCPPermissionGrantingViewControllingDelegate;

@interface SCPPermissionGrantingViewController : UIViewController <SCPPermissionGrantingViewControlling>
{
    id <SCPPermissionGrantingViewControllingDelegate> _delegate;
    SCPPermissionGrantingPresenter *_presenter;
    UIView *_contentView;
    UIView *_centeredContentView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_disclaimerView;
    UIView *_permissionButtonSeparatorView;
    SCPButton *_cameraPermissionButton;
    SCPButton *_cameraPermissionDeclineButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCPButton *cameraPermissionDeclineButton; // @synthesize cameraPermissionDeclineButton=_cameraPermissionDeclineButton;
@property(retain, nonatomic) SCPButton *cameraPermissionButton; // @synthesize cameraPermissionButton=_cameraPermissionButton;
@property(retain, nonatomic) UIView *permissionButtonSeparatorView; // @synthesize permissionButtonSeparatorView=_permissionButtonSeparatorView;
@property(retain, nonatomic) UIView *disclaimerView; // @synthesize disclaimerView=_disclaimerView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *centeredContentView; // @synthesize centeredContentView=_centeredContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SCPPermissionGrantingPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <SCPPermissionGrantingViewControllingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)permissionGrantingPresenterDidFinishHandlingCameraPermissionButtonPress:(_Bool)arg1;
- (void)permissionGrantingPresenterCantModifyPermissionsWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 goToSettingsButtonTitle:(id)arg4;
- (void)permissionGrantingPresenterDidUpdateCameraPermissionButtonTitle:(id)arg1;
- (void)permissionGrantingPresenterDidUpdateCameraPermissionButtonState:(_Bool)arg1;
- (void)setCustomPermissionImageViews;
- (void)cameraPermissionDeclineButtonPressed;
- (void)cameraPermissionButtonPressed;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)configureConstraints;
- (void)initializeViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
