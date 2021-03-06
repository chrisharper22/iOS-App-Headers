//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectNicknameManager, IGDirectRecipientQueryConfig, IGSearchThrottler, IGUser, IGUserSession, IGUserStore;
@protocol IGAPIClient, IGUserFeatureSets;

@interface IGDirectRecipientFetcher : NSObject
{
    IGDirectRecipientQueryConfig *_queryConfig;
    long long _displayNameType;
    id <IGAPIClient> _networker;
    IGUser *_currentUser;
    IGUserStore *_userStore;
    IGDirectNicknameManager *_nicknameManager;
    id <IGUserFeatureSets> _featureSets;
    IGUserSession *_userSession;
    IGSearchThrottler *_contactSearchThrottler;
    IGSearchThrottler *_contentSearchThrottler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSearchThrottler *contentSearchThrottler; // @synthesize contentSearchThrottler=_contentSearchThrottler;
@property(retain, nonatomic) IGSearchThrottler *contactSearchThrottler; // @synthesize contactSearchThrottler=_contactSearchThrottler;
- (_Bool)_isFacebookConnected;
- (void)_handleNetworkResponseForUniversalContentSearch:(id)arg1 searchString:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)_fetchUniversalContentSearchResults:(id)arg1 startOffset:(unsigned long long)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)_handleNetworkResponseForRecipientFetch:(id)arg1 searchString:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)_performRecipientsFetch:(id)arg1 selectedRecipientPks:(id)arg2 serverSectionMaxResults:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)fetchContentSearchResultsForString:(id)arg1 nextPaginationOffset:(unsigned long long)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)fetchRecipientsForString:(id)arg1 selectedRecipientPks:(id)arg2 serverSectionMaxResults:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)initWithQueryConfig:(id)arg1 displayNameType:(long long)arg2 networker:(id)arg3 currentUser:(id)arg4 userStore:(id)arg5 nicknameManager:(id)arg6 featureSets:(id)arg7 userSession:(id)arg8;

@end

