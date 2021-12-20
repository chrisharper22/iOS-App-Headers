//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAccessFooterViewDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"

@class IGAccessFooterView, IGCoreTextView, IGImageView, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel;
@protocol IGOneTapSingleAccountLoginViewDelegate;

@interface IGOneTapSingleAccountLoginView : UIView <IGCoreTextLinkHandler, IGAccessFooterViewDelegate>
{
    UIImageView *_logoView;
    UIView *_profilePictureBackgroundView;
    UILabel *_usernameLabel;
    UILabel *_descriptionLabel;
    UIActivityIndicatorView *_buttonLoadingIndicator;
    UIImage *_loginButtonImage;
    UIButton *_dismissButton;
    IGCoreTextView *_termView;
    IGAccessFooterView *_footerView;
    unsigned long long _viewType;
    id <IGOneTapSingleAccountLoginViewDelegate> _delegate;
    IGImageView *_profilePictureView;
    UIButton *_loginButton;
    UIButton *_tappableLoginArea;
    UIButton *_secondaryButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) UIButton *tappableLoginArea; // @synthesize tappableLoginArea=_tappableLoginArea;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) IGImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic) __weak id <IGOneTapSingleAccountLoginViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapDismissButton;
- (void)_didTapSecondaryButton;
- (void)_didTapProfilePhotoView;
- (void)_didTapLoginButton;
- (double)_topMargin;
- (void)accessFooterViewDidTapSecondaryButton:(id)arg1;
- (void)accessFooterViewDidTapPrimaryButton:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)setIsLoading:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithPersistedAccount:(id)arg1 loginButtonImage:(id)arg2 loginButtonTitle:(id)arg3 dismissButtonEnabled:(_Bool)arg4 termsViewEnabled:(_Bool)arg5 footerModel:(id)arg6 module:(id)arg7 viewType:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
