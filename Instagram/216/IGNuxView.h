//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGImageView, UIButton, UILabel;
@protocol IGNuxViewDelegate;

@interface IGNuxView : UIView
{
    IGImageView *_imageView;
    UILabel *_textLabel;
    UIButton *_closeButton;
    id <IGNuxViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGNuxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_closeButtonTapped;
- (void)configureWithImageSpecifier:(id)arg1 text:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

