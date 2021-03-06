//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface IGAdInformationCenterNavigationBarView : UIView
{
    UIView *_backgroundView;
    UIView *_borderView;
    UIView *_defaultButtonsContainerView;
    _Bool _opaque;
    _Bool _shouldUseWhiteTintWhileTransparent;
    UIButton *_closeButton;
    UIButton *_moreButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool shouldUseWhiteTintWhileTransparent; // @synthesize shouldUseWhiteTintWhileTransparent=_shouldUseWhiteTintWhileTransparent;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
- (void)_configureTint;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

