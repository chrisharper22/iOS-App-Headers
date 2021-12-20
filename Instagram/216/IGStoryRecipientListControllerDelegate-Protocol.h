//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAddHighlightsViewController, IGStoryRecipientListController, NSArray, NSSet;
@protocol IGQuickCamOutputAsset;

@protocol IGStoryRecipientListControllerDelegate <NSObject>
- (_Bool)isStorySharesheetDismissed;
- (void)storyRecipientListController:(IGStoryRecipientListController *)arg1 dismissAddHighlightsViewController:(IGAddHighlightsViewController *)arg2;
- (void)storyRecipientListController:(IGStoryRecipientListController *)arg1 presentAddHighlightsViewController:(IGAddHighlightsViewController *)arg2;
- (void)storyRecipientListControllerDidOpenFullscreenSearch:(IGStoryRecipientListController *)arg1;
- (void)storyRecipientListControllerDidTapSendToExternalServiceWithServiceType:(long long)arg1 willShareToFbWithYourStoryButton:(_Bool)arg2;
- (void)storyRecipientListControllerDidTapShareToStoryButtonWithWillShareToFb:(_Bool)arg1;
- (void)storyRecipientListControllerDidDismiss:(IGStoryRecipientListController *)arg1;
- (void)storyRecipientListController:(IGStoryRecipientListController *)arg1 didSendToStoryTarget:(long long)arg2 directRecipients:(NSSet *)arg3 asset:(id <IGQuickCamOutputAsset>)arg4 storyModelArray:(NSArray *)arg5 metadataArray:(NSArray *)arg6;

@optional
- (void)didTapFavoritesSubtitle;
@end
