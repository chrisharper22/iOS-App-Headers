//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGShoppingProductPivotsChainingFeedUserFlowLogger : NSObject
{
    unsigned long long _userFlowInstanceId;
}

- (void)_endCancel;
- (void)_endSuccess;
- (void)_markPoint:(id)arg1;
- (void)userIgnoredExplorePivotsFlow;
- (void)userDismissedExplorePivotsFlow;
- (void)userTappedProductCard;
- (void)userTappedViewShop;
- (void)userTappedUnsaveProduct;
- (void)userTappedSaveProduct;
- (void)startFlowIfNotOngoingWithPivotsType:(id)arg1;
- (id)init;

@end

