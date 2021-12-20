//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UIImageView, UILabel;
@protocol IGMediaOverlayViewDelegate;

@interface IGMediaOverlayBannerView : UIView
{
    IGTapButton *_tapButton;
    UIImageView *_glyph;
    UIImageView *_chevron;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_upperLineView;
    UIView *_lowerLineView;
    _Bool _shouldUseFullWidthLineView;
    unsigned long long _bannerType;
    id <IGMediaOverlayViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMediaOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapButton:(id)arg1;
- (id)_createSubtitleLabel;
- (id)_createTitleLabel;
- (void)configureWithMediaOverlayModel:(id)arg1 isRevealed:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
