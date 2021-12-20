//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFTimer-Protocol.h>

@class NSString;
@protocol OS_dispatch_source;

@interface FNFRealTimer : NSObject <FNFTimer>
{
    NSObject<OS_dispatch_source> *_timer;
    _Bool _suspended;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isPaused;
- (void)resume;
- (void)pause;
- (id)initWithInterval:(unsigned long long)arg1 fireOnce:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

