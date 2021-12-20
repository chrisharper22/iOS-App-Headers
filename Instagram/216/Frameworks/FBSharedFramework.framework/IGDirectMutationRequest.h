//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectMutationData, NSDate, NSString;

@interface IGDirectMutationRequest : FBValueObject <NSCopying, NSCoding>
{
    NSString *_mutationId;
    IGDirectMutationData *_mutationData;
    NSDate *_requestCreationTime;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *requestCreationTime; // @synthesize requestCreationTime=_requestCreationTime;
@property(readonly, copy, nonatomic) IGDirectMutationData *mutationData; // @synthesize mutationData=_mutationData;
@property(readonly, copy, nonatomic) NSString *mutationId; // @synthesize mutationId=_mutationId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMutationId:(id)arg1 mutationData:(id)arg2 requestCreationTime:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

