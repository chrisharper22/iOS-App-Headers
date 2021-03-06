//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGGraphQLCachePolicy-Protocol.h>

@class NSString;

@interface IGGraphQLTTLCachePolicy : NSObject <IGGraphQLCachePolicy>
{
    unsigned long long _ttlSeconds;
}

@property(readonly, nonatomic) unsigned long long ttlSeconds; // @synthesize ttlSeconds=_ttlSeconds;
- (_Bool)isCacheValidForRequest:(id)arg1 cachedObject:(id)arg2;
- (id)initWithTTLSeconds:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

