//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGDirectRecipientCell, UIButton;

@protocol IGDirectRecipientCellDelegate <NSObject>
- (void)directRecipientCellDidDismiss:(IGDirectRecipientCell *)arg1;
- (void)directRecipientCellDidTapSubtitle:(IGDirectRecipientCell *)arg1;
- (void)directRecipientCellDidTapCameraButton:(UIButton *)arg1;
- (void)directRecipientCellDidTapChevronAccessoryButton:(UIButton *)arg1;
- (void)directRecipientCellDidLongPress:(IGDirectRecipientCell *)arg1;
- (_Bool)directRecipientCellShouldLongPress:(IGDirectRecipientCell *)arg1;
@end
