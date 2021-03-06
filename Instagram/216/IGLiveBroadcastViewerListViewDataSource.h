//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGUserSession, NSArray, NSString, UIView;
@protocol IGStoryViewerSectionControllerViewerDelegate;

@interface IGLiveBroadcastViewerListViewDataSource : NSObject <IGListAdapterDataSource>
{
    NSString *_module;
    NSArray *_viewerList;
    id <IGStoryViewerSectionControllerViewerDelegate> _viewerDelegate;
    IGUserSession *_userSession;
    UIView *_noResultsView;
    long long _viewerListType;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)setViewerList:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewerDelegate:(id)arg2 viewerListType:(long long)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

