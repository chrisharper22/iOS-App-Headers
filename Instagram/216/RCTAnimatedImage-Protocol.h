//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol RCTAnimatedImage <NSObject>
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (UIImage *)animatedImageFrameAtIndex:(unsigned long long)arg1;
@end

