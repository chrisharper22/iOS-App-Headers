//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGImageView, IGStackLayout, IGStringStyle, IGStyledString, IGUpcomingEvent, UIImageView;
@protocol IGProfileUpcomingEventsViewDelegate;

@interface IGProfileUpcomingEventsView : UIView
{
    IGCoreTextView *_titleView;
    IGCoreTextView *_subtitleView;
    IGCoreTextView *_extraSubtitleView;
    UIImageView *_calendarIconView;
    UIImageView *_chevronView;
    IGImageView *_postImageView;
    double _horizontalPadding;
    IGStackLayout *_layout;
    _Bool _hasFundraiser;
    _Bool _canShowExtraSubtitle;
    IGStyledString *_titleStyledString;
    IGStringStyle *_titleStringStyle;
    IGStyledString *_subtitleStyledString;
    IGStyledString *_extraSubtitleStyledString;
    IGStringStyle *_subtitleStringStyle;
    IGUpcomingEvent *_upcomingEvent;
    id <IGProfileUpcomingEventsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProfileUpcomingEventsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_postImageTap;
- (void)configureWithUser:(id)arg1 upcomingEvent:(id)arg2 horizontalPadding:(double)arg3 shouldShowExtraSubtitle:(_Bool)arg4;
- (void)layoutSubviews;
- (double)heightForWidth:(double)arg1 shouldShowExtraSubtitle:(_Bool)arg2;
- (id)init;

@end

