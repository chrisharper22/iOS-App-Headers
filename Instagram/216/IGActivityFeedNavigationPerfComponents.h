//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGActivityFeedNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceComponent *_feed;
    IGPerformanceComponent *_feedListUpdate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPerformanceComponent *feedListUpdate; // @synthesize feedListUpdate=_feedListUpdate;
@property(readonly, nonatomic) IGPerformanceComponent *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (id)initWithLauncherSetProvider:(id)arg1 networkingActiveJoinerAnnouncer:(id)arg2;

@end

