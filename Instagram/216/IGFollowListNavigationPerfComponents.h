//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGFollowListNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceComponent *_users;
    IGPerformanceComponent *_usersListUpdate;
}

+ (id)loggerWithFollowListType:(long long)arg1 networkingActiveJoinerAnnouncer:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGPerformanceComponent *usersListUpdate; // @synthesize usersListUpdate=_usersListUpdate;
@property(readonly, nonatomic) IGPerformanceComponent *users; // @synthesize users=_users;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (id)_initWithMarkerID:(int)arg1 networkingActiveJoinerAnnouncer:(id)arg2;

@end
