//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProRenewConversionViewController, NSString;

@protocol IGProRenewConversionViewControllerDelegate <NSObject>
- (void)renewViewControllerDidOptOut:(IGProRenewConversionViewController *)arg1;
- (void)renewViewController:(IGProRenewConversionViewController *)arg1 didOptInToAccountType:(long long)arg2 categoryID:(NSString *)arg3;
- (void)renewViewControllerDidCancel:(IGProRenewConversionViewController *)arg1;
@end
