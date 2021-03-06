//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSearchTypeaheadDataProvider-Protocol.h"

@class IGBrandedContentAdAccessRequestManager, IGUserSession, NSSet, NSString;
@protocol IGSearchTypeaheadDataProviderDelegate;

@interface IGAdPartnersSearchTypeaheadLocalDataSource : NSObject <IGSearchTypeaheadDataProvider>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGBrandedContentAdAccessRequestManager *_adAccessRequestManager;
    NSSet *_filteredAccounts;
    long long _searchResultState;
    id <IGSearchTypeaheadDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSearchTypeaheadDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long searchResultState; // @synthesize searchResultState=_searchResultState;
@property(readonly, copy, nonatomic) NSString *rankToken;
- (void)expandSeeMoreSection;
- (_Bool)isLoading;
- (void)loadResultsForSearchText:(id)arg1;
- (void)showHiddenResults;
- (void)loadMoreResultsForSearchText:(id)arg1;
- (void)invalidateCache;
- (id)moreResultsHeader;
- (id)hcmModel;
- (id)mediaGrid;
- (id)models;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

