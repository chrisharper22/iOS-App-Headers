//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGModalSheetViewController;

@protocol IGModalSheetPresentationCoordinator <NSObject>

@optional
- (void)modalSheet:(IGModalSheetViewController *)arg1 didUpdatePresentationPercentage:(double)arg2;
- (void)modalSheet:(IGModalSheetViewController *)arg1 didEndDismissalTransition:(_Bool)arg2;
- (void)modalSheet:(IGModalSheetViewController *)arg1 didEndPresentationTransition:(_Bool)arg2;
- (void)modalSheetDidLayoutSubviews:(IGModalSheetViewController *)arg1;
- (void)modalSheetWillBeginDismissalTransition:(IGModalSheetViewController *)arg1;
- (void)modalSheetWillBeginPresentationTransition:(IGModalSheetViewController *)arg1;
@end

