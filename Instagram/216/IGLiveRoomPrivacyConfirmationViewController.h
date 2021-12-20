//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGLiveRoomPrivacyConfirmationViewDelegate-Protocol.h"

@class IGLiveRoomPrivacyConfirmationView, IGUser, NSString;
@protocol IGLiveRoomPrivacyConfirmationViewControllerDelegate, IGUserLauncherSetProviding;

@interface IGLiveRoomPrivacyConfirmationViewController : UIViewController <IGLiveRoomPrivacyConfirmationViewDelegate>
{
    NSString *_module;
    IGLiveRoomPrivacyConfirmationView *_contentView;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    _Bool _requestSent;
    IGUser *_actor;
    IGUser *_actee;
    unsigned long long _privacyType;
    id <IGLiveRoomPrivacyConfirmationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveRoomPrivacyConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long privacyType; // @synthesize privacyType=_privacyType;
@property(readonly, nonatomic) IGUser *actee; // @synthesize actee=_actee;
@property(readonly, nonatomic) IGUser *actor; // @synthesize actor=_actor;
- (void)rejectButtonTappedInPrivacyConfirmationView:(id)arg1;
- (void)acceptButtonTappedInPrivacyConfirmationView:(id)arg1;
- (void)markRequestSent:(_Bool)arg1;
- (void)dismiss;
- (void)presentWithParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithActor:(id)arg1 actee:(id)arg2 privacyType:(unsigned long long)arg3 module:(id)arg4 launcherSetProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

