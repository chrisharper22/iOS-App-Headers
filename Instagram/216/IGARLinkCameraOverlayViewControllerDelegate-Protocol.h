//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGARLinkCameraOverlayViewController, IGTapButton, NSString, UIBarButtonItem;

@protocol IGARLinkCameraOverlayViewControllerDelegate <NSObject>
- (void)ARLinkCameraOverlayViewController:(IGARLinkCameraOverlayViewController *)arg1 shouldChangeStatsBarStyle:(long long)arg2;
- (void)mediaPermissionAcquired:(IGARLinkCameraOverlayViewController *)arg1;
- (void)ARLinkCameraOverlayViewController:(IGARLinkCameraOverlayViewController *)arg1 didTapTryEffectWithEffectID:(NSString *)arg2 recognizedUsername:(NSString *)arg3 deeplinkCode:(unsigned long long)arg4;
- (void)ARLinkCameraOverlayViewController:(IGARLinkCameraOverlayViewController *)arg1 didTapGalleryButton:(IGTapButton *)arg2;
- (void)ARLinkCameraOverlayViewController:(IGARLinkCameraOverlayViewController *)arg1 didTapDismissButton:(UIBarButtonItem *)arg2;
@end

