//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSArray, NSString;

@interface THTopThreadSpecifier : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSString *_threadId;
    NSArray *_participantIds;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)threadId:(id)arg1;
+ (id)participantIds:(id)arg1;
- (void).cxx_destruct;
- (void)matchThreadId:(CDUnknownBlockType)arg1 participantIds:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanThreadId:(CDUnknownBlockType)arg1 participantIds:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

