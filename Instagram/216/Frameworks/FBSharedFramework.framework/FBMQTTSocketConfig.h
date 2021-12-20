//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface FBMQTTSocketConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _keepPersistentConnection;
    _Bool _useKeepAliveIntervalFgForBg;
    int _voipKeepAliveTime;
    int _foregroundKeepAliveTime;
}

@property(readonly, nonatomic) int foregroundKeepAliveTime; // @synthesize foregroundKeepAliveTime=_foregroundKeepAliveTime;
@property(readonly, nonatomic) int voipKeepAliveTime; // @synthesize voipKeepAliveTime=_voipKeepAliveTime;
@property(readonly, nonatomic) _Bool useKeepAliveIntervalFgForBg; // @synthesize useKeepAliveIntervalFgForBg=_useKeepAliveIntervalFgForBg;
@property(readonly, nonatomic) _Bool keepPersistentConnection; // @synthesize keepPersistentConnection=_keepPersistentConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeepPersistentConnection:(_Bool)arg1 useKeepAliveIntervalFgForBg:(_Bool)arg2 voipKeepAliveTime:(int)arg3 foregroundKeepAliveTime:(int)arg4;
- (id)initWithCoder:(id)arg1;

@end

