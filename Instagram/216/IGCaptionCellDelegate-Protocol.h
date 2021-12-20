//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UITextView;

@protocol IGCaptionCellDelegate <NSObject>
- (_Bool)captionTextView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)captionTextViewDidEndEditing:(UITextView *)arg1 text:(NSString *)arg2;
- (void)captionTextViewDidBeginEditing:(UITextView *)arg1;
- (void)captionTextViewWillBeginEditing:(UITextView *)arg1;
- (void)captionTextViewDidChange:(UITextView *)arg1;
- (_Bool)captionTextViewShouldEndEditing;
- (void)captionCellEditButtonTapped;
- (void)captionCellMediaOverlayViewTapped;
- (_Bool)captionCellMediaOverlayViewTapEnabled;
@end

