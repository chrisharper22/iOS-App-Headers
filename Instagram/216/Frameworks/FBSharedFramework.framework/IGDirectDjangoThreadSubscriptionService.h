//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectDataSubscriptionPipe, IGDirectLatestSubscriptionValueRetriever;
@protocol IGDirectPublishedInboxSubscriptionDataFetching;

@interface IGDirectDjangoThreadSubscriptionService : NSObject
{
    IGDirectLatestSubscriptionValueRetriever *_latestValueRetriever;
    id <IGDirectPublishedInboxSubscriptionDataFetching> _inboxSubscriptionDataFetcher;
    IGDirectDataSubscriptionPipe *_inboxPipe;
    IGDirectDataSubscriptionPipe *_publishedInboxSubscriptionPipe;
}

- (void).cxx_destruct;
- (void)loadMessageIslandForThreadId:(id)arg1 anchorMessageId:(id)arg2;
- (void)ensureMinimumNumberOfPublishedMessages:(long long)arg1 forThreadId:(id)arg2;
- (void)loadPreviousPageOfMessagesForThreadId:(id)arg1;
- (void)registerSingleUseSubscriptionForThreadId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)registerSubscriptionForThreadId:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)initWithDirectInboxSubscriptionService:(id)arg1;
- (id)retrievePublishedThreadSubscriptionPipeForThreadId:(id)arg1;
- (id)retrieveSubscriptionPipeForThreadId:(id)arg1;

@end

