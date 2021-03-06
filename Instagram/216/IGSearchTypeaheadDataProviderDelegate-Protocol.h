//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol IGSearchTypeaheadDataProvider;

@protocol IGSearchTypeaheadDataProviderDelegate <NSObject>
- (NSString *)searchSessionIDForSearchTypeaheadDataProvider:(id <IGSearchTypeaheadDataProvider>)arg1;
- (NSString *)currentSearchTextForSearchTypeaheadDataProvider:(id <IGSearchTypeaheadDataProvider>)arg1;
- (void)searchTypeaheadDataProvider:(id <IGSearchTypeaheadDataProvider>)arg1 didThrottleWithSearchQuery:(NSString *)arg2;
- (void)searchTypeaheadDataProvider:(id <IGSearchTypeaheadDataProvider>)arg1 didBeginFetchWithSearchQuery:(NSString *)arg2;
- (void)searchTypeaheadDataProvider:(id <IGSearchTypeaheadDataProvider>)arg1 didFinishFetchWithSearchQuery:(NSString *)arg2 numItems:(long long)arg3;
- (void)searchTypeaheadDataProvider:(id <IGSearchTypeaheadDataProvider>)arg1 didFinishFetchAfterSearchQueryChanged:(NSString *)arg2 rankToken:(NSString *)arg3 numFetchedResults:(long long)arg4;
- (void)searchTypeaheadDataProviderDidFinishLoading:(id <IGSearchTypeaheadDataProvider>)arg1;
- (void)searchTypeaheadDataProvider:(id <IGSearchTypeaheadDataProvider>)arg1 didFailToLoadSearchQuery:(NSString *)arg2;
- (void)searchTypeaheadDataProviderDidUpdateItems:(id <IGSearchTypeaheadDataProvider>)arg1;
@end

