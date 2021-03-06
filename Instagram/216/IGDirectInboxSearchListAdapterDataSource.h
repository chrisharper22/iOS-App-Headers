//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGDirectInboxQPCache, IGDirectRecipientRecentSearchStorage, IGSpinnerLabelViewModel, IGUserSession, NSArray, NSMutableDictionary, NSString;
@protocol IGDirectInboxSearchListAdapterDataSourceDelegate><IGDirectRecipientSectionControllerSelectDelegate><IGDirectRecipientSectionControllerDismissibleDelegate, IGDirectSearchErrorStatesViewControllerDelegate, IGImageTitleSectionControllerDelegate, IGTextViewSectionControllerDelegate;

@interface IGDirectInboxSearchListAdapterDataSource : NSObject <IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    NSString *_moduleName;
    _Bool _searchResultIsLocal;
    _Bool _isExpanded;
    IGSpinnerLabelViewModel *_searchingSpinnerViewModel;
    IGDirectInboxQPCache *_qpCache;
    CDUnknownBlockType _impressionTrackingBlock;
    IGDirectRecipientRecentSearchStorage *_recentSearchStorage;
    _Bool _directSearchIsFailed;
    long long _expandedListSectionType;
    long long _expandedListSearchStatus;
    _Bool _expandedListSearchHasNextPage;
    NSString *_lastQueryString;
    NSMutableDictionary *_searchRecipientsFromPreview;
    _Bool _isFromPreview;
    _Bool _showFooter;
    _Bool _isPrivateSearch;
    NSArray *_sectionPartitioningComponents;
    id <IGDirectInboxSearchListAdapterDataSourceDelegate><IGDirectRecipientSectionControllerSelectDelegate><IGDirectRecipientSectionControllerDismissibleDelegate> _delegate;
    id <IGTextViewSectionControllerDelegate> _footerSectionDelegate;
    NSArray *_recipients;
    NSString *_queryString;
    id <IGImageTitleSectionControllerDelegate> _privateSearchFooterDelegate;
    id <IGDirectSearchErrorStatesViewControllerDelegate> _directSearchErrorDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectSearchErrorStatesViewControllerDelegate> directSearchErrorDelegate; // @synthesize directSearchErrorDelegate=_directSearchErrorDelegate;
@property(nonatomic) __weak id <IGImageTitleSectionControllerDelegate> privateSearchFooterDelegate; // @synthesize privateSearchFooterDelegate=_privateSearchFooterDelegate;
@property(nonatomic) _Bool isPrivateSearch; // @synthesize isPrivateSearch=_isPrivateSearch;
@property(nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) __weak id <IGTextViewSectionControllerDelegate> footerSectionDelegate; // @synthesize footerSectionDelegate=_footerSectionDelegate;
@property(nonatomic) __weak id <IGDirectInboxSearchListAdapterDataSourceDelegate><IGDirectRecipientSectionControllerSelectDelegate><IGDirectRecipientSectionControllerDismissibleDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sectionPartitioningComponents; // @synthesize sectionPartitioningComponents=_sectionPartitioningComponents;
- (void)_didClickSeeAll:(id)arg1;
- (id)_sectionPartitioningComponentForSeeAllButton:(id)arg1;
- (id)previewRecipientsBySectionType:(long long)arg1;
- (void)updateExpandedListStatus:(long long)arg1 expandedListStatus:(long long)arg2 expandedListHasNextPage:(_Bool)arg3;
- (void)updateRecipient:(id)arg1 queryString:(id)arg2 searchResultIsLocal:(_Bool)arg3 isFromPreview:(_Bool)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 moduleName:(id)arg2 qpCache:(id)arg3 impressionTrackingBlock:(CDUnknownBlockType)arg4 isExpanded:(_Bool)arg5 recentSearchStorage:(id)arg6;
- (void)setDirectSearchIsFailed:(_Bool)arg1;
- (void)_setupSearchingSpinnerViewModelIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

