//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGExploreNetworkerReshareHubConfiguration : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_reshareHub_threadId;
}

+ (id)reshareHubWithThreadId:(id)arg1;
+ (id)explore;
- (void).cxx_destruct;
- (void)matchExplore:(CDUnknownBlockType)arg1 reshareHub:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanExplore:(CDUnknownBlockType)arg1 reshareHub:(CDUnknownBlockType)arg2;

@end

