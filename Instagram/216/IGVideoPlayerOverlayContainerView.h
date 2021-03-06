//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGVideoPlayerOverlayConfiguration, IGVideoPlayerOverlayToolbarView;
@protocol IGVideoPlayerOverlayContainerViewDelegate;

@interface IGVideoPlayerOverlayContainerView : UIView
{
    IGVideoPlayerOverlayToolbarView *_topToolbarView;
    IGVideoPlayerOverlayToolbarView *_bottomToolbarView;
    IGVideoPlayerOverlayConfiguration *_overlayConfiguration;
    id <IGVideoPlayerOverlayContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoPlayerOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) IGVideoPlayerOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)layoutSubviews;
- (void)layoutOverlays;
- (id)init;

@end

