//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGContextualFeedModuleType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_explicit_analyticsModule;
}

+ (id)explicitWithAnalyticsModule:(id)arg1;
+ (id)entryPointDefined;
- (void).cxx_destruct;
- (void)matchEntryPointDefined:(CDUnknownBlockType)arg1 explicit:(CDUnknownBlockType)arg2;

@end

