//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSError;

@interface IGDirectMutationRequestProcessorExecutionResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSError *_failure_error;
}

+ (id)success;
+ (id)failureWithError:(id)arg1;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

