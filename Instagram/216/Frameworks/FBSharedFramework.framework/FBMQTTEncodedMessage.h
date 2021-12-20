//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface FBMQTTEncodedMessage : NSObject
{
    int _qos;
    NSString *_topic;
    NSData *_payload;
    double _rawReceiveTime;
    NSNumber *_messageID;
}

+ (id)messageWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 rawReceiveTime:(double)arg4;
+ (id)messageWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3;
+ (id)messageWithTopic:(id)arg1 payload:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) double rawReceiveTime; // @synthesize rawReceiveTime=_rawReceiveTime;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int qos; // @synthesize qos=_qos;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)description;
- (id)initWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 rawReceiveTime:(double)arg4;
- (id)initWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3;

@end

