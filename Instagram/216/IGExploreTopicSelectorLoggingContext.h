//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDSSegmentedPillBarViewImpressionDelegate-Protocol.h"
#import "IGDiscoveryNavigationTrayImpressionHandler-Protocol.h"

@class IGExploreDataController, IGSessionTracker, NSMutableSet, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGExploreTopicSelectorLoggingContext : NSObject <IGDiscoveryNavigationTrayImpressionHandler, IGDSSegmentedPillBarViewImpressionDelegate>
{
    IGSessionTracker *_sessionTracker;
    NSString *_analyticsModule;
    NSMutableSet *_loggedTopicImpressionIds;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGExploreDataController *_dataController;
}

- (void).cxx_destruct;
- (_Bool)segmentedPillBar:(id)arg1 pillAtIndex:(unsigned long long)arg2 didUpdateImpressionStateWithContext:(id)arg3;
- (void)navigationTray:(id)arg1 willShowItem:(id)arg2 atSection:(long long)arg3;
- (void)logImpressionForTopic:(id)arg1 atSection:(long long)arg2;
- (id)initWithSessionTracker:(id)arg1 analyticsModule:(id)arg2 analyticsLogger:(id)arg3 dataController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
