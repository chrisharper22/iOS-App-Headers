//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RCTSurface;

@protocol RCTSurfaceDelegate <NSObject>

@optional
- (void)surface:(RCTSurface *)arg1 didChangeIntrinsicSize:(struct CGSize)arg2;
- (void)surface:(RCTSurface *)arg1 didChangeStage:(long long)arg2;
@end

