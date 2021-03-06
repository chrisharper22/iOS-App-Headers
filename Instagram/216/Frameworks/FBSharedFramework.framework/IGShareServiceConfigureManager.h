//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAmebaAuthListener-Protocol.h>
#import <FBSharedFramework/IGBusinessFacebookConnectOrClaimPageFlowDelegate-Protocol.h>
#import <FBSharedFramework/IGMixiAdvancedOptionsDelegate-Protocol.h>
#import <FBSharedFramework/IGMixiAuthListener-Protocol.h>
#import <FBSharedFramework/IGOdnoklassnikiAuthListener-Protocol.h>
#import <FBSharedFramework/IGSharingServiceAuthListener-Protocol.h>
#import <FBSharedFramework/IGTwitterOAuthListener-Protocol.h>
#import <FBSharedFramework/IGVkAuthListener-Protocol.h>
#import <FBSharedFramework/IGWeiboAuthListener-Protocol.h>

@class IGAnalyticsStructuredLogger, IGBusinessFacebookConnectOrClaimPageFlow, IGUserSession, NSString;
@protocol IGShareServiceConfigureManagerDelegate;

@interface IGShareServiceConfigureManager : NSObject <IGAmebaAuthListener, IGBusinessFacebookConnectOrClaimPageFlowDelegate, IGMixiAdvancedOptionsDelegate, IGMixiAuthListener, IGOdnoklassnikiAuthListener, IGSharingServiceAuthListener, IGTwitterOAuthListener, IGVkAuthListener, IGWeiboAuthListener>
{
    IGBusinessFacebookConnectOrClaimPageFlow *_connectPageFlow;
    long long _connectPageFlowSurface;
    IGAnalyticsStructuredLogger *_logger;
    unsigned int _fxcalEntryPoint;
    _Bool _isFBPayConnected;
    long long _presentationStyle;
    id <IGShareServiceConfigureManagerDelegate> _delegate;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGShareServiceConfigureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
- (void)businessFacebookConnectPageFlowDidDismiss:(id)arg1;
- (void)businessFacebookConnectPageFlow:(id)arg1 didFinishAction:(long long)arg2;
- (void)businessFacebookConnectPageFlow:(id)arg1 didFailWithError:(id)arg2;
- (void)_onFacebookHardLinked:(id)arg1;
- (void)odnoklassnikiLoginCompleted;
- (void)amebaAuthDidFinish;
- (void)vkAuthCancelled;
- (void)vkAuthCompleted;
- (void)weibiAuthCompleted;
- (void)mixiDidCancelPrivacySetting;
- (void)mixiDidSelectPrivacySetting:(long long)arg1;
- (void)_presentMixiPrivacyPicker;
- (void)mixiAuthCompleted;
- (void)_onFacebookLoginFailed;
- (void)_showUpsellOrFetchFacebookAutoCrossPostingFromSurface:(long long)arg1;
- (void)_onFacebookLoginCompletedFromSurface:(long long)arg1;
- (void)_onFacebookCurrentUserInfoLoaded;
- (void)_onTumblrLoginCompleted;
- (void)reauthLoginNeededForService:(long long)arg1;
- (void)reauthStartedForService:(long long)arg1;
- (void)reauthFinishedForService:(long long)arg1;
- (void)onTwitterOAuthCompleted;
- (void)_onServiceLoginCompleted:(long long)arg1 animated:(_Bool)arg2;
- (void)_onServiceLoginCompleted:(long long)arg1;
- (void)showAdvancedOptionsForServiceType:(long long)arg1 isNewlyLinked:(_Bool)arg2;
- (void)_displayViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_displayViewController:(id)arg1;
- (void)_reloadData;
- (id)_flow;
- (void)_fetchFBPayConfig;
- (void)configureServiceType:(long long)arg1 configType:(long long)arg2 surface:(long long)arg3;
- (id)_viewController;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

