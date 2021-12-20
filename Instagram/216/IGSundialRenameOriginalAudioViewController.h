//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTextFieldDelegate-Protocol.h"

@class IGActionableConfirmationToastPresenter, IGAsyncTask, IGInformativeTextView, IGSundialOriginalAudioAsset, IGUserSession, NSMutableDictionary, NSString, UIBarButtonItem, UILabel;
@protocol IGSundialRenameOriginalAudioViewControllerDelegate;

@interface IGSundialRenameOriginalAudioViewController : IGViewController <IGTextFieldDelegate>
{
    IGInformativeTextView *_renameAudioTextView;
    UILabel *_renameAudioDescription;
    UIBarButtonItem *_doneButtonItem;
    IGSundialOriginalAudioAsset *_originalAudioAsset;
    IGUserSession *_userSession;
    NSMutableDictionary *_isValidTitleRequests;
    IGActionableConfirmationToastPresenter *_toastPresenter;
    IGAsyncTask *_saveOriginalAudioTitleRequest;
    id <IGSundialRenameOriginalAudioViewControllerDelegate> _delegate;
    NSString *_analyticsModule;
    NSString *_productName;
    NSString *_surface;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(nonatomic) __weak id <IGSundialRenameOriginalAudioViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidChange:(id)arg1;
- (void)_displayFailureAlertOnSave;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (id)title;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithOriginalAudioName:(id)arg1 userSession:(id)arg2;
- (id)initWithOriginalAudioAsset:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

