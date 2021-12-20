//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGBrowserSettingsViewModel, NSString;

@protocol IGBrowserSettingsViewControllerDelegate <NSObject>
- (void)browserSettingsViewControllerDidTapOnLinkedText:(NSString *)arg1;
- (void)browserSettingsViewControllerDidRequestClearBrowserData;
- (void)browserSettingsViewControllerDidRequestEditPaymentAutofillData;
- (void)browserSettingsViewControllerDidRequestSetUserPaymentAutofillEnabled:(_Bool)arg1;
- (void)browserSettingsViewControllerDidRequestSetUserContactAutofillEnabled:(_Bool)arg1;
- (IGBrowserSettingsViewModel *)browserSettingsViewControllerDidRequestCurrentSettingsState;
- (void)browserSettingsViewControllerDidRequestEditContactAutofillData;
@end
