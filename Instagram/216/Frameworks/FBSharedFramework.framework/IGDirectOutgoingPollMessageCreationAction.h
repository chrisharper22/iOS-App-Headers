//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IGDirectOutgoingPollMessageCreationAction : FBValueObject <NSCopying, NSCoding>
{
    NSString *_question;
    NSArray *_options;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *question; // @synthesize question=_question;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithQuestion:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

