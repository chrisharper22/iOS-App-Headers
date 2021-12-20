//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNetworkParser-Protocol.h"

@class IGMedia, IGObjectStores, IGTVDestinationClientConfigsProvider, IGTVSeenStateStore, IGTitleAndSubtitleViewModel, IGUser, IGValues, NSString;
@protocol IGAPIClient, IGFeedItemCollectionAnnouncer, IGMediaDeletedAnnouncer, IGMediaHiddenAnnouncer, IGSavedItemStatusAnnouncer, IGTVSeriesDeleteAnnouncer, IGTVSeriesEditAnnouncer, IGTVUploadStatusAnnouncer, IGTVWatchHistoryBulkRemoveAnnouncer, IGUserLauncherSetProviding;

@interface IGTVDestinationParser : NSObject <IGNetworkParser>
{
    IGTVSeenStateStore *_tvSeenStateStore;
    id <IGMediaDeletedAnnouncer> _mediaDeletedAnnouncer;
    id <IGMediaHiddenAnnouncer> _mediaHiddenAnnouncer;
    id <IGTVSeriesDeleteAnnouncer> _tvSeriesDeleteAnnouncer;
    id <IGTVSeriesEditAnnouncer> _tvSeriesEditAnnouncer;
    id <IGTVUploadStatusAnnouncer> _tvUploadStatusAnnouncer;
    id <IGSavedItemStatusAnnouncer> _savedItemStatusAnnouncer;
    id <IGFeedItemCollectionAnnouncer> _feedItemCollectionAnnouncer;
    id <IGTVWatchHistoryBulkRemoveAnnouncer> _tvWatchHistoryBulkRemoveAnnouncer;
    IGValues *_liveBroadcastValues;
    IGTVDestinationClientConfigsProvider *_destinationClientConfigsProvider;
    id <IGAPIClient> _networker;
    IGObjectStores *_objectStores;
    IGUser *_currentUser;
    IGMedia *_firstFeedItem;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    IGTitleAndSubtitleViewModel *_titleAndSubtitleViewModel;
}

- (void).cxx_destruct;
- (void)_setFirstFeedItemIfNeeded:(id)arg1;
- (id)_channelDataSourceFromChannelResponse:(id)arg1 withFirstMediaAsPrependMediaId:(_Bool)arg2;
- (id)_channelDataSourceFromChannelResponse:(id)arg1;
- (id)parsedObjectFromResponse:(id)arg1;
- (id)initWithTVSeenStateStore:(id)arg1 mediaDeletedAnnouncer:(id)arg2 mediaHiddenAnnouncer:(id)arg3 tvSeriesDeleteAnnouncer:(id)arg4 tvSeriesEditAnnouncer:(id)arg5 tvUploadStatusAnnouncer:(id)arg6 savedItemStatusAnnouncer:(id)arg7 feedItemCollectionAnnouncer:(id)arg8 tvWatchHistoryBulkRemoveAnnouncer:(id)arg9 destinationClientConfigsProvider:(id)arg10 networker:(id)arg11 objectStores:(id)arg12 currentUser:(id)arg13 launcherSetProvider:(id)arg14 liveBroadcastValues:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
