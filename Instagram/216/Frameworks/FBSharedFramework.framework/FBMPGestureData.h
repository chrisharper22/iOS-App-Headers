//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPData-Protocol.h>

@class NSString, NSUUID;

@interface FBMPGestureData : NSObject <FBMPData>
{
    NSUUID *_uuid;
    long long _phase;
    double _screenScale;
    struct CGPoint _locationInView;
    struct CGSize _viewSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(readonly, nonatomic) struct CGPoint locationInView; // @synthesize locationInView=_locationInView;
@property(readonly, nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(readonly, nonatomic) long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 phase:(long long)arg2 locationInView:(struct CGPoint)arg3 viewSize:(struct CGSize)arg4 screenScale:(double)arg5;
@property(nonatomic) _Bool consumed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

