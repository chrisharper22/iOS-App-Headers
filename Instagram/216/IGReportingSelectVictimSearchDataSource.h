//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGSpinnerLabelViewModel, IGUser, IGUserSession, NSArray, NSString;
@protocol IGDirectRecipientSectionControllerSelectDelegate;

@interface IGReportingSelectVictimSearchDataSource : NSObject <IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGUser *_responsibleUser;
    IGSpinnerLabelViewModel *_searchingSpinnerViewModel;
    _Bool _searchResultIsLocal;
    _Bool _shouldIncludeSelf;
    NSArray *_sectionComponents;
    id <IGDirectRecipientSectionControllerSelectDelegate> _delegate;
    NSArray *_recipients;
    NSString *_queryString;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) __weak id <IGDirectRecipientSectionControllerSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sectionComponents; // @synthesize sectionComponents=_sectionComponents;
- (void)_setupSearchingSpinnerViewModelIfNeeded;
- (void)updateRecipient:(id)arg1 queryString:(id)arg2 searchResultIsLocal:(_Bool)arg3 shouldIncludeSelf:(_Bool)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 responsibleUser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
