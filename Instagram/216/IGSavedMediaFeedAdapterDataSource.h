//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGEmptyFeedView, IGFeedNetworkSource, IGSavedMediaCollection, IGUserSession, NSMutableArray, NSString;
@protocol IGEmptyFeedViewDelegate, IGMediaThumbnailConfigurationType, IGMediaThumbnailSectionControllerSelectionDelegate, IGSavedMediaCollectionHeaderSectionControllerDelegate;

@interface IGSavedMediaFeedAdapterDataSource : NSObject <IGListAdapterDataSource>
{
    IGEmptyFeedView *_emptyView;
    _Bool _showCreateGuideButton;
    IGFeedNetworkSource *_feedNetworkSource;
    NSMutableArray *_items;
    IGUserSession *_userSession;
    struct IGGridLayoutConfiguration _feedLayoutConfiguration;
    NSString *_analyticsModule;
    id <IGMediaThumbnailSectionControllerSelectionDelegate> _selectionDelegate;
    id <IGEmptyFeedViewDelegate> _emptyFeedDelegate;
    id <IGSavedMediaCollectionHeaderSectionControllerDelegate> _headerDelegate;
    id <IGMediaThumbnailConfigurationType> _thumbnailConfiguration;
    IGSavedMediaCollection *_collection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSavedMediaCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)updateThumbnailConfiguration:(id)arg1 listAdapter:(id)arg2;
- (id)_buildEmptyViewModel;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2 showCreateGuideButton:(_Bool)arg3 headerDelegate:(id)arg4 selectionDelegate:(id)arg5 emptyFeedDelegate:(id)arg6 feedLayoutConfiguration:(struct IGGridLayoutConfiguration)arg7 thumbnailConfiguration:(id)arg8 collection:(id)arg9 analyticsModule:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

