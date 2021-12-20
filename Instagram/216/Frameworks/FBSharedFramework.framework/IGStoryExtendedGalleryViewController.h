//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGAnalyticsModule-Protocol.h>
#import <FBSharedFramework/IGGalleryDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGPhotoLibraryLimitedAccessHeaderViewDelegate-Protocol.h>
#import <FBSharedFramework/IGQuickScrubDataSource-Protocol.h>
#import <FBSharedFramework/IGStoriesGallerySuggestionCarouselDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGStoriesGallerySuggestionsProviderDelegate-Protocol.h>
#import <FBSharedFramework/IGStoriesGallerySuggestionsSettingsListener-Protocol.h>
#import <FBSharedFramework/IGStoryAlbumPickerViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryDraftGalleryViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryDraftGalleryViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryDraftStoreListener-Protocol.h>
#import <FBSharedFramework/IGStoryExpressiveFormatsPresenterDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryExtendedGalleryPermissionsViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryGalleryDraftsHeaderDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGTooltipViewDelegate-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegate-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <FBSharedFramework/UIScrollViewDelegate-Protocol.h>
#import <FBSharedFramework/_TtP15IGStoryAlbumNav23IGStoryAlbumNavDelegate_-Protocol.h>

@class IGGalleryDataSource, IGHScrollCollectionViewCell, IGPassthroughView, IGPerformanceComponent, IGPerformanceNavigationLogger, IGPhotoLibraryEmptyStateView, IGPhotoLibraryLimitedAccessHeaderView, IGQuickScrubController, IGScrollPerfManualLogger, IGStoriesGallerySuggestionCarouselDataSource, IGStoriesGallerySuggestionsLoggingHelper, IGStoriesGallerySuggestionsProvider, IGStoryDraftGalleryView, IGStoryDraftStore, IGStoryExpressiveFormatsPresenter, IGStoryExtendedGalleryTitleView, IGStoryGalleryCameraCellModel, IGStoryGalleryDraftsCellViewModel, IGStoryGalleryDraftsHeader, IGStoryGallerySelectionTray, IGStoryGalleryToggleButton, IGStoryGalleryWrapperDataSource, IGTooltipView, IGUserSession, NSArray, NSMutableOrderedSet, NSString, UICollectionView, UIView;
@protocol IGStoryExtendedGalleryPermissionsViewProtocol, IGStoryExtendedGalleryViewControllerDelegate;

@interface IGStoryExtendedGalleryViewController : UIViewController <IGPhotoLibraryLimitedAccessHeaderViewDelegate, IGQuickScrubDataSource, IGStoryAlbumPickerViewControllerDelegate, IGStoryDraftGalleryViewDelegate, IGStoryExtendedGalleryPermissionsViewDelegate, IGGalleryDataSourceDelegate, IGStoryDraftStoreListener, IGStoryGalleryDraftsHeaderDelegate, IGStoryDraftGalleryViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, IGTooltipViewDelegate, _TtP15IGStoryAlbumNav23IGStoryAlbumNavDelegate_, IGStoriesGallerySuggestionsProviderDelegate, IGStoryPostCaptureEditingViewControllerDelegate, IGStoriesGallerySuggestionCarouselDataSourceDelegate, IGStoriesGallerySuggestionsSettingsListener, IGStoryExpressiveFormatsPresenterDelegate, IGGestureHandler, IGAnalyticsModule>
{
    UICollectionView *_collectionView;
    IGPhotoLibraryEmptyStateView *_noContentPlaceholderView;
    IGStoryGalleryWrapperDataSource *_wrapperDataSource;
    IGGalleryDataSource *_galleryDataSource;
    UIView<IGStoryExtendedGalleryPermissionsViewProtocol> *_galleryPermissionsView;
    NSString *_recentMediaTitleText;
    IGQuickScrubController *_quickScrubController;
    IGStoryGallerySelectionTray *_selectionTray;
    NSMutableOrderedSet *_selectedAssetMetadata;
    _Bool _didSelectSingleAsset;
    _Bool _enableMultiSelectByDefault;
    IGUserSession *_userSession;
    struct CGSize _cellSize;
    IGStoryGalleryCameraCellModel *_cameraCellModel;
    IGStoryExtendedGalleryTitleView *_titleView;
    IGStoryGalleryToggleButton *_multiSelectToggleButton;
    IGPassthroughView *_galleryHeaderView;
    IGStoryDraftStore *_draftStore;
    IGStoryGalleryDraftsHeader *_draftsHeaderView;
    IGStoryGalleryDraftsCellViewModel *_draftsInGalleryGridViewModel;
    struct CGSize _draftsCellSize;
    NSArray *_sectionTypes;
    IGPerformanceNavigationLogger *_performanceLogger;
    IGPerformanceComponent *_loadFirstAssetsPerformanceComponent;
    IGScrollPerfManualLogger *_scrollPerfLogger;
    IGStoriesGallerySuggestionsProvider *_suggestionsProvider;
    struct CGSize _suggestionSize;
    IGStoriesGallerySuggestionCarouselDataSource *_suggestionCarouselDataSource;
    IGHScrollCollectionViewCell *_suggestionsCarouselCell;
    _Bool _hasLoggedInitialSuggestionsCarouselImpression;
    IGStoryExpressiveFormatsPresenter *_expressiveFormatsPresenter;
    _Bool _supportsExpressiveFormats;
    IGTooltipView *_albumNavTooltip;
    IGTooltipView *_gallerySuggestionsTooltip;
    _Bool _supportsMultiSelect;
    _Bool _showCameraEntryPointCell;
    _Bool _worldEffectSelected;
    _Bool _shouldHideAlbumTitleButtonWhenPermissionIsDenied;
    _Bool _multiSelectEnabled;
    _Bool _selectionTrayVisible;
    NSArray *_preferredMediaTypes;
    NSArray *_prepopulatedStickers;
    id <IGStoryExtendedGalleryViewControllerDelegate> _delegate;
    long long _overrideMaxSelectableAssetCount;
    double _cellAspectRatio;
    IGStoryDraftGalleryView *_draftsGalleryView;
    double _presentationProgress;
    long long _galleryState;
    double _selectionTrayVisibilityPercentage;
    IGPhotoLibraryLimitedAccessHeaderView *_limitedAccessHeaderView;
    IGStoriesGallerySuggestionsLoggingHelper *_suggestionsLoggingHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStoriesGallerySuggestionsLoggingHelper *suggestionsLoggingHelper; // @synthesize suggestionsLoggingHelper=_suggestionsLoggingHelper;
@property(retain, nonatomic) IGPhotoLibraryLimitedAccessHeaderView *limitedAccessHeaderView; // @synthesize limitedAccessHeaderView=_limitedAccessHeaderView;
@property(nonatomic) double selectionTrayVisibilityPercentage; // @synthesize selectionTrayVisibilityPercentage=_selectionTrayVisibilityPercentage;
@property(nonatomic) _Bool selectionTrayVisible; // @synthesize selectionTrayVisible=_selectionTrayVisible;
@property(nonatomic) _Bool multiSelectEnabled; // @synthesize multiSelectEnabled=_multiSelectEnabled;
@property(nonatomic) long long galleryState; // @synthesize galleryState=_galleryState;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property(nonatomic) _Bool shouldHideAlbumTitleButtonWhenPermissionIsDenied; // @synthesize shouldHideAlbumTitleButtonWhenPermissionIsDenied=_shouldHideAlbumTitleButtonWhenPermissionIsDenied;
@property(readonly, nonatomic) IGStoryDraftGalleryView *draftsGalleryView; // @synthesize draftsGalleryView=_draftsGalleryView;
@property(readonly, nonatomic) double cellAspectRatio; // @synthesize cellAspectRatio=_cellAspectRatio;
@property(readonly, nonatomic, getter=isWorldEffectSelected) _Bool worldEffectSelected; // @synthesize worldEffectSelected=_worldEffectSelected;
@property(nonatomic) long long overrideMaxSelectableAssetCount; // @synthesize overrideMaxSelectableAssetCount=_overrideMaxSelectableAssetCount;
@property(nonatomic) _Bool showCameraEntryPointCell; // @synthesize showCameraEntryPointCell=_showCameraEntryPointCell;
@property(nonatomic) _Bool supportsMultiSelect; // @synthesize supportsMultiSelect=_supportsMultiSelect;
@property(nonatomic) __weak id <IGStoryExtendedGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *prepopulatedStickers; // @synthesize prepopulatedStickers=_prepopulatedStickers;
@property(copy, nonatomic) NSArray *preferredMediaTypes; // @synthesize preferredMediaTypes=_preferredMediaTypes;
- (void)gallerySuggestionsDidUpdateFaceDetectionOptInSetting:(_Bool)arg1;
- (void)gallerySuggestionsDidUpdateOptOutSetting:(_Bool)arg1;
- (void)_presentGallerySuggestionsActionSheetForUpsellCell:(_Bool)arg1 suggestion:(id)arg2 indexPath:(id)arg3;
- (void)_presentGallerySuggestionsHelpCenterLinkForSuggestion:(id)arg1 atIndexPath:(id)arg2;
- (void)_presentCameraSettingsForSuggestion:(id)arg1 atIndexPath:(id)arg2;
- (void)_didTapDontShowAgainForUpsellCellAtIndexPath:(id)arg1;
- (void)_didTapSeeFewerLikeThisForSuggestion:(id)arg1 atIndexPath:(id)arg2;
- (void)_setHidden:(_Bool)arg1 forSuggestion:(id)arg2 atIndexPath:(id)arg3;
- (void)suggestionCarousel:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)suggestionCarousel:(id)arg1 upsellCellDidTapMoreButton:(id)arg2;
- (void)suggestionCarousel:(id)arg1 upsellCellDidTapLearnMoreButton:(id)arg2;
- (void)_logDenyAdvancedSuggestionsFromUpsellCellAtIndexPath:(id)arg1;
- (void)_allowAdvancedSuggestionsFromUpsellCellAtIndexPath:(id)arg1;
- (void)suggestionCarousel:(id)arg1 upsellCellDidTapTryItButton:(id)arg2;
- (void)suggestionCarousel:(id)arg1 tombstoneCellDidTapUndoButton:(id)arg2;
- (void)suggestionCarousel:(id)arg1 tombstoneCellDidTapChangeSettingsButton:(id)arg2;
- (void)suggestionCarousel:(id)arg1 suggestionCellDidTapMoreButton:(id)arg2;
- (void)suggestionCarousel:(id)arg1 willDisplaySuggestionCell:(id)arg2;
- (void)_configureAndPresentExpressiveFormatsWithAssets:(id)arg1 showSelectMediaView:(_Bool)arg2 suggestionLoggingMetadata:(id)arg3;
- (void)_suggestionCarouselDidSelectExpressiveFormatSuggestion:(id)arg1 atIndexPath:(id)arg2;
- (void)suggestionCarousel:(id)arg1 didSelectCollageSuggestionCell:(id)arg2;
- (void)suggestionCarousel:(id)arg1 didSelectMontageSuggestionCell:(id)arg2;
- (void)suggestionCarousel:(id)arg1 didSelectCompositionSuggestionCell:(id)arg2;
- (void)gallerySuggestionsProvider:(id)arg1 didLoadSuggestions:(id)arg2;
- (_Bool)_shouldShowSuggestionsForAssetCollectionSubtype:(long long)arg1 mediaCount:(long long)arg2;
- (void)_reloadGallerySuggestionsInForeground:(_Bool)arg1;
- (void)storyDraftGalleryViewController:(id)arg1 didSelectDraft:(id)arg2;
- (void)_presentDraftGalleryViewController;
- (void)storyGalleryDraftsHeaderDidTapSeeAll:(id)arg1;
- (void)storyDraftStore:(id)arg1 didDeleteDraftsWithIdentifiers:(id)arg2;
- (void)storyDraftStore:(id)arg1 didSaveDraft:(id)arg2;
- (void)storyDraftStore:(id)arg1 didFinishLoadingSavedDrafts:(id)arg2;
- (void)photoLibraryLimitedAccessHeaderViewDidTapManageButton;
- (_Bool)accessibilityPerformEscape;
- (struct CGRect)_frameForHeaderInSection:(long long)arg1;
- (void)_updateHeadersAlpha;
- (void)_updateHeadersPosition;
- (void)_updateHeaders;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)quickScrubControllerDidUpdateScrubbing:(id)arg1;
- (id)quickScrubController:(id)arg1 displayStringForItemAtIndexPath:(id)arg2;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)storyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5 exitPoint:(long long)arg6;
- (void)didTapTooltipView:(id)arg1;
- (void)_showGallerySuggestionsTooltip;
- (_Bool)_shouldShowGallerySuggestionsTooltip;
- (void)_showAlbumNavTooltip;
- (_Bool)_shouldShowAlbumNavTooltip;
- (void)storyAlbumNavViewController:(id)arg1 didSelectAssets:(id)arg2;
- (void)storyAlbumNavViewController:(id)arg1 didSelectAssetCollection:(id)arg2;
- (void)albumPickerViewController:(id)arg1 didSelectAlbum:(id)arg2 withAlbumIndex:(long long)arg3;
- (void)_didTapTitleView:(id)arg1;
- (_Bool)hasUserSelectedAssets;
@property(readonly, nonatomic) struct CGRect contentRegion;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)_setSelectionTrayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (id)analyticsModule;
- (void)_updateAppearanceAnimated:(_Bool)arg1;
- (void)_setGalleryState:(long long)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)_logMultiUnselectAssetWithMetadata:(id)arg1 atIndexPath:(id)arg2;
- (void)_logMultiSelectAssetWithMetadata:(id)arg1 atIndexPath:(id)arg2;
- (void)_setSelectedAssets:(id)arg1;
- (void)_updateSelectionForVisibleCells;
- (void)_didSelectCell:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)_galleryIndexSetForIndexPaths:(id)arg1;
- (id)_collectionView:(id)arg1 cellForSuggestionGroup:(id)arg2 indexPath:(id)arg3;
- (void)_configureGalleryCell:(id)arg1 withAssetMetadata:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)draftsGalleryView:(id)arg1 willDisplayDraft:(id)arg2;
- (void)draftsGalleryView:(id)arg1 didDeselectDraft:(id)arg2;
- (void)draftsGalleryView:(id)arg1 didSelectDraft:(id)arg2;
- (void)galleryDataSourceDidChangeSectionedCollections:(id)arg1;
- (void)galleryDataSource:(id)arg1 didChange:(id)arg2;
- (void)_handleUpgradePathNotification:(id)arg1;
- (void)_handlePermissionsChangeNotification:(id)arg1;
- (void)storyExtendedGalleryPermissionsViewDidRequestPhotosAccess:(id)arg1;
- (void)expressiveFormatsPresenter:(id)arg1 didDismissOnSelectMediaTapWithAssets:(id)arg2;
- (void)expressiveFormatsPresenter:(id)arg1 didShareToStory:(long long)arg2 exitPoint:(long long)arg3 directRecipients:(id)arg4 storyModelArray:(id)arg5 metadataArray:(id)arg6;
- (_Bool)_isExpressiveFormatsEnabled;
- (void)_didTapMultiSelectTrayNextButton:(id)arg1;
- (void)_setMultiSelectEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didTapMultiSelectToggleButton;
- (void)_setDraftsInGalleryGridViewModelWithDrafts:(id)arg1;
- (void)_setDrafts:(id)arg1;
- (long long)_sectionForType:(long long)arg1;
- (long long)_typeOfSection:(long long)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupAlbumTitleButton:(id)arg1;
- (void)willBecomeInactive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)_updateWrapperDataSourceItems;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2 permissionsViewProvider:(CDUnknownBlockType)arg3;
- (void)scrollToTop;
- (id)cellForItemAtIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
