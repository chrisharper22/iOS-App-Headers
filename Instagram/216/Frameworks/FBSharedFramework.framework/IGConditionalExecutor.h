//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IGConditionalExecutor : NSObject
{
    _Bool _signaled;
    NSMutableArray *_blocksToExecuteWhenConditionMet;
}

- (void).cxx_destruct;
- (void)executeWhenConditionMet:(CDUnknownBlockType)arg1;
- (void)signal;

@end
