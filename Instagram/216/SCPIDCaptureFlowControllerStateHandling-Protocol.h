//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPIDCaptureFlowControllerState, SCPIDCapturedData;
@protocol SCPIDCaptureFlowControllerStateHandlerDelegate;

@protocol SCPIDCaptureFlowControllerStateHandling <NSObject>
@property(nonatomic) __weak id <SCPIDCaptureFlowControllerStateHandlerDelegate> delegate;
- (SCPIDCaptureFlowControllerState *)nextStateFromIDCaptureConfirmation;
- (SCPIDCaptureFlowControllerState *)nextStateFromIDCaptureWithCapturedData:(SCPIDCapturedData *)arg1;
- (SCPIDCaptureFlowControllerState *)nextStateFromManualIDTypeSelection;
- (SCPIDCaptureFlowControllerState *)nextStateFromPermissionsGranting;
- (SCPIDCaptureFlowControllerState *)nextStateFromOnboarding;
- (SCPIDCaptureFlowControllerState *)nextStateFromInitialized;
- (_Bool)goToPreviousState;
- (_Bool)goToState:(SCPIDCaptureFlowControllerState *)arg1;
- (SCPIDCaptureFlowControllerState *)state;
@end

