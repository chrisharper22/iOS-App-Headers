//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGStackLayout, UILabel;

@interface IGGuideItemAttachmentDescriptionView : UIView
{
    IGCoreTextView *_titleLabel;
    UILabel *_secondarySubtitleLabel;
    UILabel *_subtitleLabel;
    IGStackLayout *_layout;
}

- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 secondarySubtitle:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

