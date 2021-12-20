//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGVideoCallKey, NSDictionary, NSString;

@interface IGVideoCallJoinIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _isInterop;
    _Bool _isE2eeMandated;
    long long _trigger;
    IGVideoCallKey *_key;
    long long _type;
    NSString *_threadId;
    NSString *_threadDisplayName;
    NSDictionary *_productParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *productParams; // @synthesize productParams=_productParams;
@property(readonly, nonatomic) _Bool isE2eeMandated; // @synthesize isE2eeMandated=_isE2eeMandated;
@property(readonly, nonatomic) _Bool isInterop; // @synthesize isInterop=_isInterop;
@property(readonly, nonatomic) NSString *threadDisplayName; // @synthesize threadDisplayName=_threadDisplayName;
@property(readonly, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) IGVideoCallKey *key; // @synthesize key=_key;
@property(readonly, nonatomic) long long trigger; // @synthesize trigger=_trigger;
- (id)initWithTrigger:(long long)arg1 key:(id)arg2 type:(long long)arg3 threadId:(id)arg4 threadDisplayName:(id)arg5 isInterop:(_Bool)arg6 isE2eeMandated:(_Bool)arg7 productParams:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

