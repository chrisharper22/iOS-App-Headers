//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGRequestTask-Protocol.h>

@interface IGCompletedRequestTask : NSObject <IGRequestTask>
{
}

- (void)flushStream;
- (void)closeStream;
- (void)elevatePrivileges;
- (void)cancel;
- (void)updateRequestToType:(unsigned long long)arg1 behavior:(unsigned long long)arg2;

@end

