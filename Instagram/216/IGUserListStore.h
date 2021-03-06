//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserListCacheDelegate-Protocol.h"

@class IGObjectDiskStorage, NSString;

@interface IGUserListStore : NSObject <IGUserListCacheDelegate>
{
    IGObjectDiskStorage *_storageUserListSuggested;
    IGObjectDiskStorage *_storageUserListContacts;
}

- (void).cxx_destruct;
- (void)_archiveUserListForUserListCacheType:(unsigned long long)arg1 userList:(id)arg2;
- (id)_unarchiveUserListForUserListCacheType:(unsigned long long)arg1;
- (void)userListCache:(id)arg1 didUpdateWithUserList:(id)arg2 cacheType:(unsigned long long)arg3;
- (id)userListCacheForCacheType:(unsigned long long)arg1;
- (id)initWithDiskManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

