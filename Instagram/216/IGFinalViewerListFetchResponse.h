//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGLiveBroadcastUserPayUpdate, NSArray, NSNumber;

@interface IGFinalViewerListFetchResponse : NSObject
{
    NSArray *_finalViewers;
    NSNumber *_finalViewerCount;
    IGLiveBroadcastUserPayUpdate *_userPayUpdate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGLiveBroadcastUserPayUpdate *userPayUpdate; // @synthesize userPayUpdate=_userPayUpdate;
@property(readonly, nonatomic) NSNumber *finalViewerCount; // @synthesize finalViewerCount=_finalViewerCount;
@property(readonly, nonatomic) NSArray *finalViewers; // @synthesize finalViewers=_finalViewers;
- (id)initWithFinalViewers:(id)arg1 finalViewerCount:(id)arg2 userPayUpdate:(id)arg3;

@end
