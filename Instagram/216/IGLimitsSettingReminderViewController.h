//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class IGBottomButtonsView, NSArray, NSString, UIPickerView;
@protocol IGLimitsSettingReminderViewControllerDelegate;

@interface IGLimitsSettingReminderViewController : IGViewController <UIPickerViewDelegate, UIPickerViewDataSource, IGGestureHandler>
{
    UIPickerView *_pickerView;
    IGBottomButtonsView *_bottomView;
    NSArray *_units;
    NSArray *_ranges;
    unsigned long long _selectedUnit;
    long long _selectedValueRow;
    id <IGLimitsSettingReminderViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLimitsSettingReminderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)preferredContentSize;
- (_Bool)canRespondToGesture:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)_didTapButton;
- (void)_configureBottomView;
- (void)_configurePickerView;
- (void)_updateSelectedValuesWithDuration:(long long)arg1;
- (void)_setupRangesAndUnits:(long long)arg1;
- (long long)_valueFromRow:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDuration:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

