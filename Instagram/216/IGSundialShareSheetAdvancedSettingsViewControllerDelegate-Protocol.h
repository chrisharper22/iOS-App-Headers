//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSundialShareSheetAdvancedSettingsViewController, IGUser, NSArray;

@protocol IGSundialShareSheetAdvancedSettingsViewControllerDelegate <NSObject>
- (void)advancedSettingsViewController:(IGSundialShareSheetAdvancedSettingsViewController *)arg1 didUpdateIsPaidPartnership:(_Bool)arg2;
- (void)advancedSettingsViewController:(IGSundialShareSheetAdvancedSettingsViewController *)arg1 didUpdateBrandedContentTags:(NSArray *)arg2;
- (void)advancedSettingsViewController:(IGSundialShareSheetAdvancedSettingsViewController *)arg1 didUpdateSponsorPartner:(IGUser *)arg2;
- (void)advancedSettingsViewController:(IGSundialShareSheetAdvancedSettingsViewController *)arg1 didToggleShareOnFacebook:(_Bool)arg2;
@end
