//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPartialModalSheetViewController, UIEvent, UIView;

@protocol IGPartialModalSheetCustomInteractionDelegate <NSObject>
- (UIView *)partialModalSheetViewController:(IGPartialModalSheetViewController *)arg1 delegateView:(UIView *)arg2 hitTest:(struct CGPoint)arg3 withEvent:(UIEvent *)arg4;
- (double)partialModalSheetViewControllerAlphaForDimmingView:(IGPartialModalSheetViewController *)arg1;
@end

