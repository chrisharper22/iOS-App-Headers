//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGMediaUpdatedListener-Protocol.h"

@class IGDirectPostWithCommentMessageViewModel, NSString;

@interface IGDirectPostWithCommentMessageSectionController : IGDirectMessageSectionController <IGMediaUpdatedListener>
{
}

- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)handleSingleTapOfSendingOrSentMessageCell:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IGDirectPostWithCommentMessageViewModel *viewModel; // @dynamic viewModel;

@end
