//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGAREffectApplicationListener-Protocol.h"
#import "IGAREffectAvailabilityListener-Protocol.h"
#import "IGARInstructionServiceDelegate-Protocol.h"

@class IGAREffectTargetModel, IGAREffectTargetResponse, IGCameraViewController, NSError;

@protocol IGCameraViewControllerAREffectDelegate <IGAREffectAvailabilityListener, IGARInstructionServiceDelegate, IGAREffectApplicationListener>
- (_Bool)cameraViewControllerShouldFetchForSwitcherMode:(IGCameraViewController *)arg1;
- (void)cameraViewController:(IGCameraViewController *)arg1 didFailFetchWithError:(NSError *)arg2;
- (void)cameraViewController:(IGCameraViewController *)arg1 didFailFetchForEffectTarget:(IGAREffectTargetModel *)arg2 response:(IGAREffectTargetResponse *)arg3;
- (void)cameraViewController:(IGCameraViewController *)arg1 didCompleteFetchForEffectTarget:(IGAREffectTargetModel *)arg2;
- (void)cameraViewController:(IGCameraViewController *)arg1 didBeginFetchingEffectTarget:(IGAREffectTargetModel *)arg2;
@end

