//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGButton, IGGradientView, IGTextField, UIImageView;

@interface IGEditProfileConfirmationView : UIView
{
    IGButton *_confirmButton;
    IGTextField *_textField;
    UIImageView *_exclamationMark;
    IGGradientView *_confirmButtonGradient;
}

+ (id)_confirmButtonWithAsset:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IGGradientView *confirmButtonGradient; // @synthesize confirmButtonGradient=_confirmButtonGradient;
@property(retain, nonatomic) UIImageView *exclamationMark; // @synthesize exclamationMark=_exclamationMark;
@property(retain, nonatomic) IGTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) IGButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void)layoutSubviews;
- (id)initWithTextField:(id)arg1;

@end

