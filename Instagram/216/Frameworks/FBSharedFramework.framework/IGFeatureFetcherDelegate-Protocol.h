//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGFeatureFetcher, NSArray, NSDictionary;

@protocol IGFeatureFetcherDelegate <NSObject>
- (CDStruct_6db0658e)featureFetcher:(IGFeatureFetcher *)arg1 features:(NSArray *)arg2 resultForIncrementalPayload:(NSDictionary *)arg3;
- (long long)featureFetcher:(IGFeatureFetcher *)arg1 resultForPayload:(NSDictionary *)arg2;
@end
