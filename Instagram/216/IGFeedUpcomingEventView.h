//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCollectionViewCell.h>

@class IGImageView, IGStackLayout, IGTextButton, UILabel;
@protocol IGLayoutElement;

@interface IGFeedUpcomingEventView : IGCollectionViewCell
{
    IGImageView *_additionalInfoIconImageView;
    UILabel *_titleText;
    UILabel *_dateLabel;
    UILabel *_additionalInfoLabel;
    id <IGLayoutElement> _layout;
    IGStackLayout *_verticalLayout;
    IGImageView *_reminderIconImageView;
    IGTextButton *_viewPostButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTextButton *viewPostButton; // @synthesize viewPostButton=_viewPostButton;
- (void)updateAlertIconsWithReminderOn:(_Bool)arg1;
- (void)configureWithTitle:(id)arg1 dateString:(id)arg2 additionalInfoString:(id)arg3 shouldShowViewPostButton:(_Bool)arg4 isSubscribersModeLive:(_Bool)arg5 iconType:(unsigned long long)arg6 reminderOn:(_Bool)arg7;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
