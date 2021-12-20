//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGDirectActionChainingController, IGDirectActionChainingViewModel, IGImageView, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGDirectActionChainingModalViewController : IGViewController <IGListAdapterDataSource, IGCoreTextLinkHandler>
{
    IGUserSession *_userSession;
    IGDirectActionChainingController *_actionChainingController;
    IGDirectActionChainingViewModel *_viewModel;
    IGImageView *_icon;
    IGCoreTextView *_titleTextView;
    IGCoreTextView *_subtitleTextView;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGBottomButtonsView *_bottomButtonsView;
}

- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_setUpButtons;
- (void)_setupCollectionButtons;
- (void)_configureWithActionChainingViewModel:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 actionChainController:(id)arg2 performanceListener:(id)arg3 actionChainingViewModel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
