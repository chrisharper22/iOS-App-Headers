//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGImageView;

@interface IGPlacesMapImagePinView : UIView
{
    double _tipDimension;
    CAShapeLayer *_backgroundShape;
    IGImageView *_imageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGImageView *imageView; // @synthesize imageView=_imageView;
- (void)_recreateBackgroundShape;
- (void)layoutSubviews;
- (id)initWithTipDimension:(double)arg1;

@end

