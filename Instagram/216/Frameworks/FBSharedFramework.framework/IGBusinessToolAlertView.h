//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGCoreTextLinkHandler-Protocol.h>

@class IGCoreTextView, IGImageView, IGTapButton, NSArray, NSString, NSURL, UIActivityIndicatorView, UIButton, UILabel;
@protocol IGBusinessToolAlertViewDelegate;

@interface IGBusinessToolAlertView : UIView <IGCoreTextLinkHandler>
{
    double _profilePictureWidth;
    _Bool _isStyledMessage;
    NSArray *_buttonConfigs;
    NSArray *_actionButtons;
    id <IGBusinessToolAlertViewDelegate> _delegate;
    NSURL *_profilePicutureURL;
    NSString *_actionText;
    NSString *_dismissActionText;
    UIView *_alertContainer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGCoreTextView *_styledMessageView;
    IGCoreTextView *_linkSubtitleView;
    IGTapButton *_ctaButton;
    UIButton *_closeButton;
    IGImageView *_profileImageView;
    UIButton *_actionButton;
    UIActivityIndicatorView *_actionButtonSpinner;
    UIButton *_dismissActionButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *dismissActionButton; // @synthesize dismissActionButton=_dismissActionButton;
@property(readonly, nonatomic) UIActivityIndicatorView *actionButtonSpinner; // @synthesize actionButtonSpinner=_actionButtonSpinner;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) IGImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) IGTapButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(readonly, nonatomic) IGCoreTextView *linkSubtitleView; // @synthesize linkSubtitleView=_linkSubtitleView;
@property(readonly, nonatomic) IGCoreTextView *styledMessageView; // @synthesize styledMessageView=_styledMessageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *alertContainer; // @synthesize alertContainer=_alertContainer;
@property(copy, nonatomic) NSString *dismissActionText; // @synthesize dismissActionText=_dismissActionText;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, copy, nonatomic) NSURL *profilePicutureURL; // @synthesize profilePicutureURL=_profilePicutureURL;
@property(nonatomic) __weak id <IGBusinessToolAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)_rectForCloseButtonWithContainerRect:(struct CGRect)arg1;
- (struct CGRect)_rectForSubtitleWithContainerRect:(struct CGRect)arg1 titleRect:(struct CGRect)arg2;
- (struct CGRect)_rectForStyledMessageWithContainerRect:(struct CGRect)arg1 titleRect:(struct CGRect)arg2;
- (struct CGRect)_rectForTitleWithContainerRect:(struct CGRect)arg1 withTopMargin:(double)arg2;
- (void)layoutSubviews;
- (void)startLoadingOnActionButton;
- (void)_didTapRedirectButton:(id)arg1;
- (void)_didTapDismissActionButton:(id)arg1;
- (void)_didTapActionButton:(id)arg1;
- (void)_didTapButton:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_didTapCloseButton:(id)arg1;
- (void)shouldShowCloseArrow:(_Bool)arg1;
- (void)setLinkSubtitle:(id)arg1;
- (void)setMessage:(id)arg1 isStyledString:(_Bool)arg2;
- (void)setMessage:(id)arg1;
- (void)_setButtonString:(id)arg1 withArrow:(_Bool)arg2;
- (void)setButtonStringNoArrow:(id)arg1;
- (void)setButtonString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setProfilePictureWidth:(double)arg1;
- (void)setProfilePicutureURL:(id)arg1 module:(id)arg2;
- (id)_createDismissActionButton;
- (id)_createActionButton;
- (id)_createCloseButton;
- (id)_createCTAButton;
- (id)_createLinkSubtitleView;
- (id)_createStyledMessageView;
- (id)_createSubitleLabel;
- (id)_createTitleLabel;
- (id)_createAlertBackground;
- (id)_createProfileImageView;
- (void)_setUpViewHierarchy;
- (void)_configureViewWithButtonConfigs:(id)arg1;
- (id)initWithButtonConfigs:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
