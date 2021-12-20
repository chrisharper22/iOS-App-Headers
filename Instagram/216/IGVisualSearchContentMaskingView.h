//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, IGGradientView, IGUserSession;
@protocol KFLayerProtocol;

@interface IGVisualSearchContentMaskingView : UIView
{
    IGUserSession *_userSession;
    CALayer<KFLayerProtocol> *_scanmarkLayer;
    UIView *_contentView;
    IGGradientView *_gradientView;
    _Bool _hasShownAnimation;
    struct CGRect _scannedBounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect scannedBounds; // @synthesize scannedBounds=_scannedBounds;
- (void)_configScanmarkLayerWithAsset:(id)arg1;
- (void)_loadAnimationDataAsset;
- (void)_createContentView;
- (void)_createGradientBackground;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

@end

