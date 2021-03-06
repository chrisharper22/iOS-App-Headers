//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCoWatchBloksMedia, IGCoWatchContentPickerViewController, IGCoWatchFacebookVideo, IGDirectScrollingTabViewModel, IGMedia, NSString;

@protocol IGCoWatchContentPickerViewControllerDelegate <NSObject>
- (void)coWatchContentPickerViewControllerDidShowBrowseMoreContentsButton:(IGCoWatchContentPickerViewController *)arg1;
- (void)coWatchContentPickerViewControllerDidSelectBrowseMoreContents:(IGCoWatchContentPickerViewController *)arg1;
- (void)coWatchContentPickerViewController:(IGCoWatchContentPickerViewController *)arg1 didSelectCoWatchBloksMedia:(IGCoWatchBloksMedia *)arg2;
- (void)coWatchContentPickerViewController:(IGCoWatchContentPickerViewController *)arg1 didSelectFacebookVideo:(IGCoWatchFacebookVideo *)arg2;
- (void)coWatchContentPickerViewController:(IGCoWatchContentPickerViewController *)arg1 didSelectTabItem:(IGDirectScrollingTabViewModel *)arg2;
- (void)coWatchContentPickerViewController:(IGCoWatchContentPickerViewController *)arg1 didSelectItem:(IGMedia *)arg2 contentIndex:(unsigned long long)arg3 contentSource:(NSString *)arg4;
@end

