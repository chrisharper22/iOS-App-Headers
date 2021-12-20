//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSFastEnumeration-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface IGDirectPublishedThreadSet : NSObject <NSFastEnumeration, NSCopying>
{
    NSArray *_sortedThreads;
    NSSet *_allThreadIds;
    NSDictionary *_sortedThreadsInFolders;
    NSDictionary *_threadIdsInFolders;
    NSDictionary *_threadsByThreadId;
    NSDictionary *_threadsByThreadIdV2;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_183601bc *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (id)threadsFromNewestToOldestForFolderId:(long long)arg1;
- (id)allThreadsFromNewestToOldest;
- (id)allThreadIdsForFolderId:(long long)arg1;
- (id)allThreadIds;
- (id)threadWithThreadIdV2:(id)arg1;
- (id)threadWithThreadId:(id)arg1;
- (id)oldestThread;
- (id)newestThread;
- (id)initWithSortedAllThreads:(id)arg1 sortedThreadsInFolders:(id)arg2 threadIdsInFolders:(id)arg3 threadsByThreadId:(id)arg4 threadsByThreadIdV2:(id)arg5;

@end

