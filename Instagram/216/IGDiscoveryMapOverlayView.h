//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGPlacesMapIconButton, NSArray, UIControl;
@protocol IGDiscoveryMapOverlayViewDelegate;

@interface IGDiscoveryMapOverlayView : UIView
{
    IGPlacesMapIconButton *_backButton;
    IGPlacesMapIconButton *_locationButton;
    IGPlacesMapIconButton *_showModalButton;
    IGPlacesMapIconButton *_cameraButton;
    UIView *_searchSwipeUpView;
    NSArray *_hittableViews;
    id <IGDiscoveryMapOverlayViewDelegate> _delegate;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *locationButton; // @synthesize locationButton=_locationButton;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) __weak id <IGDiscoveryMapOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSwipeModalUp;
- (void)_didTapShowModalButton;
- (void)_didTapCameraButton;
- (void)_didTapLocationButton;
- (void)_didTapBackButton;
- (void)showCameraButton:(_Bool)arg1;
- (void)showModalButton:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;

@end
