//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class UIColor, UIImage, UIView;

@interface IGNavigationBar : UINavigationBar
{
    _Bool _maintainBarHeightWhenStatusBarHidden;
    _Bool _overlayHidesShadowImage;
    double _overlayAlpha;
    long long _appearance;
    UIView *_contentOverlayView;
    UIView *_dividerLine;
    struct UIEdgeInsets _backgroundViewInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(retain, nonatomic) UIView *contentOverlayView; // @synthesize contentOverlayView=_contentOverlayView;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool overlayHidesShadowImage; // @synthesize overlayHidesShadowImage=_overlayHidesShadowImage;
@property(nonatomic) struct UIEdgeInsets backgroundViewInsets; // @synthesize backgroundViewInsets=_backgroundViewInsets;
@property(nonatomic) _Bool maintainBarHeightWhenStatusBarHidden; // @synthesize maintainBarHeightWhenStatusBarHidden=_maintainBarHeightWhenStatusBarHidden;
@property(nonatomic) double overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property(readonly, nonatomic) struct UIEdgeInsets dividerLineViewInsets;
- (void)setDividerLineHidden:(_Bool)arg1;
@property(retain, nonatomic) UIImage *shadowImage; // @dynamic shadowImage;
@property(retain, nonatomic) UIColor *overlayColor;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

