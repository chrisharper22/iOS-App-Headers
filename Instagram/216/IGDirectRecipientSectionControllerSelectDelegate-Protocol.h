//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectRecipientSectionController;
@protocol IGDirectRecipientCellViewModelProtocol;

@protocol IGDirectRecipientSectionControllerSelectDelegate <NSObject>
- (void)recipientSectionController:(IGDirectRecipientSectionController *)arg1 didTapSubtitleViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
- (_Bool)recipientSectionController:(IGDirectRecipientSectionController *)arg1 shouldLongPressViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
- (void)recipientSectionController:(IGDirectRecipientSectionController *)arg1 didLongPressViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
- (void)recipientSectionController:(IGDirectRecipientSectionController *)arg1 didDeselectViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
- (void)recipientSectionController:(IGDirectRecipientSectionController *)arg1 didSelectViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
@end

