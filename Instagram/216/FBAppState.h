//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface FBAppState : FBValueObject <NSCopying, NSCoding>
{
    long long _applicationTerminationState;
    NSString *_applicationTerminationLastNotification;
    double _timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *applicationTerminationLastNotification; // @synthesize applicationTerminationLastNotification=_applicationTerminationLastNotification;
@property(readonly, nonatomic) long long applicationTerminationState; // @synthesize applicationTerminationState=_applicationTerminationState;
- (id)initWithApplicationTerminationState:(long long)arg1 applicationTerminationLastNotification:(id)arg2 timestamp:(double)arg3;

@end

