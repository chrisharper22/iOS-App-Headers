//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectVisualMessageViewerPreloader, NSOrderedSet;

@protocol IGDirectVisualMessageViewerDataSource <NSObject>
@property(readonly, nonatomic) NSOrderedSet *visualMessages;
@property(readonly, nonatomic) long long totalMessageCount;
- (_Bool)shouldAutoloopToFirstUnseenMessage;
- (_Bool)canLoopBackwardsToLastItemFromFirstItem;
- (void)lastMessageWithPreloader:(IGDirectVisualMessageViewerPreloader *)arg1 didBeginLoading:(void (^)(void))arg2 completion:(void (^)(IGDirectVisualMessage *, long long))arg3;
- (void)firstMessageAfterLoopingWithCompletion:(void (^)(IGDirectVisualMessage *, long long))arg1;
- (void)previousMessageWithCompletion:(void (^)(IGDirectVisualMessage *, long long))arg1;
- (void)nextMessageWithPreloader:(IGDirectVisualMessageViewerPreloader *)arg1 didBeginLoading:(void (^)(void))arg2 completion:(void (^)(IGDirectVisualMessage *, long long))arg3 error:(void (^)(void))arg4;
@end

