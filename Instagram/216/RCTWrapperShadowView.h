//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTShadowView.h"

@class RCTBridge;

@interface RCTWrapperShadowView : RCTShadowView
{
    RCTBridge *_bridge;
    CDUnknownBlockType _measureBlock;
    struct CGSize _intrinsicContentSize;
}

- (void).cxx_destruct;
- (void)setIntrinsicContentSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isYogaLeafNode;
- (struct CGSize)measureWithMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2;
- (id)initWithBridge:(id)arg1;

@end
