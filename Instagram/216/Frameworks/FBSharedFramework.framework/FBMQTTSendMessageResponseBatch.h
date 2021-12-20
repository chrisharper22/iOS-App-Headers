//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface FBMQTTSendMessageResponseBatch : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_batchId;
    NSString *__thrift_fbTraceMeta;
    NSMutableArray *__thrift_responses;
    _Bool __thrift_supported;
    _Bool __thrift_batchId_set;
    _Bool __thrift_fbTraceMeta_set;
    _Bool __thrift_responses_set;
    _Bool __thrift_supported_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSupported;
- (_Bool)supportedIsSet;
@property(nonatomic) _Bool supported;
- (void)unsetResponses;
- (_Bool)responsesIsSet;
@property(retain, nonatomic) NSMutableArray *responses;
- (void)unsetFbTraceMeta;
- (_Bool)fbTraceMetaIsSet;
@property(retain, nonatomic) NSString *fbTraceMeta;
- (void)unsetBatchId;
- (_Bool)batchIdIsSet;
@property(nonatomic) long long batchId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBatchId:(long long)arg1 fbTraceMeta:(id)arg2 responses:(id)arg3 supported:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

