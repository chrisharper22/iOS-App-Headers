//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSundialViewerVerticalUFI, IGUnifiedVideoUFIButton, UIControl, UIGestureRecognizer;

@protocol IGSundialViewerVerticalUFIDelegate <NSObject>
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didLongPressSendButton:(UIControl *)arg2 gestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didTapAudioAttributionButton:(UIControl *)arg2;
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didTapMoreOptionsButton:(IGUnifiedVideoUFIButton *)arg2;
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didTapRemixButton:(UIControl *)arg2;
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didTapLikeButton:(UIControl *)arg2;
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didTapLikeCountButton:(UIControl *)arg2;
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didTapSendButton:(UIControl *)arg2;
- (void)sundialViewerUFI:(IGSundialViewerVerticalUFI *)arg1 didTapCommentButton:(UIControl *)arg2;
@end
