//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FXAddAccountFlowCompletionHandlerWrapper, FXAddAccountFlowDismissInitialLoadingStateHandlerWrapper, FXAddAccountFlowOptionalArguments, NSDictionary, NSString;

@protocol FXAddAccountFlowPresenterHelper <NSObject>
- (_Bool)allowUnsafelyTypedStringEntrypointParams;
- (void)setDefaultInitialLoadingStateHandlers:(FXAddAccountFlowOptionalArguments *)arg1 withNavigationContext:(id)arg2;
- (_Bool)navigationContextIsValid:(id)arg1;
- (void)launchBloksAsyncControllerWithAppID:(NSString *)arg1 params:(NSDictionary *)arg2 navigationContext:(id)arg3 wrappedDismissInitialLoadingStateHandler:(FXAddAccountFlowDismissInitialLoadingStateHandlerWrapper *)arg4 wrappedCompletionHandler:(FXAddAccountFlowCompletionHandlerWrapper *)arg5;
@end
