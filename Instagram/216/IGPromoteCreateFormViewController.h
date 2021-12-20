//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGListAdapterDataSource-Protocol.h"
#import "IGPromoteCheckMarkListSectionControllerDelegate-Protocol.h"
#import "IGPromoteChevronListSectionControllerDelegate-Protocol.h"
#import "IGPromoteLeadGenCustomQuestionViewControllerDelegate-Protocol.h"
#import "IGPromoteLeadGenPreviewFormViewControllerDelegate-Protocol.h"
#import "IGPromoteLeadGenTextFieldSectionControllerDelegate-Protocol.h"
#import "IGPromoteTitleSubtitleSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGHeadlineViewModel, IGListAdapter, IGPromoteDataStore, IGPromoteLeadGenTextFieldViewModel, IGPromoteTitleSubtitleViewModel, IGUserSession, NSMutableArray, NSMutableSet, NSString, UICollectionView;
@protocol IGPromoteLeadGenCreateFormViewControllerDelegate;

@interface IGPromoteCreateFormViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteLeadGenTextFieldSectionControllerDelegate, IGPromoteTitleSubtitleSectionControllerDelegate, IGPromoteCheckMarkListSectionControllerDelegate, IGPromoteLeadGenCustomQuestionViewControllerDelegate, IGPromoteChevronListSectionControllerDelegate, IGPromoteLeadGenPreviewFormViewControllerDelegate>
{
    IGUserSession *_session;
    UICollectionView *_contentView;
    IGListAdapter *_adapter;
    IGPromoteDataStore *_dataStore;
    IGBoostPostLogger *_logger;
    NSMutableSet *_selectedFormQuestions;
    NSMutableArray *_customQuestions;
    IGHeadlineViewModel *_headlineViewModel;
    IGPromoteLeadGenTextFieldViewModel *_formNameTextInputViewModel;
    IGPromoteTitleSubtitleViewModel *_customQuestionsTitleSubtitleViewModel;
    IGPromoteTitleSubtitleViewModel *_addQuestionViewModel;
    NSMutableArray *_presetQuestionsViewModels;
    IGPromoteDataStore *_localDataStore;
    id <IGPromoteLeadGenCreateFormViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteLeadGenCreateFormViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)promoteLeadGenPreviewFormViewControllerDidFinishCreatingForm:(id)arg1;
- (void)promoteChevronListSectionController:(id)arg1 didTapAccessoryForCellWithViewModel:(id)arg2;
- (void)promoteChevronListSectionController:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (void)promoteLeadGenCustomQuestionDidDeleteQuestion:(id)arg1;
- (void)promoteLeadGenCustomQuestionDidFinishEditingQuestion:(id)arg1 originalQuestion:(id)arg2;
- (void)promoteLeadGenCustomQuestionDidFinishCreatingQuestion:(id)arg1;
- (void)promoteCheckMarkListSectionController:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapCellTitleWithViewModel:(id)arg2;
- (void)promoteLeadGenTextFieldSectionController:(id)arg1 didChangeTextFieldInModel:(id)arg2 userInput:(id)arg3;
- (void)_onRightBarButtonTapped;
- (void)_onBackBarButtonTapped;
- (void)_showMissingFormNameError;
- (void)_showChooseCustomQuestionTypeActionSheet;
- (void)_reviewLeadForm;
- (void)_showDiscardCreateFormConfirmationExitActionSheet;
- (id)_questions;
- (_Bool)_canAddQuestion;
- (_Bool)_shouldShowExitConfirmationActionSheet;
- (_Bool)_canCreateForm;
- (void)_toggleSelectionWithSelectedQuestion:(long long)arg1;
- (void)_reloadView;
- (void)_updateViewModels;
- (void)_setUpContentView;
- (id)_rightBarButtonText;
- (void)_setUpNavigationBar;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1 dataStore:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
