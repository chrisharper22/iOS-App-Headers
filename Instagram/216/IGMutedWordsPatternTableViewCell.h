//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class IGTapButton, NSString, UITextField, UIView;
@protocol IGMutedWordsPatternTableViewCellDelegate;

@interface IGMutedWordsPatternTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
    IGTapButton *_clearButton;
    UIView *_separatorView;
    id <IGMutedWordsPatternTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMutedWordsPatternTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_clearContent;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)updateWithPattern:(id)arg1;
@property(readonly, nonatomic) NSString *pattern;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

