//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface FBMapCamera : FBValueObject <NSCopying, NSCoding>
{
    double _bearing;
    double _pitch;
    double _zoom;
    struct CLLocationCoordinate2D _center;
}

@property(readonly, nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(readonly, nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(readonly, nonatomic) double bearing; // @synthesize bearing=_bearing;
@property(readonly, nonatomic) struct CLLocationCoordinate2D center; // @synthesize center=_center;
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 bearing:(double)arg2 pitch:(double)arg3 zoom:(double)arg4;

@end

