//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCoWatchFacebookVideo, IGDirectGalleryPreviewMedia, IGDirectMediaPickerViewController, IGDirectScrollingTabViewModel, IGMedia, NSArray, NSString;

@protocol IGDirectMediaPickerViewControllerDelegate <NSObject>
- (_Bool)isFullscreen;
- (void)mediaPickerViewControllerDidShowBrowseMore:(IGDirectMediaPickerViewController *)arg1;
- (void)mediaPickerViewControllerDidSelectBrowseMore:(IGDirectMediaPickerViewController *)arg1;
- (void)mediaPickerViewController:(IGDirectMediaPickerViewController *)arg1 didSelectFacebookVideo:(IGCoWatchFacebookVideo *)arg2;
- (void)mediaPickerViewController:(IGDirectMediaPickerViewController *)arg1 didSelectTabItem:(IGDirectScrollingTabViewModel *)arg2;
- (void)mediaPickerViewController:(IGDirectMediaPickerViewController *)arg1 didSelectPreviewMedia:(IGDirectGalleryPreviewMedia *)arg2;
- (void)mediaPickerViewController:(IGDirectMediaPickerViewController *)arg1 didTapSendWithFeedItems:(NSArray *)arg2;
- (void)mediaPickerViewController:(IGDirectMediaPickerViewController *)arg1 didTapSendWithPreviewMedia:(NSArray *)arg2;
- (void)mediaPickerViewController:(IGDirectMediaPickerViewController *)arg1 didSelectFeedItem:(IGMedia *)arg2 contentIndex:(unsigned long long)arg3 contentSource:(NSString *)arg4;
@end

