//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGTextViewSectionControllerDelegate-Protocol.h"

@class IGListAdapter, IGShoppingUntaggableReason, IGUserSession, NSString, UICollectionView;

@interface IGShoppingUntaggableReasonViewController : IGViewController <IGListAdapterDataSource, IGTextViewSectionControllerDelegate, IGGestureHandler>
{
    IGShoppingUntaggableReason *_untaggableReason;
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)textViewSectionController:(id)arg1 didTapOnNonLinkedString:(id)arg2 touchEvent:(unsigned long long)arg3;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_updatePreferredContentSize;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUntaggableReason:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

