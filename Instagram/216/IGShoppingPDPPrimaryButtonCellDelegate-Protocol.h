//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGShoppingPDPPrimaryButtonCell, IGTextButton, NSString;

@protocol IGShoppingPDPPrimaryButtonCellDelegate <NSObject>
- (void)shoppingPrimaryButtonCell:(IGShoppingPDPPrimaryButtonCell *)arg1 didCaptureCTAFrame:(struct CGRect)arg2 submodule:(NSString *)arg3;
- (void)shoppingPrimaryButtonCell:(IGShoppingPDPPrimaryButtonCell *)arg1 didBecomeVisibleWithSectionId:(NSString *)arg2 impressionType:(long long)arg3;
- (void)shoppingPrimaryButtonCell:(IGShoppingPDPPrimaryButtonCell *)arg1 didTapSecondaryButton:(IGTextButton *)arg2;
- (void)shoppingPrimaryButtonCell:(IGShoppingPDPPrimaryButtonCell *)arg1 didTapPrimaryButton:(IGTextButton *)arg2;
@end

