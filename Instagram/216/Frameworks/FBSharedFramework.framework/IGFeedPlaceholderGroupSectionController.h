//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>

@class IGFeedPlaceholderGroupViewModel, IGListAdapter, NSString;

@interface IGFeedPlaceholderGroupSectionController : IGListSectionController <IGListAdapterDataSource>
{
    NSString *_analyticsModule;
    IGFeedPlaceholderGroupViewModel *_viewModel;
    IGListAdapter *_listAdapter;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithAnalyticsModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
