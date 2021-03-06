//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol IGSearchCacheDelayManagerDelegate;

@interface IGSearchCacheDelayManager : NSObject
{
    id <IGSearchCacheDelayManagerDelegate> _delegate;
    NSMutableSet *_queriesDelayed;
}

- (void).cxx_destruct;
- (void)endDelayForQuery:(id)arg1;
- (_Bool)isQueryWaitingForDelay:(id)arg1;
- (void)startDelay:(double)arg1 forQuery:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

