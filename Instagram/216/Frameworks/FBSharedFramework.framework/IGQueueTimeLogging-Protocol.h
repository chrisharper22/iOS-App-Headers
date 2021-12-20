//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol IGQueueTimeLogging <NSObject>
- (void)endMarkerWithIdentifier:(NSString *)arg1;
- (void)setSourceAsDiskForMarkerWithIdentifier:(NSString *)arg1;
- (void)setSourceAsNetworkForMarkerWithIdentifier:(NSString *)arg1;
- (void)setPrefetchOngoingForMarkerWithIdentifier:(NSString *)arg1;
- (void)startMarkerWithIdentifier:(NSString *)arg1 type:(NSString *)arg2 url:(NSURL *)arg3 module:(NSString *)arg4 currentBandwidth:(double)arg5;
- (_Bool)isTrackingIdentifier:(NSString *)arg1;
- (void)setShouldLogURLs:(_Bool)arg1;
@end
