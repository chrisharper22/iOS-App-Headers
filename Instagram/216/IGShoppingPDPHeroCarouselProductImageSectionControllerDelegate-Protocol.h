//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGShoppingPDPHeroCarouselProductImageSectionController, IGShoppingPDPHeroCarouselProductImageViewModel, UIView;

@protocol IGShoppingPDPHeroCarouselProductImageSectionControllerDelegate <NSObject>
- (void)heroCarouselProductImageSectionController:(IGShoppingPDPHeroCarouselProductImageSectionController *)arg1 didEndZoomWithViewModel:(IGShoppingPDPHeroCarouselProductImageViewModel *)arg2;
- (void)heroCarouselProductImageSectionController:(IGShoppingPDPHeroCarouselProductImageSectionController *)arg1 didZoomWithViewModel:(IGShoppingPDPHeroCarouselProductImageViewModel *)arg2;
- (void)heroCarouselProductImageSectionController:(IGShoppingPDPHeroCarouselProductImageSectionController *)arg1 didBecomeVisibleWithViewModel:(IGShoppingPDPHeroCarouselProductImageViewModel *)arg2 isSubImpression:(_Bool)arg3;
- (void)heroCarouselProductImageSectionController:(IGShoppingPDPHeroCarouselProductImageSectionController *)arg1 didTapViewModel:(IGShoppingPDPHeroCarouselProductImageViewModel *)arg2 withMediaCellAnimationTransitionView:(UIView *)arg3;
@end

