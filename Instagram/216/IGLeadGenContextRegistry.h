//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGLeadGenContextRegistry : NSObject
{
    NSMutableDictionary *_contexts;
}

- (void).cxx_destruct;
- (void)unregisterContext:(id)arg1;
- (void)registerContextForMedia:(id)arg1 feedItemTracker:(id)arg2 mediaPosition:(long long)arg3 pageCellState:(id)arg4 leadGenController:(id)arg5 loggingDelegate:(id)arg6;
- (id)contextForMediaId:(id)arg1;
- (id)init;

@end
