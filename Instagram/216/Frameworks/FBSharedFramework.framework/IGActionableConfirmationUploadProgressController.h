//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGActionableConfirmationProgressToastHandlerDelegate-Protocol.h>
#import <FBSharedFramework/IGActionableConfirmationToastPersistentListViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGPartialModalSheetListener-Protocol.h>

@class IGActionableConfirmationToastPersistentListViewController, IGActionableConfirmationToastPresenter, IGActionableConfirmationToastViewModel, IGUserSession, NSMutableDictionary, NSString, UIViewController;

@interface IGActionableConfirmationUploadProgressController : NSObject <IGActionableConfirmationToastPersistentListViewControllerDelegate, IGActionableConfirmationProgressToastHandlerDelegate, IGPartialModalSheetListener>
{
    IGUserSession *_userSession;
    IGActionableConfirmationToastPresenter *_toastPresenter;
    UIViewController *_presentingViewController;
    IGActionableConfirmationToastPersistentListViewController *_listViewController;
    NSMutableDictionary *_identifierToActiveToastsMap;
    IGActionableConfirmationToastViewModel *_currentlyQueuedMultiProgressViewModel;
}

- (void).cxx_destruct;
- (id)_getFailureConfigWithIdentifier:(id)arg1 localImage:(id)arg2 isListCell:(_Bool)arg3 retryHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_retryBlockWithUploadIdentifier:(id)arg1 identifierToRemove:(id)arg2 localImage:(id)arg3 retryHandler:(CDUnknownBlockType)arg4;
- (void)_updateListViewConfigs;
- (void)_openBottomSheet;
- (CDUnknownBlockType)_openBottomSheetBlock;
- (id)_multiProgressToastViewModelForState:(unsigned long long)arg1;
- (unsigned long long)_getMultiProgressState;
- (_Bool)_isMultiToastDone;
- (void)_showOrUpdateMultiProgressToast;
- (void)actionableConfirmationToastPersistentListViewController:(id)arg1 didTapRightButtonForIdentifier:(id)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)actionableConfirmationProgressToastHandlerDidFail:(id)arg1 retryHandler:(CDUnknownBlockType)arg2;
- (void)actionableConfirmationProgressToastHandlerDidSucceed:(id)arg1;
- (void)actionableConfirmationProgressToastHandler:(id)arg1 didUpdateProgress:(double)arg2;
- (id)startUploadProgressWithLocalImage:(id)arg1 titleText:(id)arg2;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

