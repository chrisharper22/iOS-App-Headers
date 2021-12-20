//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGLiveBroadcastUserCellDelegate-Protocol.h"

@class IGLiveBroadcastUserCell, IGLiveBroadcastUserSource, IGTableLayoutSpec, NSString;
@protocol IGLiveBroadcastUserSectionControllerDelegate;

@interface IGLiveBroadcastUserSectionController : IGListSectionController <IGLiveBroadcastUserCellDelegate>
{
    IGLiveBroadcastUserCell *_sizingCell;
    IGLiveBroadcastUserCell *_userCell;
    IGLiveBroadcastUserSource *_userSource;
    IGTableLayoutSpec *_tableLayoutSpec;
    id <IGLiveBroadcastUserSectionControllerDelegate> _userSourceDelegate;
    NSString *_module;
}

- (void).cxx_destruct;
- (_Bool)liveBroadcastUserCellShouldDisplayWaveButton:(id)arg1;
- (void)liveBroadcastUserCellTapWaveButton:(id)arg1;
- (void)liveBroadcastUserCellTapMoreButton:(id)arg1;
- (void)liveBroadcastUserCellTapInviteButton:(id)arg1;
- (void)liveBroadcastUserCellTapButton:(id)arg1;
- (void)liveBroadcastUserCell:(id)arg1 didSelect:(_Bool)arg2;
- (void)liveBroadcastUserCell:(id)arg1 didToggle:(_Bool)arg2;
- (void)updateUserSource:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)_configureUserCell:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithTableLayoutSpec:(id)arg1 userSourceDelegate:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
