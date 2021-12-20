//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol IGShoppingBrandsFetcherAnnouncer;

@interface IGShoppingBrandsFetcher : NSObject
{
    id <IGShoppingBrandsFetcherAnnouncer> _announcer;
    IGUserSession *_userSession;
    NSDictionary *_brandsSectionTypeToNetworkerMap;
    NSMutableDictionary *_brandsSectionTypeToDataModelMap;
    NSArray *_sectionTypes;
    NSString *_initialLoadSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *initialLoadSource; // @synthesize initialLoadSource=_initialLoadSource;
@property(readonly, nonatomic) NSArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
- (void)_networkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_networkFetchStateUpdated:(id)arg1;
- (id)_networkerForSectionType:(long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)fetchStateForSectionType:(long long)arg1;
@property(readonly, nonatomic) _Bool hasLoadedOnce;
@property(readonly, nonatomic) _Bool isReloading;
@property(readonly, nonatomic) _Bool shouldShowLoadingStateView;
- (id)sectionDataModelForSectionType:(long long)arg1;
- (void)fetchAllSectionsWithAction:(long long)arg1 isPullToRefresh:(_Bool)arg2;
- (void)fetchMoreBrandsForSectionType:(long long)arg1;
- (id)initWithUserSession:(id)arg1 sectionTypes:(id)arg2;

@end
