//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGCroppableImageView;

@interface IGHighlightCoverPreviewView : UIView
{
    IGCroppableImageView *_thumbnailView;
    CAShapeLayer *_circleLayer;
    _Bool _shouldMaskToCircle;
}

- (void).cxx_destruct;
- (void)setImageSpecifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setItem:(id)arg1 module:(id)arg2 cropRect:(struct CGRect)arg3;
- (void)setItem:(id)arg1 module:(id)arg2;
- (void)setCover:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shouldMaskToCircle:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

