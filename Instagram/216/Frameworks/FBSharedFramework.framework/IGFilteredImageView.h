//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGFilterMediaPhotoViewType-Protocol.h>

@class IGCompositionFilterMetadata, IGImageFilter, NSString, UIImage, UIImageView;

@interface IGFilteredImageView : UIView <IGFilterMediaPhotoViewType>
{
    UIImageView *_imageView;
    IGImageFilter *_imageFilter;
    IGCompositionFilterMetadata *_compositionFilterMetadata;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) IGCompositionFilterMetadata *compositionFilterMetadata; // @synthesize compositionFilterMetadata=_compositionFilterMetadata;
@property(retain, nonatomic) IGImageFilter *imageFilter; // @synthesize imageFilter=_imageFilter;
@property(nonatomic) struct IGCompositionFilterTransform mediaTransform;
@property(readonly, nonatomic) UIImage *filteredImage;
@property(nonatomic) long long contentMode;
- (id)_filterImage:(id)arg1 withFilter:(id)arg2;
- (id)_getSurfaceFromImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

