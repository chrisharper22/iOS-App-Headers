//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class FBWeakObjectContainer, IGProFlowNavigationPresenter, NSString;

@interface IGProAccountConversionFlowUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _shouldStartAtPreselectedAccountTypeSelection;
    _Bool _shouldUseSignupFlow;
    NSString *_entryPoint;
    IGProFlowNavigationPresenter *_flowPresenter;
    FBWeakObjectContainer *_presentingDelegate;
    long long _footerButtonStyle;
    long long _inferredAccountType;
    NSString *_categoryID;
    FBWeakObjectContainer *_completionRefreshDelegate;
    CDUnknownBlockType _flowCompletionNavigationBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType flowCompletionNavigationBlock; // @synthesize flowCompletionNavigationBlock=_flowCompletionNavigationBlock;
@property(readonly, nonatomic) FBWeakObjectContainer *completionRefreshDelegate; // @synthesize completionRefreshDelegate=_completionRefreshDelegate;
@property(readonly, nonatomic) _Bool shouldUseSignupFlow; // @synthesize shouldUseSignupFlow=_shouldUseSignupFlow;
@property(readonly, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(readonly, nonatomic) long long inferredAccountType; // @synthesize inferredAccountType=_inferredAccountType;
@property(readonly, nonatomic) long long footerButtonStyle; // @synthesize footerButtonStyle=_footerButtonStyle;
@property(readonly, nonatomic) _Bool shouldStartAtPreselectedAccountTypeSelection; // @synthesize shouldStartAtPreselectedAccountTypeSelection=_shouldStartAtPreselectedAccountTypeSelection;
@property(readonly, nonatomic) FBWeakObjectContainer *presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(readonly, nonatomic) IGProFlowNavigationPresenter *flowPresenter; // @synthesize flowPresenter=_flowPresenter;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)initWithEntryPoint:(id)arg1 flowPresenter:(id)arg2 presentingDelegate:(id)arg3 shouldStartAtPreselectedAccountTypeSelection:(_Bool)arg4 footerButtonStyle:(long long)arg5 inferredAccountType:(long long)arg6 categoryID:(id)arg7 shouldUseSignupFlow:(_Bool)arg8 completionRefreshDelegate:(id)arg9 flowCompletionNavigationBlock:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

