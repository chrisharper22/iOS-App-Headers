//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBMemorySurfaceMarker : NSObject
{
    int _instanceKey;
    struct shared_ptr<facebook::perflogger::QPL> _qpl;
    struct vector<facebook::perflogger::Annotation, std::allocator<facebook::perflogger::Annotation>> _annotations;
    int _qplMarker;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)annotateWithKey:(const void *)arg1 value:(const void *)arg2;
- (void)endWithAction:(short)arg1 surfaceDelay:(double)arg2;
- (void)start;
- (id)initWithMarker:(int)arg1;

@end
