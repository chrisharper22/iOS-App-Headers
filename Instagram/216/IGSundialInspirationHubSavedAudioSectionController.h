//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGStoryMusicModelsListViewControllerDelegate-Protocol.h"

@class IGAsyncTask, IGSundialInspirationHubSavedAudioSectionModel, IGUserSession, NSString;
@protocol _TtP29IGSundialInspirationHubCommon58IGSundialInspirationHubSavedAudioSectionControllerDelegate_;

@interface IGSundialInspirationHubSavedAudioSectionController : IGListSectionController <IGStoryMusicModelsListViewControllerDelegate>
{
    IGSundialInspirationHubSavedAudioSectionModel *_model;
    IGUserSession *_userSession;
    id <_TtP29IGSundialInspirationHubCommon58IGSundialInspirationHubSavedAudioSectionControllerDelegate_> _delegate;
    IGAsyncTask *_tracksRequest;
}

- (void).cxx_destruct;
- (void)musicModelsPaginatedListDidUpdateModels:(id)arg1;
- (void)modelsListViewControllerDidTapClearAllForRecentSearches:(id)arg1;
- (void)modelsListViewController:(id)arg1 didTapArtist:(id)arg2 category:(unsigned long long)arg3;
- (void)modelsListViewController:(id)arg1 didTapAudioPageForAudioTrack:(id)arg2 pivotPageSessionId:(id)arg3;
- (void)modelsListViewController:(id)arg1 didTapAudioTrack:(id)arg2 context:(CDStruct_61bbf500)arg3 category_DEPRECATED:(unsigned long long)arg4;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

