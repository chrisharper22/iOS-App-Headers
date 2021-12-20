//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGKeywordsBootstrapStore;
@protocol IGAPIClient;

@interface IGKeywordsBootstrapService : NSObject
{
    IGKeywordsBootstrapStore *_store;
    id <IGAPIClient> _networker;
    _Bool _rankKeywordsByScore;
}

- (void).cxx_destruct;
- (id)findPrefixAndExactMatches:(id)arg1 limit:(unsigned long long)arg2;
- (id)findExactMatch:(id)arg1;
- (void)refetchIfNeededWithUserSession:(id)arg1;
- (id)initWithStore:(id)arg1 networker:(id)arg2;

@end

