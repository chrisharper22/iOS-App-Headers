//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IGBloksStickerFetcherCacheResult : NSObject
{
    NSDate *_expiration;
    NSString *_value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
- (id)initWithExpiration:(id)arg1 value:(id)arg2;

@end
