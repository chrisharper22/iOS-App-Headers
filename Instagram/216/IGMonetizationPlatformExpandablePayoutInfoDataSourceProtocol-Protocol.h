//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPayoutBusinessInfo, IGPayoutLegalOwnerInfo, NSArray, NSString;

@protocol IGMonetizationPlatformExpandablePayoutInfoDataSourceProtocol <NSObject>
- (void)updatePayoutMethodWithCredentialID:(NSString *)arg1 subtypes:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateLegalOwnerInfo:(IGPayoutLegalOwnerInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateBusinessInfo:(IGPayoutBusinessInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchFinancialEntityInformationWithCompletion:(void (^)(NSString *))arg1;
@end

