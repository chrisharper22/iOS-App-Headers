//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGBouncyButton, NSString, UIControl, UILabel, UIView;
@protocol IGLayoutElement;

@interface IGShareFooterView : IGPassthroughView
{
    IGBouncyButton *_shareButton;
    IGBouncyButton *_saveAsDraftButton;
    IGBouncyButton *_disabledShareButton;
    UILabel *_shareLabel;
    UILabel *_saveAsDraftLabel;
    UILabel *_disabledShareLabel;
    UIView *_separatorLine;
    id <IGLayoutElement> _layout;
    _Bool _saveAsDraftButtonHidden;
    _Bool _shareButtonEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shareButtonEnabled; // @synthesize shareButtonEnabled=_shareButtonEnabled;
@property(nonatomic) _Bool saveAsDraftButtonHidden; // @synthesize saveAsDraftButtonHidden=_saveAsDraftButtonHidden;
@property(readonly, nonatomic) UIControl *saveAsDraftButton; // @synthesize saveAsDraftButton=_saveAsDraftButton;
@property(readonly, nonatomic) UIControl *shareButton; // @synthesize shareButton=_shareButton;
- (void)_configureButtonsLayout;
@property(copy, nonatomic) NSString *saveAsDraftButtonText;
@property(copy, nonatomic) NSString *shareButtonText;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

