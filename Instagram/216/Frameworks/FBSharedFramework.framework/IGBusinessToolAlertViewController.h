//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGBusinessToolAlertViewDelegate-Protocol.h>

@class IGBusinessToolAlertView, IGUserSession, NSArray, NSString, NSURL;
@protocol IGBusinessToolAlertViewControllerDelegate;

@interface IGBusinessToolAlertViewController : IGViewController <IGBusinessToolAlertViewDelegate>
{
    IGBusinessToolAlertView *_businessToolAlertView;
    NSURL *_profileImageURL;
    NSString *_title;
    NSString *_message;
    NSString *_linkSubtitle;
    NSString *_actionText;
    NSString *_dismissActiontext;
    IGUserSession *_userSession;
    NSArray *_buttonConfigs;
    id <IGBusinessToolAlertViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBusinessToolAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startLoadingOnActionButton;
- (void)didTapDismissActionButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapActionButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapLinkInSubtitle:(id)arg1 withBusinessToolAlertView:(id)arg2;
- (void)didTapCTAButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapCloseButtonWithBusinessToolAlertView:(id)arg1;
- (void)setMessage:(id)arg1 isStyledString:(_Bool)arg2;
- (void)setProfileImageWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_initWithProfileImageURL:(id)arg1 title:(id)arg2 message:(id)arg3 linkSubtitle:(id)arg4 actionText:(id)arg5 dismissActionText:(id)arg6 userSession:(id)arg7 buttonConfigs:(id)arg8;
- (id)initWithSession:(id)arg1 profileImageURL:(id)arg2 title:(id)arg3 message:(id)arg4 linkSubtitle:(id)arg5 buttonConfigs:(id)arg6;
- (id)initWithProfileImageURL:(id)arg1 title:(id)arg2 message:(id)arg3 linkSubtitle:(id)arg4 actionText:(id)arg5 dismissActionText:(id)arg6 userSession:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

