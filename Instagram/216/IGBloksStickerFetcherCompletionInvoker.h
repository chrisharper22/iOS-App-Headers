//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGBloksStickerFetcherCompletionInvoker : NSObject
{
    NSMutableDictionary *_callbacks;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (unsigned long long)count:(id)arg1;
- (void)invokeCompletions:(id)arg1 data:(id)arg2;
- (void)addCompletion:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

