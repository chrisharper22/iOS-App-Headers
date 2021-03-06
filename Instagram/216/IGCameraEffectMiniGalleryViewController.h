//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPartialModalSheetNavigationController.h>

#import "IGCameraEffectCollectionDataSourceListener-Protocol.h"
#import "IGCameraEffectMiniGalleryDetailViewDelegate-Protocol.h"
#import "IGCameraEffectMiniGalleryFeedViewControllerDelegate-Protocol.h"
#import "IGCameraEffectMiniGallerySearchViewControllerDelegate-Protocol.h"
#import "IGCameraEffectMiniGalleryTopicProviderListener-Protocol.h"
#import "IGCameraEffectMiniGalleryTopicTrayDataSource-Protocol.h"
#import "IGCameraEffectMiniGalleryTopicTrayDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class IGAREffectModel, IGAREffectTargetModel, IGCameraEffectMiniGalleryContentViewController, IGCameraEffectMiniGalleryDetailView, IGCameraEffectMiniGalleryFeedDataProvider, IGCameraEffectMiniGalleryFeedViewController, IGCameraEffectMiniGalleryLoggingContext, IGCameraEffectMiniGalleryPerfLoggingContext, IGCameraEffectMiniGallerySearchViewController, IGCameraEffectMiniGalleryTopicProvider, IGCameraEffectMiniGalleryTopicTray, IGPartialModalSheetBackgroundResizingController, IGPartialModalSheetViewController, IGSearchBarWithCancel, IGUserSession, NSMutableDictionary, NSString, UIPageViewController;
@protocol IGCameraEffectMiniGalleryViewControllerDelegate, IGCameraEffectMiniGalleryViewControllerLicensingDataSource, IGPartialModalSheetCustomInteractionDelegate;

@interface IGCameraEffectMiniGalleryViewController : IGPartialModalSheetNavigationController <IGSearchBarDelegate, IGCameraEffectCollectionDataSourceListener, IGCameraEffectMiniGalleryTopicProviderListener, IGCameraEffectMiniGalleryTopicTrayDelegate, IGCameraEffectMiniGalleryTopicTrayDataSource, IGCameraEffectMiniGalleryFeedViewControllerDelegate, IGCameraEffectMiniGallerySearchViewControllerDelegate, IGCameraEffectMiniGalleryDetailViewDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, IGPartialModalSheetListener, UIGestureRecognizerDelegate, IGGestureHandler>
{
    IGCameraEffectMiniGalleryDetailView *_detailView;
    IGCameraEffectMiniGalleryTopicTray *_topicTray;
    IGSearchBarWithCancel *_searchBarWithCancel;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGPartialModalSheetBackgroundResizingController *_resizingController;
    IGCameraEffectMiniGalleryContentViewController *_contentViewController;
    IGCameraEffectMiniGallerySearchViewController *_searchViewController;
    NSMutableDictionary *_pageChildViewControllers;
    NSMutableDictionary *_pageChildViewControllersPerTopic;
    UIPageViewController *_pageViewController;
    IGCameraEffectMiniGalleryTopicProvider *_topicDataProvider;
    IGCameraEffectMiniGalleryFeedDataProvider *_initialDataProvider;
    unsigned long long _previousPartialModalSheetTargetState;
    NSString *_previouslySelectedNonSearchTopicID;
    IGAREffectTargetModel *_effectTarget;
    IGAREffectModel *_selectedEffect;
    _Bool _pageTransitionInProgress;
    _Bool _isPostcap;
    _Bool _showReducedCategoriesWithAllIcons;
    long long _searchIndex;
    long long _searchIndexOffset;
    IGUserSession *_userSession;
    IGCameraEffectMiniGalleryLoggingContext *_loggingContext;
    IGCameraEffectMiniGalleryPerfLoggingContext *_perfLoggingContext;
    _Bool _isLoading;
    _Bool _showSaved;
    id <IGCameraEffectMiniGalleryViewControllerDelegate> _galleryDelegate;
    id <IGCameraEffectMiniGalleryViewControllerLicensingDataSource> _licensingDataSource;
    IGCameraEffectMiniGalleryFeedViewController *_selectedEffectFeedViewController;
    unsigned long long _source;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSaved; // @synthesize showSaved=_showSaved;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) IGCameraEffectMiniGalleryFeedViewController *selectedEffectFeedViewController; // @synthesize selectedEffectFeedViewController=_selectedEffectFeedViewController;
@property(nonatomic) __weak id <IGCameraEffectMiniGalleryViewControllerLicensingDataSource> licensingDataSource; // @synthesize licensingDataSource=_licensingDataSource;
@property(nonatomic) __weak id <IGCameraEffectMiniGalleryViewControllerDelegate> galleryDelegate; // @synthesize galleryDelegate=_galleryDelegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)cameraEffectMiniGalleryDetailViewDidTapSwitchCamera:(id)arg1;
- (void)cameraEffectMiniGalleryDetailViewDidTapNext:(id)arg1;
- (void)cameraEffectMiniGalleryDetailViewDidTapSubtitle:(id)arg1;
- (void)cameraEffectMiniGalleryDetailViewDidTapTitle:(id)arg1;
- (void)cameraEffectMiniGalleryDetailViewDidTapImage:(id)arg1;
- (void)cameraEffectMiniGalleryDetailView:(id)arg1 didToggleToSaveState:(_Bool)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)cameraEffectMiniGallerySearchViewController:(id)arg1 didSelectSearchResult:(id)arg2;
- (_Bool)cameraEffectMiniGalleryFeedViewControllerEffectIdIsLogged:(id)arg1;
- (void)cameraEffectMiniGalleryFeedViewControllerDidLogImpressionForEffectID:(id)arg1;
- (void)cameraEffectMiniGalleryFeedViewControllerDidLoadData:(id)arg1;
- (void)cameraEffectMiniGalleryFeedViewController:(id)arg1 didSelectEffect:(id)arg2 index:(long long)arg3;
- (void)cameraEffectMiniGalleryFeedViewControllerDidClearSelection:(id)arg1;
- (void)miniGalleryTopicTray:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)miniGalleryTopicTray:(id)arg1 isItemAtIndexLoading:(long long)arg2;
- (id)miniGalleryTopicTray:(id)arg1 accessibilityTextForItemAtIndex:(long long)arg2;
- (id)miniGalleryTopicTray:(id)arg1 imageForItemAtIndex:(long long)arg2;
- (id)miniGalleryTopicTray:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInMiniGalleryTopicTray:(id)arg1;
- (void)cameraEffectCollectionDataSource:(id)arg1 didUpdateUsingPage:(id)arg2;
- (void)cameraEffectCollectionDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraEffectTopicProvider:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraEffectTopicProviderDidUpdate:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)_performSearchWithQueryIfNeeded:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (void)searchBarDidEndEditing:(id)arg1;
- (void)searchBarDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_markEffectSelectedForCurrentFeedControllerIfAvailable:(id)arg1;
- (void)_updateSearchControlsIfNeeded;
- (void)_updatePreviouslySelectedTopicToCurrentIfNotSearch;
- (void)_refetchSavedEffectsIfNeeded;
- (void)_presentReelsEffectPage;
- (void)_didTapCancel;
- (long long)_trayIndexOfTopicWithID:(id)arg1;
- (void)_setSearchInputModeEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_clearSelection;
@property(readonly, nonatomic) IGCameraEffectMiniGalleryFeedViewController *currentFeedViewController;
- (id)_feedViewControllerForTopicTrayIndex:(long long)arg1;
- (id)_feedViewControllerForTopicWithID:(id)arg1;
- (void)_autoSelectFirstEffect;
- (void)_selectEffect:(id)arg1;
- (void)_setPageViewController:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3;
- (void)_handleKeyboardDismissal:(id)arg1;
- (void)addlistenerForPartialModalSheet:(id)arg1;
- (void)updateAccessibilityForCameraPosition:(long long)arg1;
@property(nonatomic) __weak id <IGPartialModalSheetCustomInteractionDelegate> backgroundCustomInteractionDelegate;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithInteractingViewController:(id)arg1 interactingFocusRegion:(struct CGRect)arg2 source:(unsigned long long)arg3 topicDataProvider:(id)arg4 initialDataProvider:(id)arg5 effectTarget:(id)arg6 selectedEffect:(id)arg7 userSession:(id)arg8 loggingContext:(id)arg9 perfLoggingContext:(id)arg10 cameraPosition:(long long)arg11 isPostcap:(_Bool)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

