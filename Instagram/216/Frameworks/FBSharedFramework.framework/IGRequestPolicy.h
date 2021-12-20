//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;
@protocol IGCachePolicy, IGRequestMergingObserver;

@interface IGRequestPolicy : NSObject <NSCopying>
{
    double _timeoutInterval;
    unsigned long long _requestType;
    unsigned long long _behavior;
    unsigned long long _privilege;
    unsigned long long _retryPolicy;
    id <IGCachePolicy> _cachePolicy;
    NSString *_surface;
    NSString *_mediaId;
    NSString *_offProcessKey;
    NSString *_requestMergeIdentifier;
    id <IGRequestMergingObserver> _mergeObserver;
}

+ (id)defaultPolicy;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGRequestMergingObserver> mergeObserver; // @synthesize mergeObserver=_mergeObserver;
@property(readonly, nonatomic) NSString *requestMergeIdentifier; // @synthesize requestMergeIdentifier=_requestMergeIdentifier;
@property(readonly, nonatomic) NSString *offProcessKey; // @synthesize offProcessKey=_offProcessKey;
@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(readonly, nonatomic) id <IGCachePolicy> cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) unsigned long long retryPolicy; // @synthesize retryPolicy=_retryPolicy;
@property(readonly, nonatomic) unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimeoutInterval:(double)arg1 requestType:(unsigned long long)arg2 behavior:(unsigned long long)arg3 retryPolicy:(unsigned long long)arg4 privilege:(unsigned long long)arg5 cachePolicy:(id)arg6 offProcessKey:(id)arg7 surface:(id)arg8 mediaId:(id)arg9 requestMergeIdentifier:(id)arg10 mergeObserver:(id)arg11;

@end

