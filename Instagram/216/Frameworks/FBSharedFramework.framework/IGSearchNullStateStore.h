//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSearchNullStateFetcher, NSArray, NSDate, NSString;

@interface IGSearchNullStateStore : NSObject
{
    NSDate *_lastSyncTime;
    _Bool _needsUpdate;
    _Bool _nullstateFetchOptimization;
    IGSearchNullStateFetcher *_searchNullStateFetcher;
    NSArray *_suggestions;
    NSArray *_sections;
    NSArray *_placeholderModels;
    NSString *_rankToken;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(readonly, copy, nonatomic) NSArray *placeholderModels; // @synthesize placeholderModels=_placeholderModels;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void)clearCache;
- (_Bool)_isCacheEmpty;
- (_Bool)_isCacheInvalid;
- (void)prefetchSuggestionsIfNeededWithRankToken:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)hideAndRemoveSuggestion:(id)arg1;
- (id)initWithUser:(id)arg1 userStore:(id)arg2 networker:(id)arg3 locationManager:(id)arg4 launcherSet:(id)arg5 searchType:(long long)arg6;

@end

