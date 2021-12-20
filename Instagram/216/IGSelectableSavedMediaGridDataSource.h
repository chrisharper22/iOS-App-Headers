//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGEmptyFeedView, IGFeedNetworkSource, IGUserSession, NSMutableArray, NSString;
@protocol IGLoadFailureViewCellRetryDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGSelectableSavedMediaDataSourceDelegate;

@interface IGSelectableSavedMediaGridDataSource : NSObject <IGListAdapterDataSource>
{
    IGEmptyFeedView *_emptyView;
    id <IGMediaThumbnailSectionControllerSelectionDelegate> _mediaThumbnailSelectionDelegate;
    id <IGSelectableSavedMediaDataSourceDelegate> _delegate;
    IGFeedNetworkSource *_feedNetworkSource;
    NSMutableArray *_items;
    IGUserSession *_userSession;
    NSString *_collectionIdAddingTo;
    NSString *_analyticsModule;
    id <IGLoadFailureViewCellRetryDelegate> _loadFailureRetryDelegate;
    struct IGGridLayoutConfiguration _feedLayoutConfiguration;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLoadFailureViewCellRetryDelegate> loadFailureRetryDelegate; // @synthesize loadFailureRetryDelegate=_loadFailureRetryDelegate;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(retain, nonatomic) NSString *collectionIdAddingTo; // @synthesize collectionIdAddingTo=_collectionIdAddingTo;
@property(nonatomic) struct IGGridLayoutConfiguration feedLayoutConfiguration; // @synthesize feedLayoutConfiguration=_feedLayoutConfiguration;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(nonatomic) __weak id <IGSelectableSavedMediaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2 retryDelegate:(id)arg3 mediaThumbnailSelectionDelegate:(id)arg4 feedLayoutConfiguration:(struct IGGridLayoutConfiguration)arg5 collectionIdAddingTo:(id)arg6 analyticsModule:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

