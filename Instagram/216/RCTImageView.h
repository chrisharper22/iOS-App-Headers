//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTView.h"

@class NSArray, NSString, RCTBridge, RCTImageSource, RCTImageURLLoaderRequest, RCTUIImageViewAnimated, UIImage;
@protocol RCTImageLoaderWithAttributionProtocol;

@interface RCTImageView : RCTView
{
    RCTBridge *_bridge;
    id <RCTImageLoaderWithAttributionProtocol> _imageLoader;
    RCTImageSource *_imageSource;
    RCTImageSource *_pendingImageSource;
    struct CGSize _targetSize;
    _Bool _needsReload;
    RCTUIImageViewAnimated *_imageView;
    RCTImageURLLoaderRequest *_loaderRequest;
    UIImage *_defaultImage;
    long long _renderingMode;
    NSArray *_imageSources;
    double _blurRadius;
    long long _resizeMode;
    NSString *_internal_analyticTag;
    CDUnknownBlockType _onLoadStart;
    CDUnknownBlockType _onProgress;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onPartialLoad;
    CDUnknownBlockType _onLoad;
    CDUnknownBlockType _onLoadEnd;
    struct UIEdgeInsets _capInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onLoadEnd; // @synthesize onLoadEnd=_onLoadEnd;
@property(copy, nonatomic) CDUnknownBlockType onLoad; // @synthesize onLoad=_onLoad;
@property(copy, nonatomic) CDUnknownBlockType onPartialLoad; // @synthesize onPartialLoad=_onPartialLoad;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onProgress; // @synthesize onProgress=_onProgress;
@property(copy, nonatomic) CDUnknownBlockType onLoadStart; // @synthesize onLoadStart=_onLoadStart;
@property(copy, nonatomic) NSString *internal_analyticTag; // @synthesize internal_analyticTag=_internal_analyticTag;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(copy, nonatomic) NSArray *imageSources; // @synthesize imageSources=_imageSources;
@property(nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) struct UIEdgeInsets capInsets; // @synthesize capInsets=_capInsets;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didSetProps:(id)arg1;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)imageLoaderLoadedImage:(id)arg1 error:(id)arg2 forImageSource:(id)arg3 partial:(_Bool)arg4;
- (void)reloadImage;
- (_Bool)shouldChangeImageSource;
- (_Bool)shouldReloadImageSourceAfterResize;
- (id)imageSourceForSize:(struct CGSize)arg1;
- (_Bool)hasMultipleSources;
- (void)clearImageIfDetached;
- (void)cancelAndClearImageLoad;
- (void)cancelImageLoad;
- (id)image;
- (void)setImage:(id)arg1;
- (void)updateWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithBridge:(id)arg1;

@end

