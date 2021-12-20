//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import <FBSharedFramework/IGTumblrAuthListener-Protocol.h>
#import <FBSharedFramework/UITextFieldDelegate-Protocol.h>

@class IGTextField, NSString, UIBarButtonItem;
@protocol IGServiceHelperLoginProtocol;

@interface IGServiceLoginTableViewController : IGGroupedTableViewController <UITextFieldDelegate, IGTumblrAuthListener>
{
    UIBarButtonItem *_doneButtonItem;
    IGTextField *_usernameField;
    IGTextField *_passwordField;
    NSString *_serviceName;
    long long _serviceUsernameType;
    id <IGServiceHelperLoginProtocol> _serviceHelper;
    CDUnknownBlockType _successCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType successCompletion; // @synthesize successCompletion=_successCompletion;
@property(nonatomic) __weak id <IGServiceHelperLoginProtocol> serviceHelper; // @synthesize serviceHelper=_serviceHelper;
@property(nonatomic) long long serviceUsernameType; // @synthesize serviceUsernameType=_serviceUsernameType;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)_doLogin;
- (_Bool)_canLogin;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configureLoginCell:(id)arg1 forRow:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onTumblrLoginFailedWithError:(id)arg1;
- (void)onTumblrLoginCompleted;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)initWithServiceName:(id)arg1 serviceHelper:(id)arg2 tumblrLoginAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

