//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface ShowreelLoggingAdInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_adId;
    NSString *_trackingId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (id)initWithAdId:(id)arg1 trackingId:(id)arg2;

@end
