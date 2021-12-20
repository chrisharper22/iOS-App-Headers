//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDSPromoteTextInputSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPromoteTitleSubtitleSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGDSPromoteTextInputViewModel, IGListAdapter, IGPromoteTitleSubtitleViewModel, IGUserSession, NSString, UICollectionView;
@protocol IGServiceShopsCreateCustomQuestionViewControllerDelegate;

@interface IGServiceShopsCreateCustomQuestionViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteTitleSubtitleSectionControllerDelegate, IGDSPromoteTextInputSectionControllerDelegate>
{
    IGUserSession *_session;
    IGListAdapter *_adapter;
    UICollectionView *_contentView;
    NSString *_entrypoint;
    NSString *_originalQuestionString;
    NSString *_placeholderString;
    IGDSPromoteTextInputViewModel *_textInputViewModel;
    IGPromoteTitleSubtitleViewModel *_deleteQuestionViewModel;
    id <IGServiceShopsCreateCustomQuestionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGServiceShopsCreateCustomQuestionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)_contentInset;
- (_Bool)_isTextViewNotEmpty;
- (void)_updateRightBarButton;
- (void)_reloadView;
- (void)_deleteQuestion;
- (void)_presentDeleteConfirmationDialog;
- (_Bool)_isEditMode;
- (void)_didTapAddButton;
- (void)_didTapBackButton;
- (void)_setupContentView;
- (void)_setupNavigationBar;
- (void)_setupViewModels;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapCellTitleWithViewModel:(id)arg2;
- (void)promoteTextInputSectionController:(id)arg1 didChangeTextFieldInModel:(id)arg2 userInput:(id)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 originalQuestionString:(id)arg2 placeholderString:(id)arg3 entrypoint:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

