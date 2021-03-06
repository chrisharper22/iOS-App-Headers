//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface FBPayComponentDataFetchCacheConfig : FBValueObject <NSCopying, NSCoding>
{
    unsigned long long _cacheTtlSecondsDefault;
    unsigned long long _freshCacheTtlSecondsDefault;
    unsigned long long _cacheTtlSecondsCredentials;
    unsigned long long _freshCacheTtlSecondsCredentials;
}

@property(readonly, nonatomic) unsigned long long freshCacheTtlSecondsCredentials; // @synthesize freshCacheTtlSecondsCredentials=_freshCacheTtlSecondsCredentials;
@property(readonly, nonatomic) unsigned long long cacheTtlSecondsCredentials; // @synthesize cacheTtlSecondsCredentials=_cacheTtlSecondsCredentials;
@property(readonly, nonatomic) unsigned long long freshCacheTtlSecondsDefault; // @synthesize freshCacheTtlSecondsDefault=_freshCacheTtlSecondsDefault;
@property(readonly, nonatomic) unsigned long long cacheTtlSecondsDefault; // @synthesize cacheTtlSecondsDefault=_cacheTtlSecondsDefault;
- (id)initWithCacheTtlSecondsDefault:(unsigned long long)arg1 freshCacheTtlSecondsDefault:(unsigned long long)arg2 cacheTtlSecondsCredentials:(unsigned long long)arg3 freshCacheTtlSecondsCredentials:(unsigned long long)arg4;

@end

