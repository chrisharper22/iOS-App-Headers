//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPayComponentBaseCell, FBPayExpressCheckoutBaseViewController, FBPayExpressCheckoutErrorHandler, FBPayExpressCheckoutNuxFormViewModel, FBPayExpressCheckoutPaymentRequest, FBPayFormSectionConfiguration;
@protocol FBPayComponentCellResizingDelegate;

@protocol FBPayComponentConforming <NSObject>
@property(nonatomic) __weak id <FBPayComponentCellResizingDelegate> cellResizingDelegate;
@property(retain, nonatomic) FBPayExpressCheckoutErrorHandler *errorHandler;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)updateWithPaymentRequest:(FBPayExpressCheckoutPaymentRequest *)arg1;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)arg1;
- (FBPayFormSectionConfiguration *)formConfigurationForNUX:(FBPayExpressCheckoutNuxFormViewModel *)arg1;
- (FBPayComponentBaseCell *)componentCellForPUX;
- (long long)componentType;

@optional
- (FBPayExpressCheckoutBaseViewController *)provideComponentSelectionOrFormViewController;
@end
