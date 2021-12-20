//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCollectionViewCell.h>

#import "IGLocationPickerDelegate-Protocol.h"
#import "IGLocationSuggestionHScrollDelegate-Protocol.h"
#import "IGNearbyLocationDataSourceDelegate-Protocol.h"

@class IGActiveLocationDetailView, IGLocation, IGLocationMetadata, IGLocationPickerViewController, IGLocationSuggestionHScrollView, IGLocationSuggestionTitleControl, IGNearbyLocationDataSource, IGTableLayoutSpec, IGTapButton, IGUserSession, NSArray, NSIndexPath, NSString;
@protocol IGLocationSuggestionDelegate><IGLocationSuggestionDataSource;

@interface IGLocationSuggestionCell : IGCollectionViewCell <IGNearbyLocationDataSourceDelegate, IGLocationPickerDelegate, IGLocationSuggestionHScrollDelegate>
{
    _Bool _shouldAnimateLocationView;
    id <IGLocationSuggestionDelegate><IGLocationSuggestionDataSource> _delegate;
    IGUserSession *_userSession;
    IGLocationMetadata *_locationMetadata;
    IGLocation *_initialLocation;
    NSIndexPath *_indexPath;
    IGNearbyLocationDataSource *_locationDataSource;
    long long _rowType;
    long long _suggestionState;
    IGLocationSuggestionHScrollView *_suggestionView;
    IGLocationSuggestionTitleControl *_titleView;
    IGActiveLocationDetailView *_activeLocationView;
    IGTapButton *_clearButton;
    IGLocationPickerViewController *_locationPickerVC;
    NSArray *_locations;
    IGTableLayoutSpec *_tableInterface;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) IGLocationPickerViewController *locationPickerVC; // @synthesize locationPickerVC=_locationPickerVC;
@property(retain, nonatomic) IGTapButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) IGActiveLocationDetailView *activeLocationView; // @synthesize activeLocationView=_activeLocationView;
@property(retain, nonatomic) IGLocationSuggestionTitleControl *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) IGLocationSuggestionHScrollView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(nonatomic) long long suggestionState; // @synthesize suggestionState=_suggestionState;
@property(nonatomic) long long rowType; // @synthesize rowType=_rowType;
@property(retain, nonatomic) IGNearbyLocationDataSource *locationDataSource; // @synthesize locationDataSource=_locationDataSource;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) IGLocation *initialLocation; // @synthesize initialLocation=_initialLocation;
@property(retain, nonatomic) IGLocationMetadata *locationMetadata; // @synthesize locationMetadata=_locationMetadata;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGLocationSuggestionDelegate><IGLocationSuggestionDataSource> delegate; // @synthesize delegate=_delegate;
- (void)_onLocationDenied;
- (void)_onLocationAuthorized;
- (void)_onLocationTitleControlTapped;
- (void)_updateSuggestionStateUsingLocations;
- (void)_updateLocations;
- (void)locationDataSourceWasDeniedAccess;
- (void)locationDataSourceDidFailToLocate;
- (void)locationDataSourceDidFailLoading;
- (void)locationDataSourceDidFinishLoadingDataSource:(id)arg1;
- (void)locationDataSourceDidStartLoadingUserCoordinates;
- (void)locationDataSourceDidStartLoadingLocations;
- (void)locationSuggestionHScrollDelegateDidTapSearch;
- (void)locationSuggestionHScrollDelegateDidSelectLocation:(id)arg1;
- (void)_presentLocationPickerVC;
- (void)locationPickerViewControllerDidTapRemoveLocation:(id)arg1;
- (void)locationPickerViewController:(id)arg1 didFinish:(_Bool)arg2 withLocation:(id)arg3;
- (void)_locationClearButtonTapped;
- (void)_showClearButton:(_Bool)arg1;
- (void)_showActiveLocationDetailView:(_Bool)arg1;
- (void)_showActiveLocation:(id)arg1;
- (id)_detailsStringForLocation:(id)arg1;
@property(readonly, nonatomic) double cellHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
