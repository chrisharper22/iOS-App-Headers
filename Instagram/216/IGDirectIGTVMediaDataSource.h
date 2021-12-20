//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGNetworkSourceDelegate-Protocol.h"
#import "IGTVThumbnailSectionControllerDelegate-Protocol.h"

@class IGNetworkSource, IGUserSession, NSArray, NSString;
@protocol IGDirectIGTVMediaDataSourceDelegate;

@interface IGDirectIGTVMediaDataSource : NSObject <IGNetworkSourceDelegate, IGTVThumbnailSectionControllerDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGNetworkSource *_networkSource;
    NSString *_apiPath;
    NSArray *_items;
    NSString *_analyticsModule;
    id <IGDirectIGTVMediaDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectIGTVMediaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)thumbnailSectionController:(id)arg1 didShowSectionModel:(id)arg2 fromCell:(id)arg3;
- (void)thumbnailSectionControllerDidLongPressStoryTray:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapTrayItem:(id)arg1 availableTrayItems:(id)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)thumbnailSectionControllerDidLongPressFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3;
- (void)thumbnailSectionControllerDidTapFeedItem:(id)arg1 withSourceChannelType:(id)arg2 videoPosition:(id)arg3 fromView:(id)arg4;
- (_Bool)thumbnailSectionControllerShouldBeginLongPress;
- (long long)loggingPositionOffsetForThumbnailSectionController;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (unsigned long long)numberOfItems;
- (_Bool)isLoading;
- (void)fetchMore;
- (void)fetch;
- (id)initWithUserSession:(id)arg1 config:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
