//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBCaptureModeCoordinating;

@interface FBCaptureModeCoordinatingProvider : NSObject
{
    id <FBCaptureModeCoordinating> _coordinating;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <FBCaptureModeCoordinating> coordinating; // @synthesize coordinating=_coordinating;
- (id)initWithCoordinating:(id)arg1;

@end
