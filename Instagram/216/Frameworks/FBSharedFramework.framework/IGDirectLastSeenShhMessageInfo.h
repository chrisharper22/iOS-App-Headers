//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface IGDirectLastSeenShhMessageInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_messageId;
    NSDate *_messageServerTimestamp;
    NSDate *_seenAtTimestamp;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *seenAtTimestamp; // @synthesize seenAtTimestamp=_seenAtTimestamp;
@property(readonly, copy, nonatomic) NSDate *messageServerTimestamp; // @synthesize messageServerTimestamp=_messageServerTimestamp;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMessageId:(id)arg1 messageServerTimestamp:(id)arg2 seenAtTimestamp:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

