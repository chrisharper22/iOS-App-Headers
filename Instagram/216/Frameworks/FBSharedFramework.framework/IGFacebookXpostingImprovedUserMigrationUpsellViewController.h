//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGFacebookXpostingUserMigrationUpsellViewControllerPresentingProtocol-Protocol.h>
#import <FBSharedFramework/IGGestureHandler-Protocol.h>

@class IGTextButton, IGUserSession, NSString, UILabel, UIView;
@protocol IGFacebookXpostingUserMigrationUpsellViewControllerDelegate;

@interface IGFacebookXpostingImprovedUserMigrationUpsellViewController : IGViewController <IGGestureHandler, IGFacebookXpostingUserMigrationUpsellViewControllerPresentingProtocol>
{
    IGUserSession *_userSession;
    id <IGFacebookXpostingUserMigrationUpsellViewControllerDelegate> _delegate;
    IGTextButton *_primaryButton;
    IGTextButton *_cancelButton;
    long long _surface;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UILabel *_disclosureLabel;
    UIView *_separatorLineView;
    NSString *_uploadID;
}

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_primaryButtonTapped;
- (void)_configureBottomButtons;
- (void)_configureStaticInformationViews;
- (double)preferredHeight;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 surface:(long long)arg3 uploadID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
