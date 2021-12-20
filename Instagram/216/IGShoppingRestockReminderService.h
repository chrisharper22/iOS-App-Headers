//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGShoppingConsumptionAnalyticsContext, IGShoppingNavigationAnalyticsContext, IGUserSession, NSMutableDictionary, UIViewController;
@protocol IGShoppingRestockReminderServiceDelegate;

@interface IGShoppingRestockReminderService : NSObject
{
    IGUserSession *_userSession;
    NSMutableDictionary *_productItemPkToStateMap;
    NSMutableDictionary *_productItemPkToRequestToken;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
    UIViewController *_viewController;
    id <IGShoppingRestockReminderServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingRestockReminderServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentToastWithViewModel:(id)arg1 tapActionBlock:(CDUnknownBlockType)arg2;
- (void)_presentErrorToastWithMessage:(id)arg1 tapActionBlock:(CDUnknownBlockType)arg2;
- (void)_presentToastForProductItem:(id)arg1 state:(long long)arg2 priorSaveStatus:(_Bool)arg3;
- (void)_saveProductItem:(id)arg1;
- (void)_handleNetworkTaskFailureForProductItemWithPk:(id)arg1 withError:(id)arg2;
- (void)_handleNetworkTaskSuccessForProductItemWithPk:(id)arg1 updatedState:(long long)arg2;
- (void)_executeNetworkRequest:(id)arg1 forProductItemWithPk:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)fetchStateForProductItem:(id)arg1;
- (void)updateState:(long long)arg1 forProductItem:(id)arg2 withUpdateType:(unsigned long long)arg3;
- (long long)stateForProductItemWithPk:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationAnalyticsContext:(id)arg2 shoppingSessionTracker:(id)arg3 viewController:(id)arg4 consumptionLoggingInfo:(id)arg5;

@end
