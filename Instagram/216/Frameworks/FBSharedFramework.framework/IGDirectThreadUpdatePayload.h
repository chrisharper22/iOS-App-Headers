//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectThreadOutgoingUpdateAction, NSString;

@interface IGDirectThreadUpdatePayload : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isShhMode;
    NSString *_threadId;
    IGDirectThreadOutgoingUpdateAction *_action;
    NSString *_updateClientContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, copy, nonatomic) NSString *updateClientContext; // @synthesize updateClientContext=_updateClientContext;
@property(readonly, copy, nonatomic) IGDirectThreadOutgoingUpdateAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithThreadId:(id)arg1 action:(id)arg2 updateClientContext:(id)arg3 isShhMode:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end

