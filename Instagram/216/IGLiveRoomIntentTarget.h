//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGLiveRoomIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _autoJoin;
    NSString *_broadcastId;
    NSString *_hostId;
    NSString *_serverInfoData;
    long long _source;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool autoJoin; // @synthesize autoJoin=_autoJoin;
@property(readonly, nonatomic) NSString *serverInfoData; // @synthesize serverInfoData=_serverInfoData;
@property(readonly, nonatomic) NSString *hostId; // @synthesize hostId=_hostId;
@property(readonly, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
- (id)initWithBroadcastId:(id)arg1 hostId:(id)arg2 serverInfoData:(id)arg3 autoJoin:(_Bool)arg4 source:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
