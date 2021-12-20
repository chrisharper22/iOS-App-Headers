//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FXAddAccountFlowPresenterHelper-Protocol.h>

@class IGUserSessionProvider, NSString;

@interface IGFXAddAccountFlowPresenterHelper : NSObject <FXAddAccountFlowPresenterHelper>
{
    IGUserSessionProvider *_userSessionProvider;
}

- (void).cxx_destruct;
- (_Bool)allowUnsafelyTypedStringEntrypointParams;
- (void)setDefaultInitialLoadingStateHandlers:(id)arg1 withNavigationContext:(id)arg2;
- (id)castNavigationContext:(id)arg1;
- (_Bool)navigationContextIsValid:(id)arg1;
- (void)launchBloksAsyncControllerWithAppID:(id)arg1 params:(id)arg2 navigationContext:(id)arg3 wrappedDismissInitialLoadingStateHandler:(id)arg4 wrappedCompletionHandler:(id)arg5;
- (id)initWithUserSessionProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

