//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTVSeparatorView, UIImageView, UILabel, UITextField;

@interface IGTVMetadataInputView : UIView
{
    UILabel *_requiredLabel;
    UIImageView *_errorIconImageView;
    IGTVSeparatorView *_separator;
    _Bool _showsRequiredError;
    UITextField *_textField;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsRequiredError; // @synthesize showsRequiredError=_showsRequiredError;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) struct _NSRange selectedRange;
- (void)_updateRequiredErrorVisibility;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithPlaceholderText:(id)arg1;

@end

