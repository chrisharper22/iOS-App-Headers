//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDiscoveryGridLoggingProvider-Protocol.h"

@class IGDiscoveryTopicModel, IGSessionTracker, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGDiscoveryParentUnitLoggingProvider, IGGridItemPositionProvider, IGQPExploreGuideProvider;

@interface IGExploreGridLoggingProvider : NSObject <IGDiscoveryGridLoggingProvider>
{
    IGDiscoveryTopicModel *_topic;
    id <IGAnalyticsEventLoggingProtocol> _logger;
    IGSessionTracker *_sessionTracker;
    id <IGGridItemPositionProvider> _gridPositionProvider;
    id <IGQPExploreGuideProvider> _qpExploreGuideProvider;
    id <IGDiscoveryParentUnitLoggingProvider> _parentUnitLoggingProvider;
}

- (void).cxx_destruct;
- (void)logItemSelection:(id)arg1 loggingExtras:(id)arg2 atIndexPath:(id)arg3;
- (void)logImpressionForItem:(id)arg1 loggingExtras:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, nonatomic) NSString *uniquenessIdentifier;
@property(readonly, nonatomic) NSString *module;
- (id)initWithTopic:(id)arg1 logger:(id)arg2 sessionTracker:(id)arg3 gridPositionProvider:(id)arg4 qpExploreGuideProvider:(id)arg5 parentUnitLoggingProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
