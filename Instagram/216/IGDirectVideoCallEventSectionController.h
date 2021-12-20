//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGDirectVideoCallEventDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"

@class IGDirectMessageSectionComponents, IGDirectVideoCallEventViewModel, NSString;

@interface IGDirectVideoCallEventSectionController : IGDirectMessageSectionController <IGListDisplayDelegate, IGDirectVideoCallEventDelegate>
{
    IGDirectVideoCallEventViewModel *_viewModel;
    IGDirectMessageSectionComponents *_components;
}

- (void).cxx_destruct;
- (void)_showActionSheetWithViewModel:(id)arg1;
- (void)handleVideoEventMessageWithViewModel:(id)arg1;
- (void)_invokeVideoEventMessageWithViewModel:(id)arg1;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)messageCellDidLongPress:(id)arg1 gestureRecognizer:(id)arg2;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
