//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGHashtagNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceComponent *_feed;
    IGPerformanceComponent *_feedListUpdate;
    IGPerformanceComponent *_info;
    IGPerformanceComponent *_infoListUpdate;
    IGPerformanceComponent *_story;
    IGPerformanceComponent *_storyListUpdate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPerformanceComponent *storyListUpdate; // @synthesize storyListUpdate=_storyListUpdate;
@property(readonly, nonatomic) IGPerformanceComponent *story; // @synthesize story=_story;
@property(readonly, nonatomic) IGPerformanceComponent *infoListUpdate; // @synthesize infoListUpdate=_infoListUpdate;
@property(readonly, nonatomic) IGPerformanceComponent *info; // @synthesize info=_info;
@property(readonly, nonatomic) IGPerformanceComponent *feedListUpdate; // @synthesize feedListUpdate=_feedListUpdate;
@property(readonly, nonatomic) IGPerformanceComponent *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (id)initWithNetworkingActiveJoinerAnnouncer:(id)arg1;

@end

