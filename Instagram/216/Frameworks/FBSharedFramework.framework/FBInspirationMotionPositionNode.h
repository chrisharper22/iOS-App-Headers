//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface FBInspirationMotionPositionNode : FBValueObject <NSCopying, NSCoding>
{
    double _deltaX;
    double _deltaY;
    double _scale;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double deltaY; // @synthesize deltaY=_deltaY;
@property(readonly, nonatomic) double deltaX; // @synthesize deltaX=_deltaX;
- (id)initWithDeltaX:(double)arg1 deltaY:(double)arg2 scale:(double)arg3;

@end

