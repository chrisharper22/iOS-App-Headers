//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IGObservable : NSObject
{
    long long _emitterBehavior;
    NSMutableArray *_listenerBlocks;
    id _value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)mutable;
- (id)always;
- (id)latest;
- (void)bind:(CDUnknownBlockType)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithEmitterBehavior:(long long)arg1 value:(id)arg2;
- (id)initWithEmitterBehavior:(long long)arg1;

@end
