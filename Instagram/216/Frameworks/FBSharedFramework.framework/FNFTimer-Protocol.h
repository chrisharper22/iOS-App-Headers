//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol FNFTimer <NSObject>
- (_Bool)isPaused;
- (void)pause;
- (void)resume;
- (id)initWithInterval:(unsigned long long)arg1 fireOnce:(_Bool)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 block:(void (^)(void))arg4;
@end
