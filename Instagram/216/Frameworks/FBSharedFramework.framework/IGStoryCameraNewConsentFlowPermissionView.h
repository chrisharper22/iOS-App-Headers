//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStoryCameraPermissionViewInterface-Protocol.h>

@class IGStoryCameraPermissionViewConfig, NSString, UIButton, UILabel, UIVisualEffectView;
@protocol IGStoryCameraPermissionViewDelegate;

@interface IGStoryCameraNewConsentFlowPermissionView : UIView <IGStoryCameraPermissionViewInterface>
{
    id <IGStoryCameraPermissionViewDelegate> delegate;
    UILabel *_textLabel;
    UILabel *_subtitleLabel;
    UIVisualEffectView *_cameraBlurOverlay;
    UIButton *_cameraButton;
    UIButton *_microphoneButton;
    UIButton *_cancelButton;
    IGStoryCameraPermissionViewConfig *_config;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryCameraPermissionViewConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(readonly, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, nonatomic) UIVisualEffectView *cameraBlurOverlay; // @synthesize cameraBlurOverlay=_cameraBlurOverlay;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <IGStoryCameraPermissionViewDelegate> delegate; // @synthesize delegate;
- (void)_didTapMicrophoneEnable;
- (void)_didTapCameraEnable;
- (void)refreshViewStateAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

