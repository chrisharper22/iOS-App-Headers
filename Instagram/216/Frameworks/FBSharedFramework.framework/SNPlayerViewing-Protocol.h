//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class CALayer, NSString, SNRenderableModel;
@protocol SNPlayerViewDelegate;

@protocol SNPlayerViewing <NSObject>
- (void)setDelegate:(id <SNPlayerViewDelegate>)arg1;
- (CALayer *)animationLayerWithLayerTag:(NSString *)arg1;
- (void)setRenderable:(SNRenderableModel *)arg1 completion:(void (^)(NSError *))arg2;
@end

