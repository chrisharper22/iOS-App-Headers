//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView, UILabel;

@interface IGDirectAvatarDotView : UIView
{
    UIView *_containerView;
    UIView *_dotView;
    UILabel *_labelView;
    UIImageView *_imageView;
    double _radius;
    double _imageInset;
    double _padding;
    double _shadowOpacity;
    _Bool _expandToFitText;
    _Bool _contentsAreHidden;
    UIImage *_addGroupStoryImage;
    UIColor *_addGroupStoryColor;
}

- (void).cxx_destruct;
- (id)_renderEmptyStoryImageWithColor:(id)arg1;
- (id)_imageForImageAsset:(unsigned long long)arg1 color:(id)arg2;
- (void)_showLayerShadow:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showContents:(_Bool)arg1;
- (void)_removeAllAnimations;
- (void)_initDotImageViewsIfNecessary;
- (void)_initDotViewsIfNecessary;
- (void)_initContainerViewIfNecessary;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)hideContentsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showContentsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureViewWithRadius:(double)arg1 imageInset:(double)arg2 padding:(double)arg3;
- (void)animateDotView:(_Bool)arg1;
- (void)configureWithSpec:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

