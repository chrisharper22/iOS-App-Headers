//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SRIOConsumerPool : NSObject
{
    unsigned long long _poolSize;
    NSMutableArray *_bufferedConsumers;
}

- (void).cxx_destruct;
- (void)returnConsumer:(id)arg1;
- (id)consumerWithScanner:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(_Bool)arg4 unmaskBytes:(_Bool)arg5;
- (id)init;
- (id)initWithBufferCapacity:(unsigned long long)arg1;

@end

