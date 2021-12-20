//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectThreadThemePickerSectionControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGDirectThreadKey, IGDirectThreadThemeMetadata, IGDirectThreadThemeOverridesManager, IGListAdapter, IGUserSession, NSString, UICollectionView;
@protocol IGDirectOutgoingUpdateSending;

@interface IGDirectThreadThemePickerViewController : IGViewController <IGListAdapterDataSource, IGDirectThreadThemePickerSectionControllerDelegate, IGGestureHandler>
{
    IGDirectThreadKey *_threadKey;
    IGDirectThreadThemeMetadata *_themeMetadata;
    _Bool _isInteropThread;
    id <IGDirectOutgoingUpdateSending> _outgoingUpdateSender;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGDirectThreadThemeOverridesManager *_overridesManager;
}

- (void).cxx_destruct;
- (id)_selectedThemeFromAvailableThemes:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_applyTheme:(id)arg1;
- (void)_presentInteropUpgradePrompt;
- (void)themePickerSectionController:(id)arg1 didSelectThemeId:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)halfSheet;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithThreadKey:(id)arg1 themeMetadata:(id)arg2 isInteropThread:(_Bool)arg3 outgoingUpdateSender:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

