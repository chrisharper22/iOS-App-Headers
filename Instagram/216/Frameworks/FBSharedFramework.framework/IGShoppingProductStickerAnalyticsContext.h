//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGShoppingProductStickerAnalyticsContext : NSObject
{
    NSString *_productId;
    NSString *_stickerId;
    NSString *_stickerType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *stickerType; // @synthesize stickerType=_stickerType;
@property(readonly, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (id)initWithProductId:(id)arg1 stickerId:(id)arg2 stickerType:(id)arg3;

@end

