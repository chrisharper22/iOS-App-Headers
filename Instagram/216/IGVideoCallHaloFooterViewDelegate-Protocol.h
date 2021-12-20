//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IGVideoCallHaloFooterView;

@protocol IGVideoCallHaloFooterViewDelegate
- (void)videoCallHaloFooterViewDidTapMicrophoneToggleButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1 toggledOn:(_Bool)arg2;
- (void)videoCallHaloFooterViewDidTapCameraFlipButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1 cameraDirection:(long long)arg2;
- (void)videoCallHaloFooterViewDidTapCameraToggleButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1 toggledOn:(_Bool)arg2;

@optional
- (void)videoCallHaloFooterViewDidTapEffectsButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1;
- (void)videoCallHaloFooterViewDidTapSettingsButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1;
- (void)videoCallHaloFooterViewDidTapAddPeopleButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1;
- (void)videoCallHaloFooterViewDidTapMediaButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1;
- (void)videoCallHaloFooterViewDidTapAudioRouteButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1;
- (void)videoCallHaloFooterViewDidTapSpeakerToggleButtonWithFooterView:(IGVideoCallHaloFooterView *)arg1 toggledOn:(_Bool)arg2;
@end

