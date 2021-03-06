//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPromoteCheckMarkSectionControllerDeleagate-Protocol.h"
#import "IGPromoteRadioButtonListSectionControllerDelegate-Protocol.h"
#import "IGPromoteTitleSubtitleSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGListAdapter, IGPromoteHECBottomSheetViewModel, IGPromoteMessageViewModel, IGPromoteTitleSubtitleViewModel, IGUserSession, NSArray, NSMutableSet, NSSet, NSString, UICollectionView;
@protocol IGPromoteHECBottomSheetViewControllerDelegate;

@interface IGPromoteHECBottomSheetViewController : IGPromoteViewController <IGListAdapterDataSource, IGPromoteCheckMarkSectionControllerDeleagate, IGPromoteRadioButtonListSectionControllerDelegate, IGPromoteTitleSubtitleSectionControllerDelegate, UICollectionViewDelegate, IGGestureHandler>
{
    IGUserSession *_session;
    IGBoostPostLogger *_logger;
    IGPromoteHECBottomSheetViewModel *_hecBottomSheetViewModel;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    NSSet *_regulatedCategories;
    long long _selectedRegulatedCategory;
    NSMutableSet *_selectedRegulatedCategories;
    _Bool _isSIEPRegulatedCategoryDisabled;
    _Bool _shouldAllowSIEPSelfIdentification;
    _Bool _isSAFRv3Enabled;
    NSString *_hecDescriptionString;
    id <IGPromoteHECBottomSheetViewControllerDelegate> _delegate;
    NSArray *_radioButtonViewModels;
    NSArray *_checkmarkViewModels;
    IGPromoteMessageViewModel *_siepRestrictedMessageViewModel;
    IGPromoteTitleSubtitleViewModel *_titleViewModel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGPromoteTitleSubtitleViewModel *titleViewModel; // @synthesize titleViewModel=_titleViewModel;
@property(copy, nonatomic) IGPromoteMessageViewModel *siepRestrictedMessageViewModel; // @synthesize siepRestrictedMessageViewModel=_siepRestrictedMessageViewModel;
@property(copy, nonatomic) NSArray *checkmarkViewModels; // @synthesize checkmarkViewModels=_checkmarkViewModels;
@property(copy, nonatomic) NSArray *radioButtonViewModels; // @synthesize radioButtonViewModels=_radioButtonViewModels;
@property(nonatomic) __weak id <IGPromoteHECBottomSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapCellTitleWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapURL:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapEditButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapDeleteButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapSubtitleWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (void)promoteCheckMarkSectionController:(id)arg1 didTapCheckMarkWithViewModel:(id)arg2;
- (void)promoteCheckMarkSectionController:(id)arg1 didTapSubtitleWithViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_openWebViewWithURL:(id)arg1;
- (void)_setupCollectionView;
- (void)_didTapDoneButton;
- (void)_setUpNavigationBar;
- (void)_updateViewModels;
- (void)_reloadView;
- (struct CGSize)_sizeForViewModels;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 regulatedCategories:(id)arg2 selectedRegulatedCategories:(id)arg3 hecBottomSheetViewModel:(id)arg4 logger:(id)arg5;
- (id)initWithSession:(id)arg1 selectedRegulatedCategory:(long long)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

