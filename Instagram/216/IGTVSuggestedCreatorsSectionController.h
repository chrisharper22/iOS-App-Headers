//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGTVCreatorUserSectionControllerDelegate-Protocol.h"

@class IGListAdapter, IGTVDestinationLoggingContext, IGTVSuggestedCreatorsSectionModel, IGUserSession, NSString;
@protocol IGTVSuggestedCreatorsSectionControllerDelegate;

@interface IGTVSuggestedCreatorsSectionController : IGListGenericSectionController <IGListAdapterDataSource, IGListDisplayDelegate, IGTVCreatorUserSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGTVDestinationLoggingContext *_loggingContext;
    IGListAdapter *_listAdapter;
    IGTVSuggestedCreatorsSectionModel *_viewModel;
    id <IGTVSuggestedCreatorsSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)creatorUserSectionController:(id)arg1 didDismissUser:(id)arg2;
- (void)creatorUserSectionController:(id)arg1 didTapProfileImageOrNameForUser:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)displayDelegate;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

