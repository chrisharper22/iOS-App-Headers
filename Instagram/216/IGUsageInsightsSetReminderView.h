//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGButton, UIDatePicker;
@protocol IGUsageInsightsSetReminderViewDelegate;

@interface IGUsageInsightsSetReminderView : UIView
{
    UIDatePicker *_timePicker;
    UIView *_pickerButtonSeparator;
    IGButton *_submitButton;
    id <IGUsageInsightsSetReminderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUsageInsightsSetReminderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureWithTimeInterval:(double)arg1;
- (void)_datePickerValueChanged:(id)arg1;
- (void)_submitButtonClicked;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

