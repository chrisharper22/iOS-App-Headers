//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGCodeUsageConfig : NSObject
{
    _Bool _enabled;
    int _coinFlipRate;
}

@property(readonly, nonatomic) int coinFlipRate; // @synthesize coinFlipRate=_coinFlipRate;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithEnabled:(_Bool)arg1 coinFlipRate:(int)arg2;

@end

