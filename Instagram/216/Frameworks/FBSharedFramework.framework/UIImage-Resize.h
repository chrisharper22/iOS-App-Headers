//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (Resize)
- (id)ig_resizableImageWithCenterInsets;
- (struct CGRect)ig_cropRectForOrientation:(struct CGRect)arg1;
- (struct CGAffineTransform)ig_transformForOrientation:(struct CGSize)arg1;
- (_Bool)ig_needTransposeOnSize;
- (id)ig_imageShrunkToScreenWidth;
- (id)ig_resizedImageWithSize:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (struct __CVBuffer *)ig_createCVPixelBufferWithSize:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (id)ig_resizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)ig_resizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2;
- (id)ig_squareThumbnailImageOfSize:(long long)arg1;
- (id)ig_squareThumbnailImageOfSize:(long long)arg1 interpolationQuality:(int)arg2;
- (id)ig_paddedImageOfSize:(struct CGSize)arg1;
- (id)ig_croppedImage:(struct CGRect)arg1;
- (struct CGRect)ig_cropRectForCamera;
- (struct CGImage *)ig_CGImageWithCropRect:(struct CGRect)arg1;
@end

