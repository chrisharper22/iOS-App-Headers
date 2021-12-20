//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGLiveUserPayGoalSettingViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGImageView, IGLiveUserPayBroadcasterConfig, IGLiveUserPayGoalSettingView, IGUser, IGUserSession, NSString, UILabel;
@protocol IGLiveUserPaySheetViewDelegate;

@interface IGLiveUserPaySheetView : UIView <IGLiveUserPayGoalSettingViewDelegate>
{
    _Bool _isUserPayEnabled;
    _Bool _isGoalSettingEnabled;
    _Bool _isKeyboardShowing;
    IGLiveUserPayBroadcasterConfig *_userPayBroadcasterConfig;
    IGLiveUserPayGoalSettingView *_goalSettingView;
    IGImageView *_headerImageView;
    UILabel *_headerLabel;
    UILabel *_descriptionLabel;
    IGBottomButtonsView *_bottomButtonsView;
    IGUser *_user;
    IGUserSession *_userSession;
    NSString *_goalSettingMessage;
    id <IGLiveUserPaySheetViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveUserPaySheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)liveUserPayGoalSettingView:(id)arg1 didSetGoalSettingMessage:(id)arg2;
- (void)liveUserPayGoalSettingView:(id)arg1 didShowKeyboard:(_Bool)arg2;
- (struct CGSize)_descriptionLabelSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIsUserPayEnabled:(_Bool)arg1 isGoalSettingEnabled:(_Bool)arg2 goalSettingMessage:(id)arg3 user:(id)arg4 userSession:(id)arg5 userPayBroadcasterConfig:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

