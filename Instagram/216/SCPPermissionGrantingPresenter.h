//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCPPermissionGrantingInteractor;
@protocol SCPPermissionGrantingPresenterDelegate, SCPPermissionGrantingTranslationProviding, SCPUITheming;

@interface SCPPermissionGrantingPresenter : NSObject
{
    _Bool _isNewUIWithCustomAspectRatioEnabled;
    id <SCPPermissionGrantingPresenterDelegate> _delegate;
    id <SCPUITheming> _uiTheme;
    NSArray *_permissionGrantingImageViews;
    SCPPermissionGrantingInteractor *_interactor;
    id <SCPPermissionGrantingTranslationProviding> _translationProvider;
}

+ (id)newWithInteractor:(id)arg1 uiTheme:(id)arg2 permissionGrantingImageViews:(id)arg3 translationProvider:(id)arg4 isNewUIWithCustomAspectRatioEnabled:(_Bool)arg5;
+ (id)newWithInteractor:(id)arg1 uiTheme:(id)arg2 permissionGrantingImageViews:(id)arg3 translationProvider:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCPPermissionGrantingTranslationProviding> translationProvider; // @synthesize translationProvider=_translationProvider;
@property(readonly, nonatomic) SCPPermissionGrantingInteractor *interactor; // @synthesize interactor=_interactor;
@property(readonly, nonatomic) _Bool isNewUIWithCustomAspectRatioEnabled; // @synthesize isNewUIWithCustomAspectRatioEnabled=_isNewUIWithCustomAspectRatioEnabled;
@property(readonly, nonatomic) NSArray *permissionGrantingImageViews; // @synthesize permissionGrantingImageViews=_permissionGrantingImageViews;
@property(readonly, nonatomic) id <SCPUITheming> uiTheme; // @synthesize uiTheme=_uiTheme;
@property(nonatomic) __weak id <SCPPermissionGrantingPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cameraPermissionButtonPressed;
- (id)nextButtonTitle;
- (double)buttonCornerRadius;
- (id)buttonDisabledBackgroundColor;
- (id)buttonHighlightedBackgroundColor;
- (id)buttonBackgroundColor;
- (id)buttonSeparatorColor;
- (id)buttonFont;
- (id)declineButtonTitle;
- (id)buttonTitle;
- (id)subtitleString;
- (id)subtitleColor;
- (id)subtitleFont;
- (id)titleString;
- (id)titleColor;
- (id)titleFont;
- (id)surfaceBackgroundColor;
- (id)navigationBarTintColor;
- (void)viewWillAppear;
- (id)initWithInteractor:(id)arg1 uiTheme:(id)arg2 permissionGrantingImageViews:(id)arg3 translationProvider:(id)arg4 isNewUIWithCustomAspectRatioEnabled:(_Bool)arg5;

@end

