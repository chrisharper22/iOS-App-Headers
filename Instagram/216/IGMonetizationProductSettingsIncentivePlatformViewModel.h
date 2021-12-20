//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMonetizationProductSettingsViewModel-Protocol.h"

@class IGMonetizationBonusesInfo, IGUserSession, NSString;

@interface IGMonetizationProductSettingsIncentivePlatformViewModel : NSObject <IGMonetizationProductSettingsViewModel>
{
    IGUserSession *_userSession;
    IGMonetizationBonusesInfo *_bonusesInfo;
    _Bool _showPayoutAccountRow;
}

- (void).cxx_destruct;
- (id)listObjects;
- (unsigned long long)browserURLSource;
- (id)universalToggleLearnMoreURLString;
- (id)supportLearnMoreURLString;
- (id)analyticsModule;
- (id)title;
- (long long)payoutProductType;
- (long long)productType;
- (id)initWithBonusesInfo:(id)arg1 showPayoutAccountRow:(_Bool)arg2 userSession:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

