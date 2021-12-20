//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMonetizationPlatformFinancialEntityDataModel, IGPayoutBasicInfo, NSString;

@protocol IGPayoutBusinessInfoContainerViewControllerDelegate <NSObject>
- (void)payoutBusinessInfoContainerViewControllerDidTapSecondaryButtonOnInfoSelection;
- (void)payoutBusinessInfoContainerViewControllerDidTapPrimaryButtonOnInfoSelectionWithFinancialEntity:(IGMonetizationPlatformFinancialEntityDataModel *)arg1;
- (void)payoutBusinessInfoContainerViewControllerDidTapSkip;
- (void)payoutBusinessInfoContainerViewControllerDidNavigateBack;
- (void)payoutBusinessInfoContainerViewControllerDidTapNextWithCountry:(NSString *)arg1 businessType:(long long)arg2;
- (void)payoutBusinessInfoContainerViewControllerBasicAccountInfoDidTapNext:(IGPayoutBasicInfo *)arg1;
- (void)payoutBusinessInfoContainerViewControllerDidLoadPartialFinancialEntity:(IGMonetizationPlatformFinancialEntityDataModel *)arg1;
- (void)payoutBusinessInfoContainerViewControllerDidUpdateBusinessType:(long long)arg1;
@end

