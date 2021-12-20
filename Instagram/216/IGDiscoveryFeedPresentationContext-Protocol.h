//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGViewController;
@protocol IGDiscoveryFeedPresentationSupporting;

@protocol IGDiscoveryFeedPresentationContext <NSObject>
@property(readonly, nonatomic) long long exitReason;
- (void)presentedFeedViewController:(IGViewController<IGDiscoveryFeedPresentationSupporting> *)arg1 didEndTranslatingBeyondBoundsWithVelocity:(double)arg2;
- (void)presentedFeedViewController:(IGViewController<IGDiscoveryFeedPresentationSupporting> *)arg1 didTranslateBeyondBoundsByAmount:(double)arg2;
- (void)presentedFeedViewControllerWillBeginTranslatingBeyondBounds:(IGViewController<IGDiscoveryFeedPresentationSupporting> *)arg1;
- (void)presentedFeedViewController:(IGViewController<IGDiscoveryFeedPresentationSupporting> *)arg1 didRequestDismissalWithReason:(long long)arg2;
@end
