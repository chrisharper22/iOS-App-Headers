//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectMessageSendingListener-Protocol.h"
#import "IGDirectPollMessageVotingCellDelegate-Protocol.h"
#import "IGDirectThreadThemeListener-Protocol.h"
#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IGDirectOutgoingMessageSendAttribution, IGDirectPollMessageDetails, IGDirectPollMessageLogger, IGDirectPollMessageService, IGDirectThreadKey, IGDirectThreadTheme, IGKeyboardObserver, IGLoggerThreadInfo, IGSimpleButton, IGUserSession, NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UITableView;
@protocol IGDirectMessageSending, IGDirectPollMessageVotingDelegate;

@interface IGDirectPollMessageVotingViewController : IGViewController <IGDirectMessageSendingListener, IGDirectPollMessageVotingCellDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, UITableViewDelegate, UITableViewDataSource, IGDirectThreadThemeListener>
{
    NSString *_pollId;
    long long _initialOptionsCount;
    struct CGSize _initialPreferredSize;
    IGDirectPollMessageService *_pollMessageService;
    IGDirectPollMessageLogger *_pollMessageLogger;
    id <IGDirectMessageSending> _messageSender;
    IGDirectOutgoingMessageSendAttribution *_sendAttribution;
    IGDirectThreadKey *_threadKey;
    IGDirectThreadTheme *_threadTheme;
    IGUserSession *_userSession;
    UITableView *_tableView;
    IGSimpleButton *_submitButton;
    UIActivityIndicatorView *_mainSpinner;
    UIActivityIndicatorView *_submitButtonSpinner;
    _Bool _isLoading;
    IGDirectPollMessageDetails *_pollDetails;
    NSArray *_initialVotesForExistingOptions;
    NSMutableArray *_votesForExistingOptions;
    NSMutableArray *_newOptions;
    NSMutableArray *_votesForNewOptions;
    IGKeyboardObserver *_keyboardObserver;
    _Bool _keyboardIsVisible;
    IGLoggerThreadInfo *_threadInfo;
    id <IGDirectPollMessageVotingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectPollMessageVotingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showActivityOnSubmitButton:(_Bool)arg1;
- (void)_updateSubmitButtonState;
- (void)_appendEmptyOptionToTable;
- (double)_currentBottomInset;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)threadViewDidUpdateTheme:(id)arg1;
- (void)outgoingSecureMessageWillSendForThreadTarget:(id)arg1;
- (void)outgoingMessageWithPayload:(id)arg1 didFailToSendWithError:(id)arg2 manualRetryPermitted:(_Bool)arg3;
- (void)outgoingMessagePayloadSuccessfullySent:(id)arg1;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)_didTapSubmit:(id)arg1;
- (void)votingCellDidTapFacepile:(id)arg1;
- (void)votingCellDidReturn:(id)arg1 withOption:(id)arg2;
- (void)votingCellDidTapClearButton:(id)arg1;
- (void)votingCell:(id)arg1 didUpdateOption:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPollId:(id)arg1 initialOptionsCount:(long long)arg2 pollMessageService:(id)arg3 pollMessageLogger:(id)arg4 messageSender:(id)arg5 sendAttribution:(id)arg6 threadKey:(id)arg7 messageMetadata:(id)arg8 userSession:(id)arg9 threadInfo:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

