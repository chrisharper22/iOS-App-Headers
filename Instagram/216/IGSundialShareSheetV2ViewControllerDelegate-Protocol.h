//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGContentFundingDeal, IGSundialShareSheetV2ViewController, IGSundialShoppingMetadata, NSString;

@protocol IGSundialShareSheetV2ViewControllerDelegate <NSObject>
- (void)sundialShareSheetV2ViewController:(IGSundialShareSheetV2ViewController *)arg1 didUpdateCaption:(NSString *)arg2;
- (void)sundialShareSheetV2ViewControllerDidTapEditCoverButton:(IGSundialShareSheetV2ViewController *)arg1;
- (void)sundialShareSheetV2ViewControllerDidTapSaveDraft:(IGSundialShareSheetV2ViewController *)arg1;
- (void)sundialShareSheetV2ViewControllerDidTapPost:(IGSundialShareSheetV2ViewController *)arg1;
- (void)sundialShareSheetV2ViewController:(IGSundialShareSheetV2ViewController *)arg1 didUpdateShareToFeed:(_Bool)arg2;
- (void)sundialShareSheetV2ViewController:(IGSundialShareSheetV2ViewController *)arg1 didUpdateShoppingMetadata:(IGSundialShoppingMetadata *)arg2;
- (void)sundialShareSheetV2ViewController:(IGSundialShareSheetV2ViewController *)arg1 didUpdateContentFundingDeal:(IGContentFundingDeal *)arg2;
- (void)sundialShareSheetV2ViewControllerDidTapRenameAudio:(IGSundialShareSheetV2ViewController *)arg1;
- (void)sundialShareSheetV2ViewControllerDidTapTagPeople:(IGSundialShareSheetV2ViewController *)arg1;
@end

