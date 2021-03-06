//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGTVFeedTrayThumbnailSectionControllerDelegate-Protocol.h"
#import "IGTVHorizontalChannelListControllerDelegate-Protocol.h"

@class IGHashtagModel, IGTVChannelDataSource, IGTVFeedTrayLoadingObject, IGTVHorizontalChannelListController, IGUserSession, NSArray, NSString;
@protocol IGDiscoveryIGTVChannelSectionControllerDelegate;

@interface IGDiscoveryIGTVChannelSectionController : IGListSectionController <IGTVHorizontalChannelListControllerDelegate, IGTVFeedTrayThumbnailSectionControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_browseSessionId;
    IGHashtagModel *_hashtagModel;
    NSString *_analyticsModule;
    IGTVHorizontalChannelListController *_listController;
    IGTVChannelDataSource *_channelDataSource;
    NSArray *_loadingObjects;
    IGTVFeedTrayLoadingObject *_canLoadMoreObject;
    id <IGDiscoveryIGTVChannelSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *browseSessionId; // @synthesize browseSessionId=_browseSessionId;
@property(readonly, nonatomic) IGTVChannelDataSource *channelDataSource; // @synthesize channelDataSource=_channelDataSource;
- (void)thumbnailSectionController:(id)arg1 startTrackingImpressionsForCell:(id)arg2 withFeedItem:(id)arg3 atIndex:(long long)arg4;
- (void)didRequestShowActionMenuForThumbnailSectionController:(id)arg1;
- (void)didSelectThumbnailSectionController:(id)arg1 atIndex:(long long)arg2;
- (id)horizontalChannelListController:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)horizontalChannelListController:(id)arg1 objectsForFeedItems:(id)arg2 liveItems:(id)arg3 loadingState:(long long)arg4;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 channelResponse:(id)arg2 hashtagModel:(id)arg3 analyticsModule:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

