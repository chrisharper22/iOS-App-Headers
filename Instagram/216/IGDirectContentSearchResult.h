//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUser, NSArray, NSDate, NSString;

@interface IGDirectContentSearchResult : NSObject
{
    IGUser *_user;
    NSString *_messageId;
    NSString *_message;
    NSString *_threadId;
    NSDate *_timestamp;
    NSArray *_offsets;
    NSArray *_lengths;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *lengths; // @synthesize lengths=_lengths;
@property(readonly, nonatomic) NSArray *offsets; // @synthesize offsets=_offsets;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (id)initWithUser:(id)arg1 messageId:(id)arg2 message:(id)arg3 threadId:(id)arg4 timestamp:(id)arg5 offsets:(id)arg6 lengths:(id)arg7;

@end

