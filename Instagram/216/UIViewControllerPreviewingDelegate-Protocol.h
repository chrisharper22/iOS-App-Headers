//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol UIViewControllerPreviewing;

@protocol UIViewControllerPreviewingDelegate <NSObject>
- (void)previewingContext:(id <UIViewControllerPreviewing>)arg1 commitViewController:(UIViewController *)arg2;
- (UIViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForLocation:(struct CGPoint)arg2;
@end

