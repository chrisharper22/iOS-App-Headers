//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPromoteDualSliderViewCell, IGPromoteDualSliderViewSectionController, NSNumber;

@protocol IGPromoteDualSliderViewSectionControllerDelegate <NSObject>
- (void)promoteDualSliderViewSectionController:(IGPromoteDualSliderViewSectionController *)arg1 didFinishSlidingOnCell:(IGPromoteDualSliderViewCell *)arg2;
- (void)promoteDualSliderViewSectionController:(IGPromoteDualSliderViewSectionController *)arg1 didStartSlidingOnCell:(IGPromoteDualSliderViewCell *)arg2;
- (void)promoteDualSliderViewSectionController:(IGPromoteDualSliderViewSectionController *)arg1 didSlideOnCell:(IGPromoteDualSliderViewCell *)arg2 withMinValue:(NSNumber *)arg3 withMaxValue:(NSNumber *)arg4;
@end

