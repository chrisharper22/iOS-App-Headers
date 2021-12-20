//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGProfilePictureImageView, UIControl, UIImageView, UILabel;

@interface IGUserHeaderView : UIView
{
    UIControl *_followButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGProfilePictureImageView *_imageView;
    UIImageView *_verifiedImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(retain, nonatomic) IGProfilePictureImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIControl *followButton; // @synthesize followButton=_followButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

