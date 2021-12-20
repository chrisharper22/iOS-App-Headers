//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayComponentConforming-Protocol.h"
#import "FBPayComponentOneTimeCheckoutCellDelegate-Protocol.h"

@class FBPayComponentOneTimeCheckoutCell, FBPayExpressCheckoutContext, FBPayExpressCheckoutErrorHandler, FBPayExpressCheckoutPaymentRequest, FBPayOneTimeCheckoutComponentDataModel, NSString;
@protocol FBPayComponentCellResizingDelegate, FBPayOneTimeCheckoutComponentDelegate;

@interface FBPayOneTimeCheckoutComponent : NSObject <FBPayComponentConforming, FBPayComponentOneTimeCheckoutCellDelegate>
{
    FBPayExpressCheckoutPaymentRequest *_paymentRequest;
    FBPayExpressCheckoutContext *_ecpContext;
    FBPayOneTimeCheckoutComponentDataModel *_dataModel;
    FBPayComponentOneTimeCheckoutCell *_OneTimeCheckoutCell;
    id <FBPayComponentCellResizingDelegate> _cellResizingDelegate;
    FBPayExpressCheckoutErrorHandler *_errorHandler;
    id <FBPayOneTimeCheckoutComponentDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayOneTimeCheckoutComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBPayExpressCheckoutErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) __weak id <FBPayComponentCellResizingDelegate> cellResizingDelegate; // @synthesize cellResizingDelegate=_cellResizingDelegate;
- (void)fbpayOneTimeCheckoutCellExitLabelWasTapped;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)updateWithPaymentRequest:(id)arg1;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)arg1;
- (id)formConfigurationForNUX:(id)arg1;
- (id)componentCellForPUX;
- (long long)componentType;
- (void)_updateCell;
- (id)initWithPaymentRequest:(id)arg1 ecpContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

