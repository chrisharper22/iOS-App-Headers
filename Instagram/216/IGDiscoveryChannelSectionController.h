//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedPreviewableSectionController-Protocol.h"

@class IGDiscoveryGridHiddenStateHelper, IGDiscoveryGridItem, IGDiscoveryTopicModel, IGPlaybackCoordinator, IGUserSession, NSString;
@protocol IGDiscoveryChannelSectionControllerSelectionDelegate, IGDiscoveryGridLoggingProvider, IGDiscoverySectionLoggingProvider, IGGridItemPositionProvider;

@interface IGDiscoveryChannelSectionController : IGListSectionController <IGFeedPreviewableSectionController>
{
    IGUserSession *_userSession;
    IGDiscoveryGridItem *_gridItem;
    IGPlaybackCoordinator *_playbackCoordinator;
    struct IGGridLayoutConfiguration _layoutConfig;
    id <IGDiscoverySectionLoggingProvider> _discoveryLoggingProvider;
    id <IGDiscoveryChannelSectionControllerSelectionDelegate> _selectionDelegate;
    id <IGGridItemPositionProvider> _gridPositionProvider;
    IGDiscoveryTopicModel *_topic;
    IGDiscoveryGridHiddenStateHelper *_hiddenStateHelper;
    unsigned long long _loggingScheme;
    id <IGDiscoveryGridLoggingProvider> _gridLoggingProvider;
}

- (void).cxx_destruct;
- (void)presentFeedPreviewableItem;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithLayoutConfig:(struct IGGridLayoutConfiguration)arg1 userSession:(id)arg2 playbackCoordinator:(id)arg3 discoveryLoggingProvider:(id)arg4 selectionDelegate:(id)arg5 loggingScheme:(unsigned long long)arg6 gridPositionProvider:(id)arg7 gridLoggingProvider:(id)arg8 topic:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

