//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGQuickCamCaptureButtonDelegate-Protocol.h"
#import "IGScreenCaptureButtonContainerInterface-Protocol.h"

@class FBTimer, IGQuickCamCaptureButton, IGStoryCameraFormatModel, NSString;
@protocol IGScreenCaptureButtonDelegate;

@interface IGScreenCaptureButtonWrapper : NSObject <IGQuickCamCaptureButtonDelegate, IGScreenCaptureButtonContainerInterface>
{
    id <IGScreenCaptureButtonDelegate> _delegate;
    IGQuickCamCaptureButton *_screenCaptureButton;
    IGStoryCameraFormatModel *_normalStoryCameraFormatModel;
    IGStoryCameraFormatModel *_photoboothStoryCameraFormatModel;
    unsigned long long _photoBoothModeState;
    FBTimer *_screenCaptureButtonTimer;
}

- (void).cxx_destruct;
- (void)_enterPhotoBoothMode;
- (void)_handleCaptureButtonRelease;
- (void)captureButtonDidTouchDown;
- (void)captureButtonDidReleaseFromInterruption;
- (void)captureButtonDidReleaseBeforeExpandingFinished;
- (void)captureButtonDidReleaseAfterExpandingFinished;
- (void)captureButtonDidEndExpanding;
- (void)captureButtonDidConfirm;
- (void)captureButtonDidBeginExpanding;
- (void)setPhotoboothProgress:(double)arg1;
- (void)resetPhotoboothMode;
- (id)screenCaptureButton;
- (id)initWithDelegate:(id)arg1 buttonSize:(double)arg2 photoBoothModeEnabled:(_Bool)arg3 normalStoryCameraFormatModel:(id)arg4 photoBoothStoryCameraFormatModel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
