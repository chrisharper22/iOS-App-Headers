//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAPIClient, IGArchiveBadgeManagerAnnouncer;

@interface IGArchiveBadgeManager : NSObject
{
    id <IGAPIClient> _networker;
    id <IGArchiveBadgeManagerAnnouncer> _announcer;
    unsigned long long _badgeCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clearBadge;
- (void)fetchArchiveBadge;
- (id)initWithNetworker:(id)arg1;

@end

