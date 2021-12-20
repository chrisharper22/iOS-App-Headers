//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAutocompleteContainerViewDelegate-Protocol.h"
#import "IGSearchNetworkDataProviderDelegate-Protocol.h"
#import "NSCopying-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGAutocompleteContainerView, IGAutocompleteLocalDataSource, IGListAdapter, IGSearchAnalyticsLogger, IGSearchNetworkDataSource, IGSearchSession, IGUserSession, NSString, UIResponder, UIView, UIViewController;
@protocol IGAutocompleteControllerDelegate, IGAutocompleteControllerTextInput, IGAutocompleteDataSource;

@interface IGAutocompleteController : NSObject <UICollectionViewDelegate, IGSearchNetworkDataProviderDelegate, IGAutocompleteContainerViewDelegate, NSCopying>
{
    IGListAdapter *_listAdapter;
    IGAutocompleteContainerView *_containerView;
    UIView *_collectionViewTopInsetView;
    long long _searchEntrypoint;
    UIViewController *_presentingViewController;
    id <IGAutocompleteDataSource> _directSuggestionDataSource;
    long long _searchNetworkAttribution;
    IGSearchNetworkDataSource *_hashtagsRemoteDataSource;
    IGSearchNetworkDataSource *_usersRemoteDataSource;
    IGSearchAnalyticsLogger *_userSearchLogger;
    IGSearchAnalyticsLogger *_hashtagSearchLogger;
    IGSearchSession *_userSearchSession;
    IGSearchSession *_hashtagSearchSession;
    _Bool _searchLoggingEnabled;
    _Bool _committingText;
    _Bool _useRemoteDataSources;
    id <IGAutocompleteControllerDelegate> _delegate;
    UIResponder<IGAutocompleteControllerTextInput> *_textInput;
    IGAutocompleteLocalDataSource *_dataSource;
    NSString *_analyticsModule;
    NSString *_searchText;
    NSString *_lastResponseRankToken;
    IGUserSession *_userSession;
    NSString *_currentAutocompletePrefix;
    NSString *_analyticsSessionID;
    long long _currentResultType;
    struct _NSRange _currentAutocompleteRange;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentResultType; // @synthesize currentResultType=_currentResultType;
@property(retain, nonatomic) NSString *analyticsSessionID; // @synthesize analyticsSessionID=_analyticsSessionID;
@property(copy, nonatomic) NSString *currentAutocompletePrefix; // @synthesize currentAutocompletePrefix=_currentAutocompletePrefix;
@property(nonatomic) struct _NSRange currentAutocompleteRange; // @synthesize currentAutocompleteRange=_currentAutocompleteRange;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *lastResponseRankToken; // @synthesize lastResponseRankToken=_lastResponseRankToken;
@property(readonly, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(nonatomic) _Bool useRemoteDataSources; // @synthesize useRemoteDataSources=_useRemoteDataSources;
@property(nonatomic, getter=isCommittingText) _Bool committingText; // @synthesize committingText=_committingText;
@property(readonly, nonatomic) IGSearchNetworkDataSource *usersRemoteDataSource; // @synthesize usersRemoteDataSource=_usersRemoteDataSource;
@property(readonly, nonatomic) IGSearchNetworkDataSource *hashtagsRemoteDataSource; // @synthesize hashtagsRemoteDataSource=_hashtagsRemoteDataSource;
@property(readonly, nonatomic) IGAutocompleteLocalDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIResponder<IGAutocompleteControllerTextInput> *textInput; // @synthesize textInput=_textInput;
@property(nonatomic) __weak id <IGAutocompleteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)networkDataSourceDidThrottleNetworkRequest:(id)arg1 searchText:(id)arg2;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchTextAfterSearchQueryChanged:(id)arg2 results:(id)arg3 rankToken:(id)arg4;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchText:(id)arg2 resultsResponse:(id)arg3 isFromPagination:(_Bool)arg4 clearClientCache:(_Bool)arg5;
- (void)networkDataSource:(id)arg1 didFailForSearchText:(id)arg2;
- (void)networkDataSource:(id)arg1 didBeginFetchForSearchText:(id)arg2;
- (void)networkDataSource:(id)arg1 cachedResultsForSearchText:(id)arg2 resultsResponse:(id)arg3 serverResultsLoaded:(_Bool)arg4;
- (void)_updateTextInputWithAutocompleteText:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_setResultsAndReload:(id)arg1;
- (void)_rejectAutoCorrect;
- (void)_resetResultsTableFilter;
- (void)_reloadResultsTable;
- (_Bool)_resultsTableVisible;
- (void)_setCollectionViewHidden:(_Bool)arg1;
- (void)_hideResultsTable;
- (void)_showResultsTable;
- (id)_findMatchingUserInString:(id)arg1;
- (id)_userRegex;
- (id)_hashtagRegex;
- (void)_logSearchSessionIfNeccessaryWithQuery:(id)arg1 type:(long long)arg2;
- (void)setCollectionViewFrame:(struct CGRect)arg1 withTopInset:(double)arg2;
- (void)hideAndResetResults;
- (_Bool)stringQualifies:(id)arg1;
- (void)displayAutocompleteOptionsForString:(id)arg1;
- (void)textInputDidChange;
- (void)addCommentUsersForComments:(id)arg1;
- (void)setMedia:(id)arg1;
- (id)containerView;
- (void)setAutocompleteContentInsets:(struct UIEdgeInsets)arg1;
- (id)remoteDataSourceDelegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 searchEntrypoint:(long long)arg3 directSuggestionDataSource:(id)arg4 analyticsModule:(id)arg5 searchNetworkAttribution:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
