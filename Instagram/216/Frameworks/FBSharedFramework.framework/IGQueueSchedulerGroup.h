//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGGroup-Protocol.h>

@class NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface IGQueueSchedulerGroup : NSObject <IGGroup>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
- (id)queue;
- (id)schedule:(CDUnknownBlockType)arg1;
- (void)notify:(CDUnknownBlockType)arg1;
- (void)leave;
- (void)enter;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
