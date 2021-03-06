//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGArchiveNavigationListener-Protocol.h"
#import "IGArchiveStoryPresenterDelegate-Protocol.h"
#import "IGMediaDeletedListener-Protocol.h"
#import "IGMediaPreloaderPhotoProgressDelegate-Protocol.h"
#import "IGMediaPreloaderVideoProgressDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"

@class IGArchiveLoadingPillController, IGArchiveStoryPresenter, IGMediaPreloader, IGPlacesMapIconButton, IGStoryArchiveDisclaimerBanner, IGStoryArchiveMapAnnotation, IGStoryArchiveMapAnnotationView, IGUserSession, MKMapView, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBCancelable, IGStoryArchiveMapViewControllerDelegate;

@interface IGStoryArchiveMapViewController : IGViewController <IGMediaDeletedListener, IGMediaPreloaderPhotoProgressDelegate, IGMediaPreloaderVideoProgressDelegate, MKMapViewDelegate, IGArchiveNavigationListener, IGArchiveStoryPresenterDelegate, IGTabControlSegment>
{
    IGUserSession *_userSession;
    double _contentTopInset;
    IGStoryArchiveDisclaimerBanner *_disclaimerBanner;
    MKMapView *_mapView;
    IGArchiveStoryPresenter *_storyPresenter;
    id <FBCancelable> _scheduledLoad;
    IGPlacesMapIconButton *_mapLocationButton;
    NSMutableArray *_sortedLoadedRegions;
    NSMutableDictionary *_feedItemToStoredItem;
    IGStoryArchiveMapAnnotationView *_selectedView;
    IGArchiveLoadingPillController *_loadingPillController;
    _Bool _ignoreNextSelection;
    IGStoryArchiveMapAnnotation *_selectedHomeArchiveAnnotation;
    IGMediaPreloader *_mediaPreloader;
    id <IGStoryArchiveMapViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryArchiveMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasPreviousResultIncludedLocation:(id)arg1 radius:(double)arg2;
- (void)_forceRedrawForClusterAnnotation:(id)arg1;
- (void)_registerAnnotationView;
- (void)_handleFetchSuccessWithResponseDict:(id)arg1;
- (void)_fetchLocationStories;
- (void)_fetchLocationStoriesDebounced;
- (id)mapView:(id)arg1 clusterAnnotationForMemberAnnotations:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)_launchStoriesViewerForItem:(id)arg1;
- (void)mediaPreloader:(id)arg1 didFailVideoForItem:(id)arg2;
- (void)mediaPreloader:(id)arg1 didLoadVideoForItem:(id)arg2;
- (void)mediaPreloader:(id)arg1 didFailPhotoForItem:(id)arg2 url:(id)arg3 module:(id)arg4;
- (void)mediaPreloader:(id)arg1 didLoadPhotoForItem:(id)arg2 url:(id)arg3 loadSource:(unsigned long long)arg4 module:(id)arg5;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)archiveStoryPresenter:(id)arg1 didTapViewDayForStoryViewer:(id)arg2;
- (id)dismissingToViewForArchiveStoryPresenter:(id)arg1;
- (void)didDismissArchiveStoryPresenter:(id)arg1;
- (void)archiveStoryPresenter:(id)arg1 didPresentStoryItem:(id)arg2;
- (void)archiveStoryPresenter:(id)arg1 didFocusonReelWithPK:(id)arg2 forStoryViewer:(id)arg3;
- (void)archiveStoryPresenter:(id)arg1 didFinishStoryViewer:(id)arg2;
- (void)archiveStoryPresenter:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (void)shouldViewMapWithMedia:(id)arg1;
- (id)fallbackIcon;
- (id)title;
- (void)_didTapDisclaimerBannerDismissButton;
- (void)_onLocationAuthorizedStatusChange;
- (void)_mapLocationButtonTapped;
@property(readonly, nonatomic) IGArchiveLoadingPillController *loadingPillController;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 contentTopInset:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

