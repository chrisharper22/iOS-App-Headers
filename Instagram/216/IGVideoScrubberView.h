//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, FBMetalSurfaceView, IGIGLContext, IGSurfaceView, NSMutableArray, UILabel;
@protocol IGVideoScrubberViewDelegate;

@interface IGVideoScrubberView : UIView
{
    struct CGSize _videoSize;
    IGIGLContext *_iglContext;
    IGSurfaceView *_centerHandleImageView;
    FBMetalSurfaceView *_fbCenterHandleImageViewMetal;
    double _keyPosition;
    id <IGVideoScrubberViewDelegate> _delegate;
    UIView *_frameViewsContainer;
    UIView *_overlayView;
    UIView *_centerHandle;
    NSMutableArray *_frameViews;
    UILabel *_instructionLabel;
    CALayer *_shadowLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) NSMutableArray *frameViews; // @synthesize frameViews=_frameViews;
@property(retain, nonatomic) UIView *centerHandle; // @synthesize centerHandle=_centerHandle;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *frameViewsContainer; // @synthesize frameViewsContainer=_frameViewsContainer;
@property(nonatomic) __weak id <IGVideoScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double keyPosition; // @synthesize keyPosition=_keyPosition;
@property(readonly, nonatomic) FBMetalSurfaceView *fbCenterHandleImageViewMetal; // @synthesize fbCenterHandleImageViewMetal=_fbCenterHandleImageViewMetal;
@property(retain, nonatomic) IGSurfaceView *centerHandleImageView; // @synthesize centerHandleImageView=_centerHandleImageView;
- (void)_updateFrameRects;
- (void)_handleMoveToCenterHandleX:(long long)arg1;
- (double)_positionForX:(double)arg1;
- (long long)_xForPosition:(double)arg1;
- (long long)_scrubbableWidth;
- (long long)_scrubPadding;
- (void)_onPan:(id)arg1;
- (void)_onThumbnailStripTapped:(id)arg1;
- (void)_onTap;
- (void)setThumbnail:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_configureInstructionLabel;
- (void)_configureCenterHandle;
- (void)_configureOverlayView;
- (void)_configureFrameThumbnailViews;
- (void)_configureFramesContainer;
- (void)_configureShadowLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 videoSize:(struct CGSize)arg2 iglContext:(id)arg3;

@end

