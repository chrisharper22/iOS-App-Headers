//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGBloksStickerFetcherCache, IGBloksStickerFetcherCompletionInvoker, IGUserSession;

@interface IGBloksStickerFetcher : NSObject
{
    IGUserSession *_userSession;
    IGBloksStickerFetcherCache *_cache;
    IGBloksStickerFetcherCompletionInvoker *_completionInvoker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGBloksStickerFetcherCompletionInvoker *completionInvoker; // @synthesize completionInvoker=_completionInvoker;
@property(readonly, nonatomic) IGBloksStickerFetcherCache *cache; // @synthesize cache=_cache;
- (void)fetch:(id)arg1 context:(id)arg2 callbackHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

@end

