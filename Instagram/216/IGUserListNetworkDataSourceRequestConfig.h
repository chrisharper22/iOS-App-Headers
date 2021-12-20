//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGUserListNetworkDataSourceRequestConfig : NSObject
{
    _Bool _rankByMutualFollowers;
    _Bool _shouldGenerateRankToken;
    unsigned long long _httpMethod;
    NSString *_fetchPath;
    NSString *_targetID;
    NSString *_forcedUserID;
    NSString *_module;
    NSString *_allUsersKey;
    NSString *_moreUsersAvailableKey;
    NSString *_filters;
}

+ (id)defaultConfigWithFetchPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) _Bool shouldGenerateRankToken; // @synthesize shouldGenerateRankToken=_shouldGenerateRankToken;
@property(readonly, copy, nonatomic) NSString *moreUsersAvailableKey; // @synthesize moreUsersAvailableKey=_moreUsersAvailableKey;
@property(readonly, copy, nonatomic) NSString *allUsersKey; // @synthesize allUsersKey=_allUsersKey;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSString *forcedUserID; // @synthesize forcedUserID=_forcedUserID;
@property(readonly, nonatomic) _Bool rankByMutualFollowers; // @synthesize rankByMutualFollowers=_rankByMutualFollowers;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(readonly, copy, nonatomic) NSString *fetchPath; // @synthesize fetchPath=_fetchPath;
@property(readonly, nonatomic) unsigned long long httpMethod; // @synthesize httpMethod=_httpMethod;
- (id)initWithHTTPMethod:(unsigned long long)arg1 fetchPath:(id)arg2 targetID:(id)arg3 rankByMutualFollowers:(_Bool)arg4 forcedUserID:(id)arg5 module:(id)arg6 allUsersKey:(id)arg7 moreUsersAvailableKey:(id)arg8 shouldGenerateRankToken:(_Bool)arg9 filters:(id)arg10;

@end

