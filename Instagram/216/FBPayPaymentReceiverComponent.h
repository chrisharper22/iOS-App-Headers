//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayComponentConforming-Protocol.h"

@class FBPayComponentInlineCell, FBPayComponentInlineCellViewModel, FBPayExpressCheckoutErrorHandler, FBPayExpressCheckoutLogger, NSString;
@protocol FBPayComponentCellResizingDelegate, FBPayPaymentReceiverComponentDelegate;

@interface FBPayPaymentReceiverComponent : NSObject <FBPayComponentConforming>
{
    FBPayComponentInlineCellViewModel *_inlineCellViewModel;
    FBPayComponentInlineCell *_inlineCell;
    _Bool _isLoading;
    FBPayExpressCheckoutLogger *_logger;
    _Bool _didAlreadyLogInitialLoad;
    id <FBPayComponentCellResizingDelegate> _cellResizingDelegate;
    FBPayExpressCheckoutErrorHandler *_errorHandler;
    id <FBPayPaymentReceiverComponentDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayPaymentReceiverComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBPayExpressCheckoutErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) __weak id <FBPayComponentCellResizingDelegate> cellResizingDelegate; // @synthesize cellResizingDelegate=_cellResizingDelegate;
- (void)_logComponentInitialLoadDidSucceed:(_Bool)arg1;
- (void)_logComponentInit;
- (void)_updateCellWithInlineCellViewModel:(id)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)updateWithPaymentRequest:(id)arg1;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)arg1;
- (id)formConfigurationForNUX:(id)arg1;
- (id)componentCellForPUX;
- (long long)componentType;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

