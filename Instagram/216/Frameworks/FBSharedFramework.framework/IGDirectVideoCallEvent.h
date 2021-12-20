//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, NSArray, NSString;

@interface IGDirectVideoCallEvent : IGValueObject <IGDirectUIMessage, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (_Bool)didJoin;
@property(readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata;
@property(readonly, nonatomic) IGDirectForwardMetadata *forwardMetadata;
@property(readonly, nonatomic) NSArray *reactions;
@property(readonly, nonatomic) IGDirectEmbeddedPublishedMessage *quotedMessage;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isShhMode;
@property(readonly) Class superclass;

@end

