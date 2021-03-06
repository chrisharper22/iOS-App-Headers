//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer, NSArray, UIImageView;

@interface IGNametagBackgroundSelfieContentView : UIView
{
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIView *_cameraPreviewView;
    UIImageView *_captureImageView;
    UIImageView *_stickerView;
    UIImageView *_cameraMaskView;
    long long _selectedStickerIndex;
    NSArray *_configurations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *configurations; // @synthesize configurations=_configurations;
@property(nonatomic) long long selectedStickerIndex; // @synthesize selectedStickerIndex=_selectedStickerIndex;
- (id)_cameraMaskImage;
- (id)maskedCameraPreviewImage;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)cameraCutOutSize;
- (void)setImage:(id)arg1;
- (void)showCameraPreview;
- (id)initWithPreviewLayer:(id)arg1;

@end

