//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UIImageView, UILabel;
@protocol IGMediaOverlayViewDelegate;

@interface IGMediaOverlayDarkBannerView : UIView
{
    IGTapButton *_tapButton;
    UIImageView *_glyph;
    UIImageView *_chevron;
    UILabel *_titleLabel;
    unsigned long long _bannerType;
    double _verticalMargin;
    _Bool _enableShadow;
    id <IGMediaOverlayViewDelegate> _delegate;
    double _cornerRadius;
    double _horizontalMargin;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableShadow; // @synthesize enableShadow=_enableShadow;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak id <IGMediaOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapButton:(id)arg1;
- (id)_createTitleLabel;
@property(nonatomic) long long maxNumberOfLines; // @dynamic maxNumberOfLines;
- (void)configureWithMediaOverlayModel:(id)arg1 isRevealed:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

