//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IGFeedSidecarIndicatorViewProtocol <NSObject>
- (void)setIndicatorWithPhotos:(long long)arg1 andVideosCount:(long long)arg2;
- (struct CGRect)getBackgroundViewFrame;
- (void)cleanUpAnimationTimer;
- (void)peekCarouselIndicatorAnimated:(_Bool)arg1 withHideDelay:(double)arg2 completion:(void (^)(void))arg3;
- (void)setCurrentItem:(long long)arg1;
- (void)setItemCount:(long long)arg1;
@end

