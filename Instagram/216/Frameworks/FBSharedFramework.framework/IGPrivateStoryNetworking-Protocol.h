//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGPrivateStoryList, NSArray, NSString;
@protocol IGStoryItemType;

@protocol IGPrivateStoryNetworking <NSObject>
- (void)deletePrivateList:(IGPrivateStoryList *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createPrivateList:(NSArray *)arg1 listName:(NSString *)arg2 emojiUnicodeString:(NSString *)arg3 successBlock:(void (^)(NSArray *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)removeMembersFromPrivateList:(NSArray *)arg1 privateList:(IGPrivateStoryList *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)addMembersToPrivateList:(NSArray *)arg1 privateList:(IGPrivateStoryList *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)fetchMembersForPrivateList:(IGPrivateStoryList *)arg1 successBlock:(void (^)(NSArray *, NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)fetchPrivateLists:(void (^)(NSArray *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)removeMembersFromStory:(NSArray *)arg1 storyItem:(id <IGStoryItemType>)arg2 module:(NSString *)arg3 source:(NSString *)arg4 successBlock:(void (^)(NSArray *))arg5 failureBlock:(void (^)(NSError *))arg6;
- (void)addMembersToStory:(NSArray *)arg1 storyItem:(id <IGStoryItemType>)arg2 module:(NSString *)arg3 source:(NSString *)arg4 successBlock:(void (^)(NSArray *))arg5 failureBlock:(void (^)(NSError *))arg6;
- (void)fetchMembersForStory:(id <IGStoryItemType>)arg1 successBlock:(void (^)(NSArray *, NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)removeMembersFromMainList:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)addMembersToMainList:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)fetchMembersForMainList:(void (^)(NSArray *, NSArray *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)fetchShareInfo:(void (^)(NSNumber *, NSArray *, NSArray *))arg1 failureBlock:(void (^)(NSError *))arg2;
@end
