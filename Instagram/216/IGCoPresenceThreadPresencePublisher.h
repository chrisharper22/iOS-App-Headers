//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IGCoPresenceThreadPresencePublisher : NSObject
{
    MISSING_TYPE *realtimeClient;
    MISSING_TYPE *kIGMQTTContextualPresenceTopic;
}

- (void).cxx_destruct;
- (id)init;
- (void)clearContextualThreadPresenceFor:(id)arg1 isGroup:(_Bool)arg2;
- (void)setContextualThreadPresenceFor:(id)arg1 isGroup:(_Bool)arg2;
- (id)initWithRealtimeClient:(id)arg1;

@end
