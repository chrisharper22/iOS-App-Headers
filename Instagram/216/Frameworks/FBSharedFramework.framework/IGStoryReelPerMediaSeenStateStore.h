//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGDiskManager, IGObjectDiskStorage, IGStoryReelStore, NSMutableDictionary;
@protocol IGStoryReelPerMediaSeenStateStoreAnnouncer;

@interface IGStoryReelPerMediaSeenStateStore : NSObject <IGUserSessionEndingObject>
{
    IGStoryReelStore *_reelStore;
    IGDiskManager *_diskManager;
    id <IGStoryReelPerMediaSeenStateStoreAnnouncer> _announcer;
    NSMutableDictionary *_reelPkToPerMediaSeenState;
    IGObjectDiskStorage *_storageReelPkToPerMediaSeenState;
}

- (void).cxx_destruct;
- (void)_archive;
- (void)userSessionWillEnd;
- (id)_perMediaSeenStateForStoryReel:(id)arg1 reelLatestSeenMediaDate:(id)arg2;
- (void)addListener:(id)arg1;
- (_Bool)hasSeenMediaId:(id)arg1 reelPk:(id)arg2 storyReelSeenStateStore:(id)arg3;
- (void)setSeenMediaDate:(id)arg1 reelPk:(id)arg2 storyReelSeenStateStore:(id)arg3;
- (id)_initWithReelStore:(id)arg1 diskManager:(id)arg2;

@end

