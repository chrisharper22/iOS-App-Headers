//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGImageView, IGProfilePictureImageView, IGStoryGradientRingView, UILabel;
@protocol IGBloksUserAvatarViewDelegate;

@interface IGBloksUserAvatarView : UIView
{
    IGProfilePictureImageView *_profilePhotoView;
    IGStoryGradientRingView *_gradientRingView;
    double _ringSpacing;
    UIView *_previewImageWrapperView;
    IGGradientView *_shadowGradientView;
    unsigned long long _renderType;
    IGImageView *_previewBackgroundImage;
    UILabel *_usernameTextView;
    id <IGBloksUserAvatarViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBloksUserAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)_viewTapped;
- (void)setBackgroundImageSpecifier:(id)arg1;
- (void)setShouldGrayImagePreview:(_Bool)arg1;
- (void)setLoading:(_Bool)arg1;
- (void)setRingSpec:(id)arg1;
- (void)setRenderType:(unsigned long long)arg1;
- (id)_previewBackgroundImageWrapperView;
- (void)setRingSpacing:(double)arg1;
- (void)setUser:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

