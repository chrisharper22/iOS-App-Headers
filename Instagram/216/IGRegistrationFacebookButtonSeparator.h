//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IGRegistrationFacebookButtonSeparator : UIView
{
    UILabel *_textLabel;
    UIView *_lineLeft;
    UIView *_lineRight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineRight; // @synthesize lineRight=_lineRight;
@property(retain, nonatomic) UIView *lineLeft; // @synthesize lineLeft=_lineLeft;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (id)_createTextLabelWithColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIsUsedOnDarkBackground:(_Bool)arg1;

@end
