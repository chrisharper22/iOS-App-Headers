//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol IGScrollViewDrivenPanDelegate <NSObject>
- (void)scrollView:(UIScrollView *)arg1 didEndTranslatingBeyondBoundsWithVelocity:(struct CGPoint)arg2;
- (void)scrollView:(UIScrollView *)arg1 didTranslateBeyondBoundsWithTranslation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)scrollViewWillBeginTranslatingBeyondBounds:(UIScrollView *)arg1;
- (_Bool)scrollView:(UIScrollView *)arg1 shouldBeginTranslatingBeyondBoundsAtEdge:(long long)arg2;
@end

