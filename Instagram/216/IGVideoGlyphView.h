//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface IGVideoGlyphView : UIView
{
    UIImageView *_innerIcon;
    UIImageView *_containerIcon;
}

- (void).cxx_destruct;
- (void)_animateLayer:(id)arg1;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)setAnimating:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 innerIconImage:(id)arg2 containerIconImage:(id)arg3;

@end
