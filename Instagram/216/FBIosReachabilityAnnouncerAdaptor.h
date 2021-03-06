//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBReachabilityListener-Protocol.h"

@class FBReachabilityAnnouncer, NSString;

@interface FBIosReachabilityAnnouncerAdaptor : NSObject <FBReachabilityListener>
{
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    struct function<void (unsigned long, unsigned long)> _reachabilityStateCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
@property(readonly) unsigned long long reachabilityState;
- (void)dealloc;
- (id)initWithReachabilityAnnouncer:(id)arg1 reachabilityStateCallback:(void *)arg2;
- (id)initWithReachabilityStateCallback:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

