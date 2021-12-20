//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGQueueTimeLogging-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IGQPLQueueTimeLogger : NSObject <IGQueueTimeLogging>
{
    NSMutableDictionary *_identifierMarkerMap;
}

- (void).cxx_destruct;
- (void)endMarkerWithIdentifier:(id)arg1;
- (void)setSourceAsDiskForMarkerWithIdentifier:(id)arg1;
- (void)setSourceAsNetworkForMarkerWithIdentifier:(id)arg1;
- (void)setPrefetchOngoingForMarkerWithIdentifier:(id)arg1;
- (void)startMarkerWithIdentifier:(id)arg1 type:(id)arg2 url:(id)arg3 module:(id)arg4 currentBandwidth:(double)arg5;
- (_Bool)isTrackingIdentifier:(id)arg1;
- (void)setShouldLogURLs:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

