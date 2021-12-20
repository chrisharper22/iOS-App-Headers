//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGImageView;

@interface IGMultiImageThumbnailView : UIView
{
    IGImageView *_topLeftImage;
    IGImageView *_topRightImage;
    IGImageView *_bottomLeftImage;
    IGImageView *_bottomRightImage;
    CAShapeLayer *_topLeftImageBorderLayer;
    CAShapeLayer *_topRightImageBorderLayer;
    CAShapeLayer *_bottomLeftImageBorderLayer;
    CAShapeLayer *_bottomRightImageBorderLayer;
    _Bool _shouldShowBorder;
    _Bool _shouldShowDivider;
    _Bool _shouldShowRoundCorners;
}

- (void).cxx_destruct;
- (void)_cleanUpAllBorders;
- (id)_addBorderForImageView:(id)arg1 roundCorner:(unsigned long long)arg2;
- (id)_imageView;
- (void)configureWithTopLeftImageURL:(id)arg1 topRightImageURL:(id)arg2 bottomLeftImageURL:(id)arg3 bottomRightImageURL:(id)arg4 shouldShowBorder:(_Bool)arg5 shouldShowDivider:(_Bool)arg6 shouldShowRoundCorners:(_Bool)arg7 imageSpecifierModule:(id)arg8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
