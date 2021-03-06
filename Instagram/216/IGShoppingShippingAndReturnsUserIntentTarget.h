//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGShoppingShippingAndReturnsUserIntentTarget : NSObject <FBIntentTarget>
{
    NSString *_title;
    NSString *_productId;
    NSString *_merchantId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 productId:(id)arg2 merchantId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

