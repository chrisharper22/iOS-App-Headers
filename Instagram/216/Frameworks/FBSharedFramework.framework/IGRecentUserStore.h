//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGObjectDiskStorage, IGUserStore, NSMutableOrderedSet;

@interface IGRecentUserStore : NSObject <IGUserSessionEndingObject>
{
    IGUserStore *_userStore;
    IGObjectDiskStorage *_storedPks;
    NSMutableOrderedSet *_userPks;
    NSMutableOrderedSet *_users;
}

- (void).cxx_destruct;
- (void)userSessionWillEnd;
- (void)_archive;
- (void)addUser:(id)arg1;
- (id)recentUsersWithFilterBlock:(CDUnknownBlockType)arg1;
- (id)recentUsers;
- (id)initWithUserStore:(id)arg1 diskManager:(id)arg2 fileName:(id)arg3;

@end

