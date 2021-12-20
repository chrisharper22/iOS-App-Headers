//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface FBPayIAWMessage : FBValueObject <NSCopying, NSCoding>
{
    NSString *_id;
    NSString *_type;
    NSDictionary *_content;
    unsigned long long _timestamp;
    NSString *_sourceMessageId;
    NSDictionary *_error;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *sourceMessageId; // @synthesize sourceMessageId=_sourceMessageId;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithId:(id)arg1 type:(id)arg2 content:(id)arg3 timestamp:(unsigned long long)arg4 sourceMessageId:(id)arg5 error:(id)arg6;

@end

