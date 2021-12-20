//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedRequestConfig-Protocol.h>

@class NSDictionary, NSNumber, NSString;
@protocol IGCachePolicy;

@interface IGFeedNetworkSourceRequestConfig : NSObject <IGFeedRequestConfig>
{
    NSDictionary *_requestParameters;
    long long _fetchAction;
    unsigned long long _behavior;
    CDStruct_eb671702 _cacheConfiguration;
    NSString *_surface;
    NSString *_sessionId;
    NSNumber *_customTimeoutIntervalSeconds;
    id <IGCachePolicy> _cachePolicy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGCachePolicy> cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (_Bool)isStreamed;
- (id)fetchPath;
- (id)customTimeoutIntervalSeconds;
- (_Bool)shouldCreateRequestOnBackground;
- (id)surface;
- (CDStruct_eb671702)cacheConfiguration;
- (unsigned long long)behavior;
- (long long)fetchAction;
- (id)requestParameters;
- (id)sessionId;
- (void)setCustomTimeoutIntervalSeconds:(id)arg1;
- (void)setSurface:(id)arg1;
- (void)setCacheConfig:(CDStruct_eb671702)arg1;
- (id)initWithRequestParameters:(id)arg1 fetchAction:(long long)arg2 behavior:(unsigned long long)arg3 userPk:(id)arg4 sessionId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

