//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGViewController;
@protocol IGProfileTabViewController;

@protocol IGProfileTabViewControllerDelegate <NSObject>
- (void)profileTabViewControllerWantsScrollToTopOfTab:(IGViewController<IGProfileTabViewController> *)arg1 animated:(_Bool)arg2;
- (void)profileTabViewControllerDidInitiatePullToRefresh:(IGViewController<IGProfileTabViewController> *)arg1;
- (void)profileTabViewControllerNeedsContentOffsetUpdate:(IGViewController<IGProfileTabViewController> *)arg1;
- (_Bool)profileTabViewControllerIsDisplayedInPopover:(IGViewController<IGProfileTabViewController> *)arg1;
- (double)profileTabViewControllerAdditionalTopObstructingContentInset:(IGViewController<IGProfileTabViewController> *)arg1;
- (double)profileTabViewControllerAdditionalTopContentInset:(IGViewController<IGProfileTabViewController> *)arg1;
@end

