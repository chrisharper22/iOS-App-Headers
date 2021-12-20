//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface FBPayExpressCheckoutPaymentContainer : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isLive;
    NSString *_containerId;
    NSString *_containerExternalId;
    NSString *_containerData;
    NSString *_descriptionText;
    NSString *_orderId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *containerData; // @synthesize containerData=_containerData;
@property(readonly, copy, nonatomic) NSString *containerExternalId; // @synthesize containerExternalId=_containerExternalId;
@property(readonly, copy, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (id)initWithContainerId:(id)arg1 containerExternalId:(id)arg2 containerData:(id)arg3 descriptionText:(id)arg4 isLive:(_Bool)arg5 orderId:(id)arg6;

@end
