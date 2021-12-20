//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGBusinessCategoryTypeaheadResultParser, IGBusinessConversionFacebookPageCategoryParser, IGBusinessConversionFacebookPageSuggestedCategoryParser, IGProAccountConversionSuggestedCategoryParser, IGProAccountConversionSuggestedCategoryTypeaheadParser, IGUser;
@protocol IGConcurrentSessionHandling, IGRequestToken, IGSearchThrottlingType;

@interface IGProConversionCategoriesDataSource : NSObject
{
    IGBusinessConversionFacebookPageCategoryParser *_businessCategoryParser;
    IGBusinessConversionFacebookPageSuggestedCategoryParser *_suggestedCategoryParser;
    IGBusinessCategoryTypeaheadResultParser *_typeaheadParser;
    id <IGConcurrentSessionHandling> _concurrentUserSessionHandler;
    id <IGRequestToken> _requestToken;
    id <IGSearchThrottlingType> _searchThrottler;
    IGUser *_actorAccount;
    IGProAccountConversionSuggestedCategoryParser *_proCategoryParser;
    IGProAccountConversionSuggestedCategoryTypeaheadParser *_proCategoryTypeheadParser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGProAccountConversionSuggestedCategoryTypeaheadParser *proCategoryTypeheadParser; // @synthesize proCategoryTypeheadParser=_proCategoryTypeheadParser;
@property(readonly, nonatomic) IGProAccountConversionSuggestedCategoryParser *proCategoryParser; // @synthesize proCategoryParser=_proCategoryParser;
- (void)_handleSendRequestCompletionWithRequestToken:(id)arg1 success:(_Bool)arg2 result:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_sendRequestWithQueryId:(id)arg1 queryParams:(id)arg2 schemaType:(unsigned long long)arg3 parser:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchCategoriesForVerticalID:(long long)arg1 query:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchSubCategoriesBySuperCategoryId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchCategoryNameSuggestionWithQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSuggestedPageCategoriesByPageName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMergedProCategoriesSuggestionWithQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSuggestedMergedProCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithActorAccount:(id)arg1 concurrentUserSessionHandler:(id)arg2;

@end

