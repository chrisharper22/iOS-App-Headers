//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGLeadGenCollectionViewDynamicSizingCell-Protocol.h"
#import "IGLeadGenQuestionCell-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IGLeadGenInfoFieldDataViewModel, NSString, UILabel, UIPickerView, UITextField, UIView;
@protocol IGLeadGenQuestionCellDelegate;

@interface IGLeadGenQuestionSelectionCell : UICollectionViewCell <UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate, IGLeadGenQuestionCell, IGLeadGenCollectionViewDynamicSizingCell>
{
    UIView *_hairline;
    UILabel *_questionView;
    UIPickerView *_pickerView;
    UITextField *_answerView;
    UILabel *_errorMessage;
    long long _pickedRow;
    IGLeadGenInfoFieldDataViewModel *_viewModel;
    id <IGLeadGenQuestionCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_updateErrorMessageView;
- (void)_didFinishPick;
- (struct CGSize)dynamicSizeWithConstrainingSize:(struct CGSize)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)configureWithModel:(id)arg1 delegate:(id)arg2;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

