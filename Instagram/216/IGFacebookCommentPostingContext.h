//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IGFacebookCommentPostingContext : NSObject
{
    NSNumber *_actionTimestamp;
    NSString *_feedbackId;
    NSString *_idempotenceToken;
    NSString *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *idempotenceToken; // @synthesize idempotenceToken=_idempotenceToken;
@property(readonly, nonatomic) NSString *feedbackId; // @synthesize feedbackId=_feedbackId;
@property(readonly, nonatomic) NSNumber *actionTimestamp; // @synthesize actionTimestamp=_actionTimestamp;
- (id)initWithActionTimestamp:(id)arg1 feedbackId:(id)arg2 idempotenceToken:(id)arg3 message:(id)arg4;

@end
