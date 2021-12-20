//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSSet, NSString;

@interface IGDirectDjangoThreadIdentifier : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSSet *_localThread_userIds;
    NSString *_serverThread_threadId;
}

+ (id)serverThreadWithThreadId:(id)arg1;
+ (id)localThreadWithUserIds:(id)arg1;
- (void).cxx_destruct;
- (void)matchLocalThread:(CDUnknownBlockType)arg1 serverThread:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanLocalThread:(CDUnknownBlockType)arg1 serverThread:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

