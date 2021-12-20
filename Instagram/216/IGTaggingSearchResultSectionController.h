//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGSearchCollectionViewCellWithFBResultDelegate-Protocol.h"

@class IGSearchResultViewModel, IGUserSession, NSString;
@protocol IGTaggingSearchResultSectionControllerDelegate;

@interface IGTaggingSearchResultSectionController : IGListSectionController <IGSearchCollectionViewCellWithFBResultDelegate>
{
    IGSearchResultViewModel *_viewModel;
    id <IGTaggingSearchResultSectionControllerDelegate> _delegate;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)didInviteFBUser;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

