//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface FBMQTTPresenceUpdateBatch : TBaseStruct <TBase, NSCoding>
{
    _Bool __thrift_isIncrementalUpdate;
    NSMutableArray *__thrift_updates;
    NSString *__thrift_requestID;
    _Bool __thrift_isIncrementalUpdate_set;
    _Bool __thrift_updates_set;
    _Bool __thrift_requestID_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetRequestID;
- (_Bool)requestIDIsSet;
@property(retain, nonatomic) NSString *requestID;
- (void)unsetUpdates;
- (_Bool)updatesIsSet;
@property(retain, nonatomic) NSMutableArray *updates;
- (void)unsetIsIncrementalUpdate;
- (_Bool)isIncrementalUpdateIsSet;
@property(nonatomic) _Bool isIncrementalUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsIncrementalUpdate:(_Bool)arg1 updates:(id)arg2 requestID:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
