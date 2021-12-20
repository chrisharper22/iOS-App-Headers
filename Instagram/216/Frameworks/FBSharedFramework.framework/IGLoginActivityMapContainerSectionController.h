//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/IGLoginActivityMapInfoSectionControllerDelegate-Protocol.h>

@class IGListAdapter, IGLoginActivityMapContainerModel, IGUserSession, NSString;
@protocol IGLoginActivityMapContainerSectionControllerDelegate;

@interface IGLoginActivityMapContainerSectionController : IGListSectionController <IGListAdapterDataSource, IGLoginActivityMapInfoSectionControllerDelegate>
{
    IGLoginActivityMapContainerModel *_viewModel;
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    id <IGLoginActivityMapContainerSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLoginActivityMapContainerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loginActivityMapInfoSectionController:(id)arg1 didDisavowLoginActivityWithLoginId:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct UIEdgeInsets)inset;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithViewModel:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
