//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGShoppingPDPLightboxFeedItemSectionController, IGShoppingPDPLightboxFeedItemViewModel;

@protocol IGShoppingPDPLightboxFeedItemSectionControllerDelegate <NSObject>
- (void)lightboxFeedItemSectionController:(IGShoppingPDPLightboxFeedItemSectionController *)arg1 didBecomeVisibleWithViewModel:(IGShoppingPDPLightboxFeedItemViewModel *)arg2 isSubimpression:(_Bool)arg3;
- (void)lightboxFeedItemSectionController:(IGShoppingPDPLightboxFeedItemSectionController *)arg1 didTapViewPostOnMedia:(IGMedia *)arg2;
- (void)lightboxFeedItemSectionController:(IGShoppingPDPLightboxFeedItemSectionController *)arg1 didTapUsernameAttributionOnMedia:(IGMedia *)arg2;
@end

