//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGFeedNetworkSource, IGUserSession, NSDictionary, NSMutableArray, NSString;
@protocol IGMediaThumbnailSectionControllerSelectionDelegate;

@interface IGSavedMediaCollectionsPivotMediaFeedAdapterDataSource : NSObject <IGListAdapterDataSource>
{
    NSDictionary *_loggingExtras;
    NSMutableArray *_items;
    IGFeedNetworkSource *_feedNetworkSource;
    IGUserSession *_userSession;
    id <IGMediaThumbnailSectionControllerSelectionDelegate> _selectionDelegate;
    NSString *_analyticsModule;
    struct IGGridLayoutConfiguration _feedLayoutConfiguration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) struct IGGridLayoutConfiguration feedLayoutConfiguration; // @synthesize feedLayoutConfiguration=_feedLayoutConfiguration;
@property(readonly, nonatomic) __weak id <IGMediaThumbnailSectionControllerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2 selectionDelegate:(id)arg3 feedLayoutConfiguration:(struct IGGridLayoutConfiguration)arg4 loggingExtras:(id)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

