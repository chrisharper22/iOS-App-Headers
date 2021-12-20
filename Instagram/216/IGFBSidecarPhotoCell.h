//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFBPostPipelineFilterDelegate-Protocol.h"
#import "IGFBSidecarCellType-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBMetalSurface, FBMetalSurfaceView, IGFBPostPipelineFilter, IGIGLContext, NSString, UIButton, UIImage, UIImageView, UIScrollView, UIView;

@interface IGFBSidecarPhotoCell : UICollectionViewCell <IGFBPostPipelineFilterDelegate, UIScrollViewDelegate, IGFBSidecarCellType>
{
    UIScrollView *_scrollView;
    _Bool _disabled;
    _Bool _shadowHidden;
    _Bool _editButtonHidden;
    UIImage *_image;
    NSString *_filterIdentifier;
    double _filterStrength;
    UIImageView *_imageView;
    UIView *_mediaView;
    UIButton *_editButton;
    IGFBPostPipelineFilter *_postPipelineFilter;
    FBMetalSurfaceView *_surfaceMetalView;
    IGIGLContext *_renderingContext;
    FBMetalSurface *_renderMetalSurface;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBMetalSurface *renderMetalSurface; // @synthesize renderMetalSurface=_renderMetalSurface;
@property(retain, nonatomic) IGIGLContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property(retain, nonatomic) FBMetalSurfaceView *surfaceMetalView; // @synthesize surfaceMetalView=_surfaceMetalView;
@property(retain, nonatomic) IGFBPostPipelineFilter *postPipelineFilter; // @synthesize postPipelineFilter=_postPipelineFilter;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) double filterStrength; // @synthesize filterStrength=_filterStrength;
@property(readonly, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
@property(nonatomic) _Bool editButtonHidden; // @synthesize editButtonHidden=_editButtonHidden;
@property(nonatomic) _Bool shadowHidden; // @synthesize shadowHidden=_shadowHidden;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (id)LX_snapshotView;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)postPipelineFilterDidRender;
- (id)_renderImageForFilter:(id)arg1 strength:(double)arg2;
- (void)_drawIfNeeded;
- (void)setFilterIdentifier:(id)arg1 strength:(double)arg2;
- (void)updateFilterStrength:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_updateShadowVisibility;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)initializeWithIGLContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

