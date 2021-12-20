//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@interface IGDirectMutationRequestDropReason : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    unsigned long long _completed_completionReason;
}

+ (id)unretryable;
+ (id)unknown;
+ (id)timedOut;
+ (id)deduplicated;
+ (id)completedWithCompletionReason:(unsigned long long)arg1;
+ (id)cancelled;
- (void)matchUnknown:(CDUnknownBlockType)arg1 completed:(CDUnknownBlockType)arg2 timedOut:(CDUnknownBlockType)arg3 cancelled:(CDUnknownBlockType)arg4 deduplicated:(CDUnknownBlockType)arg5 unretryable:(CDUnknownBlockType)arg6;
- (_Bool)matchBooleanUnknown:(CDUnknownBlockType)arg1 completed:(CDUnknownBlockType)arg2 timedOut:(CDUnknownBlockType)arg3 cancelled:(CDUnknownBlockType)arg4 deduplicated:(CDUnknownBlockType)arg5 unretryable:(CDUnknownBlockType)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
