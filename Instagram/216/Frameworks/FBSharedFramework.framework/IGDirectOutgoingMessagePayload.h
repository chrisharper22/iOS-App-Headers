//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectDjangoThreadIdentifier, IGDirectOutgoingMessageContent, IGDirectOutgoingMessagePrivateReplyPayload, IGDirectOutgoingMessageSendAttribution, NSDate, NSString;

@interface IGDirectOutgoingMessagePayload : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isE2ELoggingSampled;
    _Bool _isShhMode;
    NSString *_clientContext;
    NSString *_offlineThreadingId;
    IGDirectDjangoThreadIdentifier *_threadTarget;
    IGDirectOutgoingMessageContent *_content;
    NSDate *_latestPublishedMessageSentDate;
    NSDate *_userSendDate;
    double _replyTimeMilliseconds;
    IGDirectOutgoingMessageSendAttribution *_sendAttribution;
    IGDirectOutgoingMessagePrivateReplyPayload *_privateReplyPayload;
    NSString *_foregroundSessionId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *foregroundSessionId; // @synthesize foregroundSessionId=_foregroundSessionId;
@property(readonly, copy, nonatomic) IGDirectOutgoingMessagePrivateReplyPayload *privateReplyPayload; // @synthesize privateReplyPayload=_privateReplyPayload;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, copy, nonatomic) IGDirectOutgoingMessageSendAttribution *sendAttribution; // @synthesize sendAttribution=_sendAttribution;
@property(readonly, nonatomic) _Bool isE2ELoggingSampled; // @synthesize isE2ELoggingSampled=_isE2ELoggingSampled;
@property(readonly, nonatomic) double replyTimeMilliseconds; // @synthesize replyTimeMilliseconds=_replyTimeMilliseconds;
@property(readonly, copy, nonatomic) NSDate *userSendDate; // @synthesize userSendDate=_userSendDate;
@property(readonly, copy, nonatomic) NSDate *latestPublishedMessageSentDate; // @synthesize latestPublishedMessageSentDate=_latestPublishedMessageSentDate;
@property(readonly, copy, nonatomic) IGDirectOutgoingMessageContent *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) IGDirectDjangoThreadIdentifier *threadTarget; // @synthesize threadTarget=_threadTarget;
@property(readonly, copy, nonatomic) NSString *offlineThreadingId; // @synthesize offlineThreadingId=_offlineThreadingId;
@property(readonly, copy, nonatomic) NSString *clientContext; // @synthesize clientContext=_clientContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientContext:(id)arg1 offlineThreadingId:(id)arg2 threadTarget:(id)arg3 content:(id)arg4 latestPublishedMessageSentDate:(id)arg5 userSendDate:(id)arg6 replyTimeMilliseconds:(double)arg7 isE2ELoggingSampled:(_Bool)arg8 sendAttribution:(id)arg9 isShhMode:(_Bool)arg10 privateReplyPayload:(id)arg11 foregroundSessionId:(id)arg12;

@end

