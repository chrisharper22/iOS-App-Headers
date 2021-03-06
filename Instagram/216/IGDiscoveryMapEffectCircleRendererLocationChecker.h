//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGARLocationEffectCircleLocationCheckerDelegate-Protocol.h"

@class IGARLocationEffectCircleLocationChecker, MKCircleRenderer, NSString;
@protocol IGDiscoveryMapEffectCircleRendererLocationCheckerDelegate;

@interface IGDiscoveryMapEffectCircleRendererLocationChecker : NSObject <IGARLocationEffectCircleLocationCheckerDelegate>
{
    IGARLocationEffectCircleLocationChecker *_locationTracker;
    id <IGDiscoveryMapEffectCircleRendererLocationCheckerDelegate> _delegate;
    MKCircleRenderer *_circleRenderer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKCircleRenderer *circleRenderer; // @synthesize circleRenderer=_circleRenderer;
@property(nonatomic) __weak id <IGDiscoveryMapEffectCircleRendererLocationCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)circleLocationCheckerLocationDidEnterCircle:(id)arg1;
- (void)circleLocationCheckerLocationDidExitCircle:(id)arg1;
@property(readonly, nonatomic, getter=isLocationInCircle) _Bool locationInCircle;
- (id)initWithLocationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

