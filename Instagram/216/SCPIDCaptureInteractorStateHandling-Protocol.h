//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCPIDCaptureInteractorStateHandlerDelegate;

@protocol SCPIDCaptureInteractorStateHandling <NSObject>
@property(readonly, nonatomic) _Bool isManualCaptureActive;
@property(nonatomic) __weak id <SCPIDCaptureInteractorStateHandlerDelegate> delegate;
- (_Bool)isAutoCaptureOn;
- (_Bool)canGoToManualCapture;
- (_Bool)goToState:(unsigned long long)arg1;
- (unsigned long long)state;
@end

