//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FXAddAccountFlowPresenterHelper;

@interface FXAddAccountFlowPresenter : NSObject
{
    id <FXAddAccountFlowPresenterHelper> _helper;
}

- (void).cxx_destruct;
- (void)presentAddAccountFlow_INTERNAL:(id)arg1 fromNavigationContext:(id)arg2 withOptionalArguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentAddAccountFlow_DEPRECATED:(id)arg1 fromNavigationContext:(id)arg2 withOptionalArguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentAddAccountFlow:(long long)arg1 fromNavigationContext:(id)arg2 withOptionalArguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithHelper:(id)arg1;

@end
