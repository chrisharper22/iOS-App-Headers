//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAREffectApplicator;

@protocol IGAREffectApplicatorCameraControlDelegate <NSObject>
- (_Bool)arEffectApplicator:(IGAREffectApplicator *)arg1 canRequestChangeCaptureDevicePosition:(long long)arg2;
- (void)arEffectApplicator:(IGAREffectApplicator *)arg1 requestUpdateCaptureDevicePosition:(long long)arg2;
@end
