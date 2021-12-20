//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UIImageView, UILabel, UIVisualEffectView;

@interface IGSundialViewerReportVideoOverlay : UIView
{
    UIImageView *_checkmarkImageView;
    UIVisualEffectView *_visualEffectView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_explanationLabel;
    _Bool _isReportReasonSpam;
    IGTapButton *_showPostButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReportReasonSpam; // @synthesize isReportReasonSpam=_isReportReasonSpam;
@property(readonly, nonatomic) IGTapButton *showPostButton; // @synthesize showPostButton=_showPostButton;
- (void)prepareForReuse;
- (void)setBlurOverlayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

