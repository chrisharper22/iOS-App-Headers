//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPlainTableViewController.h>

#import "IGTextFieldDelegate-Protocol.h"

@class IGEditProfileCustomGenderTableViewCell, IGListItemView, IGTableLayoutSpec, IGUserSession, NSArray, NSString, UIBarButtonItem;
@protocol IGEditProfileGenderViewControllerDelegate;

@interface IGEditProfileGenderViewController : IGPlainTableViewController <IGTextFieldDelegate>
{
    IGUserSession *_userSession;
    long long _selectedGender;
    NSArray *_genderOptions;
    IGTableLayoutSpec *_layoutSpec;
    NSString *_customGenderString;
    UIBarButtonItem *_doneButton;
    IGEditProfileCustomGenderTableViewCell *_customGenderSizingCell;
    IGListItemView *_genderSizingCell;
    long long _initialSelectedGender;
    NSString *_initialCustomGenderString;
    id <IGEditProfileGenderViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGEditProfileGenderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_hasUnsavedChanges;
- (void)_updateDoneButtonEnabledState;
- (void)_setDoneButtonLoading:(_Bool)arg1;
- (void)_didTapDoneButton;
- (void)_didTapBackButton;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 selectedGender:(long long)arg2 customGenderString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

