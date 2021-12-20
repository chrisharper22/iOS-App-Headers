//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSearchCache, IGSearchCacheEntry, IGUserSession, NSTimer;
@protocol IGAutocompleteNetworkDataSourceDelegate, IGRequestToken, IGSearchLocalSuggesting, IGSearchRequestBuilding, IGSearchResponseParsing, IGSearchThrottlingType;

@interface IGAutocompleteNetworkDataSource : NSObject
{
    id <IGSearchThrottlingType> _searchThrottler;
    _Bool _hasMore;
    _Bool _loadMore;
    id <IGAutocompleteNetworkDataSourceDelegate> _delegate;
    unsigned long long _maxLocalSuggestionCount;
    unsigned long long _maxTotalSuggestionCount;
    unsigned long long _maxServerResultCount;
    id <IGSearchLocalSuggesting> _localSuggestionsProvider;
    id <IGSearchRequestBuilding> _requestBuilder;
    id <IGSearchResponseParsing> _responseParser;
    IGUserSession *_userSession;
    IGSearchCacheEntry *_currentEntry;
    IGSearchCache *_queryCache;
    double _lastServerRequestTime;
    id <IGRequestToken> _currentRequestToken;
    NSTimer *_serverSearchTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loadMore; // @synthesize loadMore=_loadMore;
@property(retain, nonatomic) NSTimer *serverSearchTimer; // @synthesize serverSearchTimer=_serverSearchTimer;
@property(retain, nonatomic) id <IGRequestToken> currentRequestToken; // @synthesize currentRequestToken=_currentRequestToken;
@property(nonatomic) double lastServerRequestTime; // @synthesize lastServerRequestTime=_lastServerRequestTime;
@property(retain, nonatomic) IGSearchCache *queryCache; // @synthesize queryCache=_queryCache;
@property(retain, nonatomic) IGSearchCacheEntry *currentEntry; // @synthesize currentEntry=_currentEntry;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <IGSearchResponseParsing> responseParser; // @synthesize responseParser=_responseParser;
@property(readonly, nonatomic) id <IGSearchRequestBuilding> requestBuilder; // @synthesize requestBuilder=_requestBuilder;
@property(readonly, nonatomic) id <IGSearchLocalSuggesting> localSuggestionsProvider; // @synthesize localSuggestionsProvider=_localSuggestionsProvider;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) unsigned long long maxServerResultCount; // @synthesize maxServerResultCount=_maxServerResultCount;
@property(nonatomic) unsigned long long maxTotalSuggestionCount; // @synthesize maxTotalSuggestionCount=_maxTotalSuggestionCount;
@property(nonatomic) unsigned long long maxLocalSuggestionCount; // @synthesize maxLocalSuggestionCount=_maxLocalSuggestionCount;
@property(nonatomic) __weak id <IGAutocompleteNetworkDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_canonicalQueryString:(id)arg1;
- (void)_sendServerRequestIfNeeded:(id)arg1;
- (id)_parseServerResponse:(id)arg1;
- (id)_requestBuilderForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3;
- (id)_localSuggestionsForQueryString:(id)arg1 numRequested:(long long)arg2;
- (long long)numberOfLocalSuggestions;
- (_Bool)isLocalSuggestion:(id)arg1;
- (void)reset;
- (void)setQueryString:(id)arg1 withRankToken:(id)arg2 additionalParams:(id)arg3 analyticsInfo:(id)arg4 loadMore:(_Bool)arg5;
- (id)initWithLocalSuggestionsProvider:(id)arg1 requestBuilder:(id)arg2 responseParser:(id)arg3 userSession:(id)arg4;

@end
