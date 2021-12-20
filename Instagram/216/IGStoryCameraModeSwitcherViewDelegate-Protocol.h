//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryCameraModeSwitcherView;
@protocol IGSelectorModeType;

@protocol IGStoryCameraModeSwitcherViewDelegate <NSObject>
- (void)cameraModeSwitcherViewDidDisplayMode:(id <IGSelectorModeType>)arg1;
- (void)cameraModeSwitcherViewDidEndScrollOnMode:(id <IGSelectorModeType>)arg1;
- (void)cameraModeSwitcherViewDidSelectMode:(id <IGSelectorModeType>)arg1;
- (void)cameraModeSwitcherView:(IGStoryCameraModeSwitcherView *)arg1 didSwitchFromMode:(id <IGSelectorModeType>)arg2 toMode:(id <IGSelectorModeType>)arg3;
- (_Bool)cameraModeSwitcherView:(IGStoryCameraModeSwitcherView *)arg1 shouldBeginDraggingFromMode:(id <IGSelectorModeType>)arg2;
@end

