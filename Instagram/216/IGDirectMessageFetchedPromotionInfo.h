//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectFooterTextPromotionSpec, NSString;

@interface IGDirectMessageFetchedPromotionInfo : NSObject
{
    NSString *_messageId;
    IGDirectFooterTextPromotionSpec *_promotionSpec;
    NSString *_promotionId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(readonly, nonatomic) IGDirectFooterTextPromotionSpec *promotionSpec; // @synthesize promotionSpec=_promotionSpec;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (id)initWithMessageId:(id)arg1 promotionSpec:(id)arg2 promotionId:(id)arg3;

@end

