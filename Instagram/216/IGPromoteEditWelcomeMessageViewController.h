//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGActionSheetControllerDelegate-Protocol.h"
#import "IGDSPromoteTextInputSectionControllerDelegate-Protocol.h"
#import "IGLabelSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGNavigationControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGDSPromoteTextInputViewModel, IGListAdapter, IGPromoteDataStore, IGUserSession, NSString, UIActivityIndicatorView, UICollectionView;
@protocol IGPromoteWelcomeMessageDelegate;

@interface IGPromoteEditWelcomeMessageViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGLabelSectionControllerDelegate, IGDSPromoteTextInputSectionControllerDelegate, IGNavigationControllerDelegate, IGActionSheetControllerDelegate>
{
    IGUserSession *_userSession;
    IGPromoteDataStore *_dataStore;
    IGBoostPostLogger *_logger;
    UICollectionView *_contentView;
    IGListAdapter *_adapter;
    IGDSPromoteTextInputViewModel *_editMessageViewModel;
    IGPromoteDataStore *_localDataStore;
    UIActivityIndicatorView *_spinner;
    _Bool _isWelcomeMessageFAQPreivewEnabledPeek;
    id <IGPromoteWelcomeMessageDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteWelcomeMessageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheetControllerDidDismiss:(id)arg1;
- (void)didSelectLabelSectionController:(id)arg1;
- (void)promoteTextInputSectionController:(id)arg1 didChangeTextFieldInModel:(id)arg2 userInput:(id)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_onSaveBarButtonTapped;
- (void)_onBackBarButtonTapped;
- (void)_saveLocalState;
- (void)_handleSuccess;
- (void)_handleServerError:(id)arg1;
- (void)_reloadView;
- (void)_showAlertDialog;
- (void)_setUpContentView;
- (void)_setUpNavigationBar;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 dataStore:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

