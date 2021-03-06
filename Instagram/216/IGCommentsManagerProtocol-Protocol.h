//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAnalyticsNavigationState, IGCommentModel, IGCommentThread, IGCommentWellbeingConfiguration, IGMedia, NSDictionary, NSString;
@protocol IGCommentThreadUpdateAnnouncer;

@protocol IGCommentsManagerProtocol <NSObject>
@property(copy, nonatomic) NSString *sortOrder;
@property(readonly, nonatomic) IGCommentThread *commentThread;
@property(readonly, nonatomic) unsigned long long loadingState;
@property(readonly, nonatomic) IGMedia *media;
- (_Bool)haltPostingComment:(IGCommentModel *)arg1;
- (void)retryPostComment:(IGCommentModel *)arg1;
- (void)postCommentText:(NSString *)arg1 replyToComment:(IGCommentModel *)arg2 loggingExtraParams:(NSDictionary *)arg3 navigationState:(IGAnalyticsNavigationState *)arg4 commentWellbeingConfig:(IGCommentWellbeingConfiguration *)arg5;
- (void)loadMoreBelowWhenAvailable;
- (void)loadMoreAboveWhenAvailable;
- (void)loadFirstPage:(void (^)(IGMedia *, IGCommentThread *, _Bool))arg1 reloadFeedItem:(_Bool)arg2;
- (id <IGCommentThreadUpdateAnnouncer>)threadUpdateAnnouncer;
- (_Bool)isLoading;
@end

