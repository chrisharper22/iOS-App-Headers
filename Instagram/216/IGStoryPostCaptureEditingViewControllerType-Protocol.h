//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGStoryPostCaptureEditingViewControllerProtocol-Protocol.h"

@class NSArray, NSString, UIView;
@protocol IGStoryMediaCompositionEditingControlsOverlayViewProtocol, IGStoryPostCaptureEditingViewControllerDelegate;

@protocol IGStoryPostCaptureEditingViewControllerType <IGStoryPostCaptureEditingViewControllerProtocol>
@property(nonatomic) _Bool shouldImmediatelyPresentShareSheet;
@property(retain, nonatomic) NSArray *captureToolsForLogging;
@property(copy, nonatomic) NSString *sendButtonText;
@property(readonly, nonatomic) UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerDelegate> delegate;
@end

