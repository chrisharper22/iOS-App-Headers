//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@interface FBSpline : NSObject <NSCoding>
{
    struct _GLKVector2 *_knots;
    unsigned long long _knotCount;
}

+ (struct __CVBuffer *)createPixelBufferFromCatromSplines:(id)arg1;
- (void)createMapFromLinearTesselation:(char *)arg1 mapLen:(unsigned long long)arg2;
- (id)tesselateCatmullRomToLinear:(unsigned long long)arg1;
- (struct _GLKVector2)knotAtIndex:(unsigned long long)arg1;
- (unsigned long long)knotCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnotCount:(unsigned long long)arg1;
- (id)initWithKnots:(struct _GLKVector2 *)arg1 count:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;

@end

