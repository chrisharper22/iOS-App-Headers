//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectBottomSheetComposerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPartialModalSheetManualDismissDelegate-Protocol.h"

@class IGDirectBottomSheetComposerView, IGDirectThreadService, IGKeyboardObserver, IGListAdapter, IGPartialModalSheetViewController, IGPresenceState, IGUser, IGUserSession, NSString, UICollectionView, UIView;
@protocol IGDirectBottomSheetDataSource;

@interface IGDirectBottomSheetViewController : IGViewController <IGListAdapterDataSource, IGDirectBottomSheetComposerDelegate, IGPartialModalSheetManualDismissDelegate, IGGestureHandler>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    UIView *_avatarView;
    id <IGDirectBottomSheetDataSource> _dataSource;
    IGUser *_user;
    IGPresenceState *_presenceState;
    IGUserSession *_userSession;
    IGDirectBottomSheetComposerView *_composerView;
    IGDirectThreadService *_threadService;
    IGPartialModalSheetViewController *_partialSheetController;
    IGKeyboardObserver *_keyboardObserver;
}

- (void).cxx_destruct;
- (void)showWithLauncherSetProvider:(id)arg1;
- (id)_sendAttribution;
- (void)_sendMessageContent:(id)arg1 threadKey:(id)arg2;
- (void)_sendMessageWithText:(id)arg1;
- (void)partialModalSheetManualDismiss;
- (void)composerViewDidInvalidateSize:(id)arg1 needsImmediateLayout:(_Bool)arg2;
- (void)composerView:(id)arg1 didTapSendMessage:(id)arg2 attachment:(id)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (void)_layoutAvatarView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 user:(id)arg2 presenceState:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

