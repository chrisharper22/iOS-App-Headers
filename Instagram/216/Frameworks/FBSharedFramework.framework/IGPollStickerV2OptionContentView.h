//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTextView, UIColor, UILabel;

@interface IGPollStickerV2OptionContentView : UIView
{
    IGTextView *_textView;
    UIView *_clippingContainerView;
    UILabel *_percentSymbolLabel;
    UILabel *_percentageLabel;
    double _percentVisible;
}

- (void).cxx_destruct;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
@property(retain, nonatomic) UILabel *percentageLabel; // @synthesize percentageLabel=_percentageLabel;
@property(readonly, nonatomic) IGTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIColor *fillColor;
@property(nonatomic) _Bool percentSymbolVisible;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

