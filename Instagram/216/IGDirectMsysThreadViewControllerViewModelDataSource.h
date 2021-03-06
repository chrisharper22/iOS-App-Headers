//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadViewControllerViewModelProviding-Protocol.h"

@class IGDirectDataSubscriptionPipe, IGDirectThreadViewFeatureCapabilities, IGUserStore, NSString;
@protocol IGDirectInteropGatingStatusProvider, IGDirectThreadViewControllerViewModelProvidingDelegate, IGSubscriptionToken, IGUserLauncherSetProviding;

@interface IGDirectMsysThreadViewControllerViewModelDataSource : NSObject <IGDirectThreadViewControllerViewModelProviding>
{
    id <IGSubscriptionToken> _subscriptionToken;
    IGDirectDataSubscriptionPipe *_msysThreadUpdatePipe;
    IGDirectDataSubscriptionPipe *_presencePipe;
    IGDirectDataSubscriptionPipe *_threadMegaphonePipe;
    id <IGUserLauncherSetProviding> _featureSetProvider;
    IGDirectThreadViewFeatureCapabilities *_threadCapabilities;
    id <IGDirectInteropGatingStatusProvider> _interopGatingStatusProvider;
    IGUserStore *_userStore;
    id <IGDirectThreadViewControllerViewModelProvidingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectThreadViewControllerViewModelProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_informDelegateOfError:(id)arg1;
- (void)_informDelegateOfUpdatedModel:(id)arg1;
- (void)_startPipe;
- (void)stop;
- (void)startWithViewControllerIsPresentedModally:(_Bool)arg1;
- (id)initWithMsysThreadUpdatePipe:(id)arg1 presencePipe:(id)arg2 threadMegaphonePipe:(id)arg3 featureSetProvider:(id)arg4 threadCapabilities:(id)arg5 interopGatingStatusProvider:(id)arg6 userStore:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

