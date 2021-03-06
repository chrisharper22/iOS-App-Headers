//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IGShoppingProductItemAnalyticsContext : NSObject
{
    _Bool _isCheckoutEnabled;
    long long _productId;
    NSString *_merchantId;
    NSNumber *_productInventory;
    NSNumber *_hasDropsLaunched;
    NSNumber *_dropsLaunchDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *dropsLaunchDate; // @synthesize dropsLaunchDate=_dropsLaunchDate;
@property(readonly, nonatomic) NSNumber *hasDropsLaunched; // @synthesize hasDropsLaunched=_hasDropsLaunched;
@property(readonly, nonatomic) NSNumber *productInventory; // @synthesize productInventory=_productInventory;
@property(readonly, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(readonly, nonatomic) _Bool isCheckoutEnabled; // @synthesize isCheckoutEnabled=_isCheckoutEnabled;
@property(readonly, nonatomic) long long productId; // @synthesize productId=_productId;
- (id)initWithProductId:(long long)arg1 isCheckoutEnabled:(_Bool)arg2 merchantId:(id)arg3 productInventory:(id)arg4 hasDropsLaunched:(id)arg5 dropsLaunchDate:(id)arg6;

@end

