//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIActivityIndicatorView, UIColor, UIImage, UIImageView, UILabel;

@interface IGStoryViewerLabeledFooterButton : UIControl
{
    UIImage *_image;
    UIImage *_selectedImage;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityView;
    _Bool _loading;
    double _labelMaxWidth;
    NSString *_title;
    NSString *_selectedTitle;
    struct UIEdgeInsets _tapPadding;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double labelMaxWidth; // @synthesize labelMaxWidth=_labelMaxWidth;
@property(nonatomic) struct UIEdgeInsets tapPadding; // @synthesize tapPadding=_tapPadding;
- (void)_updateTitleText:(id)arg1;
- (void)setLoading:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIColor *tintColor;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2;
- (id)initWithImage:(id)arg1;

@end

