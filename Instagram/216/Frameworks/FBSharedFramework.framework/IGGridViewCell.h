//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGGalleryGridCellOverlayView, NSNumber, NSString, PHImageManager, PHImageRequestOptions, UIImageView;

@interface IGGridViewCell : UICollectionViewCell
{
    IGGalleryGridCellOverlayView *_overlayView;
    UIImageView *_sidecarGlyphImageView;
    NSString *_mediaAccessibilityDescription;
    NSString *_positionIndicator;
    _Bool _isFavorite;
    _Bool _inICloud;
    _Bool _disabled;
    _Bool _showCheckmarks;
    _Bool _canShowFavorites;
    int _requestID;
    id _asset;
    PHImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    unsigned long long _assetNumber;
    UIImageView *_imageView;
    struct CGSize _thumbnailSize;
}

- (void).cxx_destruct;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool canShowFavorites; // @synthesize canShowFavorites=_canShowFavorites;
@property(nonatomic) unsigned long long assetNumber; // @synthesize assetNumber=_assetNumber;
@property(nonatomic) _Bool showCheckmarks; // @synthesize showCheckmarks=_showCheckmarks;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) id asset; // @synthesize asset=_asset;
- (id)_dateFormatter;
- (id)accessibilityLabel;
- (void)setAccessibilityLabelWithPosition:(long long)arg1 ofTotal:(long long)arg2;
- (void)_setMediaAccessibilityDescription;
@property(readonly, nonatomic) NSNumber *duration;
@property(readonly, nonatomic) _Bool isAssetPhoto;
- (void)_updateLabelVisibility;
- (void)_loadImageFromAsset;
@property(nonatomic) _Bool showSelectedOverlay;
- (void)setSelected:(_Bool)arg1;
- (void)_cancelImageRequest;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
