//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ARTRenderable.h"

@interface ARTShape : ARTRenderable
{
    struct CGPath *_d;
}

@property(nonatomic) struct CGPath *d; // @synthesize d=_d;
- (void)renderLayerTo:(struct CGContext *)arg1;
- (void)dealloc;

@end

