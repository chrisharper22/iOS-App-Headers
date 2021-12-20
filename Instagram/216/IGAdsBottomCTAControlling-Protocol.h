//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGViewController, UIScrollView, UIView;

@protocol IGAdsBottomCTAControlling <NSObject>
@property(readonly, nonatomic) double bottomOffset;
@property(readonly, nonatomic, getter=isShowing) _Bool showing;
@property(readonly, nonatomic) UIView *ctaView;
- (void)updateBottomCTAOnScrollViewScrolling:(UIScrollView *)arg1;
- (void)removeCTA;
- (void)displayInViewController:(IGViewController *)arg1 inScrollView:(UIScrollView *)arg2 belowView:(UIView *)arg3;
@end
