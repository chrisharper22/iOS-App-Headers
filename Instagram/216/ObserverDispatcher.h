//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ObserverDispatcher : NSObject
{
    CDUnknownBlockType _observer;
    CDUnknownBlockType _dispatcher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
- (id)initWithObserver:(CDUnknownBlockType)arg1 dispatcher:(CDUnknownBlockType)arg2;

@end

