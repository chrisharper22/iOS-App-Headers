//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IGCustomAlertAction, IGTextButton, NSString, UIImage, UIImageView, UILabel;

@interface IGLocationPickerErrorCell : UITableViewCell
{
    NSString *_text;
    NSString *_headline;
    IGCustomAlertAction *_action;
    UIImage *_image;
    UIImageView *_circleImageView;
    UILabel *_headlineView;
    UILabel *_textView;
    IGTextButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGTextButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *headlineView; // @synthesize headlineView=_headlineView;
@property(retain, nonatomic) UIImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) IGCustomAlertAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (void)_handleActionClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

