//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGDirectCoreTextViewCellDelegate-Protocol.h"
#import "IGListScrollDelegate-Protocol.h"

@class IGDirectShhModeSwipeUpsellViewModel, IGDirectThreadViewMessagesClientStateManager, IGUserSession, NSString;

@interface IGDirectShhModeSwipeUpsellSectionController : IGListBindingSingleSectionController <IGDirectCoreTextViewCellDelegate, IGListScrollDelegate>
{
    IGUserSession *_userSession;
    IGDirectThreadViewMessagesClientStateManager *_clientStateManager;
    IGDirectShhModeSwipeUpsellViewModel *_viewModel;
}

- (void).cxx_destruct;
- (_Bool)_shouldHideCell:(id)arg1;
- (void)messageListCellDidTapLink:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDeceleratingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (id)initWithUserSession:(id)arg1 clientStateManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
