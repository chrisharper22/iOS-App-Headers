//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UIPickerView, UITextField;
@protocol IGFeedRequestParameterPickerCellDelegate;

@interface IGFeedRequestParameterPickerCell : UICollectionViewCell <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSArray *_values;
    NSString *_value;
    UIPickerView *_pickerView;
    UITextField *_textField;
    UIButton *_changeButton;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    id <IGFeedRequestParameterPickerCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedRequestParameterPickerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_doneButtonTapped;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1 value:(id)arg2 values:(id)arg3;
- (void)_hidePicker;
- (void)showPicker;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

