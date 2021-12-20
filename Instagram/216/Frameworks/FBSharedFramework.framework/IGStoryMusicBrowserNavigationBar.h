//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBouncyButton, NSString, UIControl, UILabel;
@protocol IGStoryMusicBrowserNavigationBarDelegate;

@interface IGStoryMusicBrowserNavigationBar : UIView
{
    IGBouncyButton *_titleBouncyButton;
    UILabel *_titleLabel;
    id <IGStoryMusicBrowserNavigationBarDelegate> _delegate;
    UIControl *_backButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <IGStoryMusicBrowserNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setTitleAlpha:(double)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *title;
- (void)_didTapBackground;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
