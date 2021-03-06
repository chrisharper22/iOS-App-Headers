//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGAnalyticsModule-Protocol.h>
#import <FBSharedFramework/IGLocationPickerDelegate-Protocol.h>
#import <FBSharedFramework/IGLocationServicesUpsellViewDelegate-Protocol.h>
#import <FBSharedFramework/IGNearbyLocationDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/UITableViewDelegate-Protocol.h>

@class IGBottomActionBar, IGLocationServicesUpsellView, IGNearbyLocationDataSource, IGPerformanceComponent, IGPerformanceNavigationLogger, IGPlainTableView, IGSearchBar, IGTableLayoutSpec, IGUserSession, NSString, UIBarButtonItem;
@protocol IGLocationPickerDelegate;

@interface IGLocationPickerViewController : IGViewController <IGAnalyticsModule, IGLocationPickerDelegate, UITableViewDelegate, IGNearbyLocationDataSourceDelegate, IGSearchBarDelegate, IGLocationServicesUpsellViewDelegate>
{
    IGSearchBar *_searchBar;
    IGPlainTableView *_tableView;
    IGBottomActionBar *_bottomActionBar;
    UIBarButtonItem *_locateButton;
    NSString *_searchSessionId;
    IGTableLayoutSpec *_tableInterface;
    IGUserSession *_userSession;
    NSString *_surface;
    double _locationSessionStartTime;
    IGLocationServicesUpsellView *_lsUpsellView;
    _Bool _hadLocationBeforeEnteringBackground;
    IGPerformanceComponent *_loadUserCoordinatesComponent;
    IGPerformanceComponent *_loadNearbyLocationsComponent;
    IGPerformanceNavigationLogger *_performanceLogger;
    _Bool _isInteractive;
    IGNearbyLocationDataSource *_locationDataSource;
    id <IGLocationPickerDelegate> _delegate;
    long long _numOfViewedResults;
}

- (void).cxx_destruct;
@property(nonatomic) long long numOfViewedResults; // @synthesize numOfViewedResults=_numOfViewedResults;
@property(nonatomic) __weak id <IGLocationPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(retain, nonatomic) IGNearbyLocationDataSource *locationDataSource; // @synthesize locationDataSource=_locationDataSource;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)locationServicesUpsellViewDidTapDismissButton:(id)arg1;
- (void)locationServicesUpsellViewDidTapEnableLSButton:(id)arg1;
- (void)_onLocationDenied:(id)arg1;
- (void)locationPickerViewControllerDidTapRemoveLocation:(id)arg1;
- (void)locationPickerViewController:(id)arg1 didFinish:(_Bool)arg2 withLocation:(id)arg3;
- (void)_setCurrentSearchText:(id)arg1;
- (id)_currentSearchText;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)_eligibleToSeeLSUpsell;
- (id)lsUpsellView;
- (void)locationDataSourceWasDeniedAccess;
- (void)locationDataSourceDidFailToLocate;
- (void)locationDataSourceDidFailLoading;
- (void)locationDataSourceDidFinishLoadingDataSource:(id)arg1;
- (void)locationDataSourceDidStartLoadingLocations;
- (void)locationDataSourceDidStartLoadingUserCoordinates;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)onCancelModal;
- (void)_onRemoveLocationTapped;
- (void)_onLocateButtonTapped;
- (void)reloadResultsWithLatestUserLocation;
- (void)_fetchLocations;
- (void)fetchLocationData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_willEnterForeground;
- (void)_didEnterBackground;
- (void)viewDidAppear:(_Bool)arg1;
- (void)requestLocationAuthorizationIfNeeded;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_makeCancelButton;
- (void)_makeRefreshButton;
- (void)_makeSearchBar;
- (void)showRemoveLocationButton;
- (void)_setUpTable;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)initWithUserSession:(id)arg1 surface:(id)arg2;
- (void)dealloc;
- (id)_locationIDArrayFromLocationResults:(id)arg1;
- (void)_logLocationEventName:(id)arg1 query:(id)arg2 resultsList:(id)arg3 selectedID:(id)arg4 selectedRowIndex:(id)arg5 sessionID:(id)arg6 surface:(id)arg7 timeSinceStartInMs:(long long)arg8;
- (void)logLocationPickerDismissedWithSessionID:(id)arg1 dataSource:(id)arg2 surface:(id)arg3 timeSinceStartInMs:(long long)arg4 userSession:(id)arg5;
- (void)logLocationPickerOpenedWithSessionID:(id)arg1 surface:(id)arg2 userSession:(id)arg3;
- (void)logSearchQueryResponseForDataSource:(id)arg1 sessionID:(id)arg2 surface:(id)arg3 timeSinceStartInMs:(long long)arg4 userSession:(id)arg5;
- (void)logSelectedLocation:(id)arg1 indexPath:(id)arg2 dataSource:(id)arg3 sessionID:(id)arg4 surface:(id)arg5 timeSinceStartInMs:(long long)arg6 userSession:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

