//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGModuleItem, IGQueuedOperationRankingInfo, NSString;
@protocol IGResourceOperation;

@interface IGQueuedOperationRankingResult : NSObject
{
    id <IGResourceOperation> _operation;
    unsigned long long _state;
    IGQueuedOperationRankingInfo *_rankingInfo;
    IGModuleItem *_item;
    NSString *_module;
}

- (void).cxx_destruct;
- (id)item;
- (unsigned long long)state;
- (id)rankingInfo;
- (id)operation;
- (id)module;
- (id)initWithOperation:(id)arg1 state:(unsigned long long)arg2 rankingInfo:(id)arg3 item:(id)arg4 module:(id)arg5;

@end
