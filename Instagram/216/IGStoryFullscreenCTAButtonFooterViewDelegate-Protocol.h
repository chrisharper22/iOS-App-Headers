//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryFullscreenCTAButtonFooterView, NSDictionary, NSString, UIButton, UIColor;

@protocol IGStoryFullscreenCTAButtonFooterViewDelegate <NSObject>
- (void)footerViewdidLayoutWithlayoutExtra:(NSDictionary *)arg1;
- (void)storyFullscreenCTAButtonFooterView:(IGStoryFullscreenCTAButtonFooterView *)arg1 didTapCameraButton:(UIButton *)arg2;
- (void)storyFullscreenCTAButtonDidLongPressSaveButton:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (void)storyFullscreenCTAButtonDidTapSaveButton:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (void)storyFullscreenCTAButtonDidTapReshareButton:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (void)storyFullscreenCTAButtonFooterView:(IGStoryFullscreenCTAButtonFooterView *)arg1 didTapSendMessage:(NSString *)arg2;
- (void)storyFullscreenCTAButtonFooterViewDidChangeMessageText:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (void)storyFullscreenCTAButtonFooterView:(IGStoryFullscreenCTAButtonFooterView *)arg1 didEndComposingMessage:(NSString *)arg2;
- (void)storyFullscreenCTAButtonFooterViewDidTapStartComposingMessage:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (void)storyFullscreenCTAButtonFooterViewDidTapMoreOption:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (void)storyFullscreenCTAButtonFooterView:(IGStoryFullscreenCTAButtonFooterView *)arg1 didTapCTAButtonWithType:(unsigned long long)arg2;
- (_Bool)ctaButtonFooterViewShouldResurfaceButtonAfterCaptionExpansion:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (_Bool)ctaButtonFooterViewShouldShowBounceAnimation:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (UIColor *)backgroundAccentColorForStoryFullscreenCTAButtonFooterView:(IGStoryFullscreenCTAButtonFooterView *)arg1;
- (void)storyFullscreenCTAButtonFooterView:(IGStoryFullscreenCTAButtonFooterView *)arg1 didTransitionFromButtonState:(unsigned long long)arg2 toButtonState:(unsigned long long)arg3;
@end

