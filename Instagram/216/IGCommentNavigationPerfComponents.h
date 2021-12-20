//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGCommentNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceComponent *_thread;
    IGPerformanceComponent *_threadListUpdate;
    IGPerformanceComponent *_keyboard;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPerformanceComponent *keyboard; // @synthesize keyboard=_keyboard;
@property(readonly, nonatomic) IGPerformanceComponent *threadListUpdate; // @synthesize threadListUpdate=_threadListUpdate;
@property(readonly, nonatomic) IGPerformanceComponent *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (id)initWithNetworkingActiveJoinerAnnouncer:(id)arg1;

@end

