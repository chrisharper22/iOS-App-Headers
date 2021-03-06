//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGTVThumbnailSectionLoggingContextType-Protocol.h"

@class IGAnalyticsStructuredLogger, IGLiveBroadcast, NSString;

@interface IGLiveViewerPostLiveLoggingContext : NSObject <IGTVThumbnailSectionLoggingContextType>
{
    IGLiveBroadcast *_currentBroadcast;
    IGAnalyticsStructuredLogger *_structuredLogger;
    NSString *_sessionId;
    long long _entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *analyticsModule;
- (id)impressionLoggingExtrasForBroadcast:(id)arg1 availableBroadcastCount:(long long)arg2 component:(long long)arg3 sourceChannelType:(id)arg4 videoPosition:(id)arg5;
- (void)logVideoTapWithBroadcast:(id)arg1 availableBroadcastCount:(long long)arg2 component:(long long)arg3 sourceChannelType:(id)arg4 videoPosition:(id)arg5;
- (id)impressionLoggingExtrasForMedia:(id)arg1 component:(long long)arg2 sourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)logVideoTapWithMedia:(id)arg1 fromComponent:(long long)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (id)_followStatusWithBroadcaster:(id)arg1;
- (void)notifyPostLiveClick:(id)arg1 atIndex:(long long)arg2 suggestedPostLiveCount:(long long)arg3;
- (void)notifyClickOfSuggestedBroadcast:(id)arg1 atIndex:(long long)arg2 suggestedLiveCount:(long long)arg3;
- (void)notifyPostLiveImpression:(id)arg1 atPosition:(long long)arg2 suggestedLiveCount:(long long)arg3;
- (void)notifyImpressionOfSuggestedBroadcast:(id)arg1 atPosition:(long long)arg2 suggestedLiveCount:(long long)arg3;
- (void)notifyEndScreenImpression;
- (id)initWithAnalyticsLogger:(id)arg1 sessionId:(id)arg2 currentUser:(id)arg3 currentBroadcast:(id)arg4 entryPoint:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

