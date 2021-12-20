//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGContentFundingDeal, IGMediaCroppingInfo, IGSundialShareSheet, IGSundialShoppingMetadata, IGUser, NSArray, NSString;

@protocol IGSundialShareSheetDelegate <NSObject>
- (void)sundialShareSheetDidTapRenameAudio:(IGSundialShareSheet *)arg1;
- (void)sundialShareSheetDidTapTagPeople:(IGSundialShareSheet *)arg1;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateCoverImageCropInfo:(IGMediaCroppingInfo *)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateContentFundingDeal:(IGContentFundingDeal *)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 shouldShowRightBarButton:(_Bool)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateShoppingMetadata:(IGSundialShoppingMetadata *)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateIsPaidPartnership:(_Bool)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateBrandedContentTags:(NSArray *)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateSponsorPartner:(IGUser *)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateShareToReels:(_Bool)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateShareToFeed:(_Bool)arg2;
- (void)sundialShareSheet:(IGSundialShareSheet *)arg1 didUpdateCaption:(NSString *)arg2;
@end

