//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGButton, UILabel;
@protocol IGUsageInsightsDeleteReminderViewDelegate;

@interface IGUsageInsightsDeleteReminderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_separator;
    IGButton *_editButton;
    IGButton *_cancelButton;
    id <IGUsageInsightsDeleteReminderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUsageInsightsDeleteReminderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureWithTimeInterval:(double)arg1 elapsedTimeInterval:(double)arg2;
- (void)_cancelButtonPressed;
- (void)_editButtonPressed;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

