//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol IGDirectMessageFetching
- (void)fetchVisualMessagesForThreadId:(NSString *)arg1 cursor:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)fetchExistingMessagesWithIds:(NSArray *)arg1 clientContexts:(NSArray *)arg2 threadId:(NSString *)arg3 successBlock:(void (^)(NSArray *))arg4 failureBlock:(void (^)(NSError *))arg5;
@end
