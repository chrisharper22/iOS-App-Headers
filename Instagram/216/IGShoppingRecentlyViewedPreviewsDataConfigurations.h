//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingRecentlyViewedProductTrackingService, NSString;

@interface IGShoppingRecentlyViewedPreviewsDataConfigurations : NSObject
{
    IGShoppingRecentlyViewedProductTrackingService *_productTrackingService;
    NSString *_merchantPk;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *merchantPk; // @synthesize merchantPk=_merchantPk;
@property(readonly, nonatomic) IGShoppingRecentlyViewedProductTrackingService *productTrackingService; // @synthesize productTrackingService=_productTrackingService;
- (id)initWithProductTrackingService:(id)arg1 merchantPk:(id)arg2;

@end

