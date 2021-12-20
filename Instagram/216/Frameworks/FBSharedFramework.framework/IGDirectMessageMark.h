//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectMessageMarkType, NSString;

@interface IGDirectMessageMark : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isE2ELoggingSampled;
    _Bool _isShhMode;
    NSString *_clientId;
    NSString *_threadId;
    NSString *_messageId;
    IGDirectMessageMarkType *_type;
    NSString *_originalMessageClientContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, copy, nonatomic) NSString *originalMessageClientContext; // @synthesize originalMessageClientContext=_originalMessageClientContext;
@property(readonly, nonatomic) _Bool isE2ELoggingSampled; // @synthesize isE2ELoggingSampled=_isE2ELoggingSampled;
@property(readonly, copy, nonatomic) IGDirectMessageMarkType *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientId:(id)arg1 threadId:(id)arg2 messageId:(id)arg3 type:(id)arg4 isE2ELoggingSampled:(_Bool)arg5 originalMessageClientContext:(id)arg6 isShhMode:(_Bool)arg7;

@end
