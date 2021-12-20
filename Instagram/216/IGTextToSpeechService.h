//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionEndingObject-Protocol.h"

@class NSMutableSet;
@protocol IGNetworking;

@interface IGTextToSpeechService : NSObject <IGUserSessionEndingObject>
{
    id <IGNetworking> _networker;
    NSMutableSet *_requests;
}

- (void).cxx_destruct;
- (void)_cancelRequests;
- (void)userSessionWillEnd;
- (id)synthesizeText:(id)arg1 voiceID:(id)arg2 source:(id)arg3;
- (void)dealloc;
- (id)initWithNetworker:(id)arg1;

@end
