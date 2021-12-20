//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

@class IGBoostTokenlessPromoteDataManager, IGPromoteDataStore, IGPromoteLoginHelper, IGPromoteLoginResponseDataModel, IGUserSession, UIActivityIndicatorView;
@protocol IGTokenlessPromotePro2ProBlockingViewControllerDelegate;

@interface IGTokenlessPromotePro2ProBlockingViewController : IGPromoteViewController
{
    UIActivityIndicatorView *_spinner;
    IGUserSession *_session;
    IGPromoteLoginResponseDataModel *_loginResponseDataModel;
    IGPromoteDataStore *_localDataStore;
    IGBoostTokenlessPromoteDataManager *_graphqlDataManager;
    IGPromoteLoginHelper *_promoteLoginHelper;
    id <IGTokenlessPromotePro2ProBlockingViewControllerDelegate> _delegate;
    IGPromoteDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGPromoteDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) __weak id <IGTokenlessPromotePro2ProBlockingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logErrorEventForEvent:(id)arg1 component:(id)arg2 action:(id)arg3 errorIdentifier:(id)arg4 entryPoint:(id)arg5 flow:(id)arg6 selectedValues:(id)arg7;
- (void)_logEventForEvent:(id)arg1 component:(id)arg2 action:(id)arg3 entryPoint:(id)arg4 flow:(id)arg5 selectedValues:(id)arg6;
- (void)_logFulcrumLoadingTapCancel;
- (void)_logFulcrumLoadingCompleted;
- (void)_logFulcrumLoadingStarted;
- (void)_logFulcrumDisclosureFetchError:(id)arg1;
- (void)_logFulcrumDisclosureFetchSuccess;
- (void)_handleLoginError;
- (void)_handleLoginSuccessWithDataModel:(id)arg1;
- (void)_updateLocalDataStoreWithLoginState:(unsigned long long)arg1;
- (void)_loginAndFallbackToPromoteOld;
- (void)_handleFetchProTPQueryWithSuccess:(_Bool)arg1 responseModel:(id)arg2 error:(id)arg3;
- (void)_fetchProTPQuerySetting;
- (void)_exitAndResetLocalDataStore;
- (void)_setUpNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 dataStore:(id)arg2 loginResponseDataModel:(id)arg3;

@end
