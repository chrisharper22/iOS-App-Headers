//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPFaceAlignment, SCPSelfieCaptureInteractorState;
@protocol SCPSelfieCaptureInteractorStateHandling;

@protocol SCPSelfieCaptureInteractorStateHandlerDelegate <NSObject>
- (void)selfieCaptureInteractorStateHandler:(id <SCPSelfieCaptureInteractorStateHandling>)arg1 didChangeFaceAlignment:(SCPFaceAlignment *)arg2;
- (void)selfieCaptureInteractorStateHandler:(id <SCPSelfieCaptureInteractorStateHandling>)arg1 didChangeStateFromState:(SCPSelfieCaptureInteractorState *)arg2 toState:(SCPSelfieCaptureInteractorState *)arg3;
@end
