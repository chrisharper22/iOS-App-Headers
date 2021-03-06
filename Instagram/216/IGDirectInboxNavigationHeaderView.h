//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectInboxConfig, IGStackLayout, IGUserSession, NSString, UIButton, UILabel;
@protocol IGDirectInboxNavigationHeaderViewDelegate;

@interface IGDirectInboxNavigationHeaderView : UIView
{
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIView *_titleView;
    UIButton *_multiSelectButton;
    UIButton *_roomsButton;
    UIButton *_videoCallButton;
    UIButton *_messageButton;
    UIButton *_cancelButton;
    UIButton *_editButton;
    UIView *_separatorView;
    UIButton *_statusButton;
    IGUserSession *_userSession;
    IGDirectInboxConfig *_inboxConfig;
    IGStackLayout *_rightButtonsLayout;
    id <IGDirectInboxNavigationHeaderViewDelegate> _delegate;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <IGDirectInboxNavigationHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureWithState:(id)arg1;
- (double)_titleViewWidth;
- (void)updateRightButtonsWithEditing:(_Bool)arg1 featureLimitsRestrictions:(_Bool)arg2;
- (void)_statusButtonTapped;
- (void)_cancelButtonTapped;
- (void)_messageButtonTapped;
- (void)_videoCallButtonTapped;
- (void)_roomsButtonTapped;
- (void)_multiSelectButtonTapped;
- (void)_backButtonTapped;
- (void)_editButtonTapped;
- (void)_setupEditButton;
- (void)_setupCancelButton;
- (void)_setupMessageButton;
- (void)_setupVideoCallButton;
- (void)_setupRoomsButton;
- (void)_setupMultiSelectButton;
- (void)_setupRightButtons;
@property(nonatomic) double separatorAlpha;
- (void)_setupStatusButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 titleView:(id)arg3 directInboxConfig:(id)arg4 userSession:(id)arg5;

@end

