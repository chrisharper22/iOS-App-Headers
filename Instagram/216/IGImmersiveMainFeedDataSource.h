//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGStoryTrayLoggingContextDataSource-Protocol.h"

@class IGImmersiveFeedComponents, IGMainFeedNetworkSourceController, IGMainStoryTrayDataSource, IGUserSession, NSString;
@protocol IGMainFeedStoryTrayLoggingContextProvider, IGStoryTraySectionControllerActionDelegate><IGStoryTraySectionControllerViewerDelegate;

@interface IGImmersiveMainFeedDataSource : NSObject <IGListAdapterDataSource, IGStoryTrayLoggingContextDataSource>
{
    IGMainFeedNetworkSourceController *_networkSourceController;
    IGUserSession *_userSession;
    IGImmersiveFeedComponents *_feedComponents;
    id <IGMainFeedStoryTrayLoggingContextProvider> _storyTrayLoggingContextProvider;
    id <IGStoryTraySectionControllerActionDelegate><IGStoryTraySectionControllerViewerDelegate> _storyTrayDelegate;
    NSString *_analyticsModule;
    IGMainStoryTrayDataSource *_mainStoryTrayDataSource;
}

- (void).cxx_destruct;
- (id)storyTrayViewModelsForLoggingContext;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithNetworkSourceController:(id)arg1 feedComponents:(id)arg2 storyTrayLoggingContextProvider:(id)arg3 storyTrayDelegate:(id)arg4 userSession:(id)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

