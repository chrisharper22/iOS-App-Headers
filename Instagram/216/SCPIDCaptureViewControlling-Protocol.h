//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCPIDCapturePresenterDelegate-Protocol.h"

@protocol SCPFrameProviding, SCPIDCapturePresenting, SCPIDCaptureViewControllerDelegate;

@protocol SCPIDCaptureViewControlling <SCPIDCapturePresenterDelegate>
@property(retain, nonatomic) id <SCPFrameProviding> frameProvider;
@property(nonatomic) __weak id <SCPIDCaptureViewControllerDelegate> delegate;
@property(retain, nonatomic) id <SCPIDCapturePresenting> capturePresenter;
@end

