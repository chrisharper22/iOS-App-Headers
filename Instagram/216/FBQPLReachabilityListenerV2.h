//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBReachabilityListener-Protocol.h"

@class NSString;

@interface FBQPLReachabilityListenerV2 : NSObject <FBReachabilityListener>
{
    unsigned long long _reachabilityState;
}

- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (id)networkSubtypeDescription;
- (id)networkTypeDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

