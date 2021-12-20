//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStackLayout, NSString, UIImageView, UILabel;

@interface IGInsightsTimeframeHeader : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_chevronImageView;
    IGStackLayout *_stackLayout;
    IGStackLayout *_subtitleStackLayout;
    NSString *_title;
    NSString *_subtitle;
    CDUnknownBlockType _onTapHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType onTapHandler; // @synthesize onTapHandler=_onTapHandler;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_handleTapGesture;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 onTapHandler:(CDUnknownBlockType)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
