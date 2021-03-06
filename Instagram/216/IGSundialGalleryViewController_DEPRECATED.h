//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGGalleryDataSourceDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGPhotoLibraryLimitedAccessHeaderViewDelegate-Protocol.h"
#import "IGStoryAlbumPickerViewControllerDelegate-Protocol.h"
#import "IGStoryExtendedGalleryPermissionsViewDelegate-Protocol.h"
#import "IGStoryGalleryZoomTransitionViewController-Protocol.h"
#import "IGSundialSeeAllDraftsViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGGalleryDataSource, IGPhotoLibraryEmptyStateView, IGPhotoLibraryLimitedAccessHeaderView, IGStoryExtendedGalleryPermissionsView, IGStoryExtendedGalleryTitleView, IGStoryGalleryToggleButton, IGStoryMediaLoadingIndicatorView, IGUserSession, NSString, UICollectionView;
@protocol IGSundialGalleryViewController_DEPRECATEDDelegate;

@interface IGSundialGalleryViewController_DEPRECATED : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGGalleryDataSourceDelegate, IGPhotoLibraryLimitedAccessHeaderViewDelegate, IGStoryExtendedGalleryPermissionsViewDelegate, IGStoryAlbumPickerViewControllerDelegate, IGSundialSeeAllDraftsViewControllerDelegate, IGAnalyticsModule, IGGestureHandler, IGStoryGalleryZoomTransitionViewController>
{
    IGUserSession *_userSession;
    IGGalleryDataSource *_galleryDataSource;
    UICollectionView *_collectionView;
    IGStoryExtendedGalleryTitleView *_titleView;
    IGPhotoLibraryEmptyStateView *_noContentPlaceholderView;
    IGStoryExtendedGalleryPermissionsView *_permissionsView;
    IGStoryMediaLoadingIndicatorView *_loadingIndicatorView;
    NSString *_recentMediaTitleText;
    NSString *_olderMediaTitleText;
    IGStoryGalleryToggleButton *_greenScreenButton;
    _Bool _renderCellsWithWashedOutAppearance;
    _Bool _loadingIndicatorViewVisible;
    id <IGSundialGalleryViewController_DEPRECATEDDelegate> _delegate;
    double _presentationProgress;
    long long _galleryState;
    IGPhotoLibraryLimitedAccessHeaderView *_limitedAccessHeaderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGPhotoLibraryLimitedAccessHeaderView *limitedAccessHeaderView; // @synthesize limitedAccessHeaderView=_limitedAccessHeaderView;
@property(nonatomic) long long galleryState; // @synthesize galleryState=_galleryState;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property(nonatomic) _Bool loadingIndicatorViewVisible; // @synthesize loadingIndicatorViewVisible=_loadingIndicatorViewVisible;
@property(nonatomic) _Bool renderCellsWithWashedOutAppearance; // @synthesize renderCellsWithWashedOutAppearance=_renderCellsWithWashedOutAppearance;
@property(nonatomic) __weak id <IGSundialGalleryViewController_DEPRECATEDDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photoLibraryLimitedAccessHeaderViewDidTapManageButton;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
@property(readonly, nonatomic) struct CGRect contentRegion;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)storyExtendedGalleryPermissionsViewDidRequestPhotosAccess:(id)arg1;
- (void)_updateAppearanceAnimated:(_Bool)arg1;
- (void)_setGalleryState:(long long)arg1 animated:(_Bool)arg2;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *title;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (void)albumPickerViewController:(id)arg1 didSelectAlbum:(id)arg2 withAlbumIndex:(long long)arg3;
- (void)_didTapTitleView:(id)arg1;
@property(readonly, nonatomic) _Bool greenScreenButtonSelected;
- (void)_didTapGreenScreenButton;
- (_Bool)_updateGalleryDataSourcePreferredMediaTypes;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)galleryCellForItemAtIndexPath:(id)arg1;
- (void)galleryDataSourceDidChangeSectionedCollections:(id)arg1;
- (void)galleryDataSource:(id)arg1 didChange:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didTapCreationEntrypointCellWithViewController:(id)arg1;
- (void)didUpdateNumberOfDrafts:(id)arg1;
- (void)seeAllDraftsViewController:(id)arg1 onViewController:(id)arg2 didTapDraft:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

