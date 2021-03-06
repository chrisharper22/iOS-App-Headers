//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, IGRegistrationAgePickerTextField, IGTextButton, NSString, UIDatePicker, UIImageView, UILabel;
@protocol IGRegistrationAgePickerContainerViewDelegate;

@interface IGRegistrationAgePickerContainerView : UIView <IGCoreTextLinkHandler>
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGCoreTextView *_infoTextView;
    IGRegistrationAgePickerTextField *_textField;
    UILabel *_feedbackHintLabel;
    UILabel *_footerLabel;
    UIView *_separatorView;
    IGTextButton *_nextButton;
    UIDatePicker *_datePicker;
    id <IGRegistrationAgePickerContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationAgePickerContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_stringFromDate:(id)arg1;
- (void)_didChangeDateOnDatePicker;
- (void)_didTapNextButton;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

