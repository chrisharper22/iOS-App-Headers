//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBViewpointAction, IGFNFVideoPlayer, IGUser, NSDictionary, NSString;
@protocol IGAnalyticsModule, IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate;

@protocol IGVideoLogging <NSObject>
@property(readonly, nonatomic) __weak id <IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate> feedItemLoggingProvider;
- (NSDictionary *)extraInfoForLikeWithIsDoubleTap:(_Bool)arg1;
- (void)videoViewerDidDoubleTapToLikeOnAlreadyLikedPostWithAnalyticsModule:(NSString *)arg1;
- (void)videoViewerDidTapSendToReshareWithAnalyticsModule:(NSString *)arg1;
- (void)videoViewerDidTapShareIconWithShareSheetSessionId:(NSString *)arg1 analyticsModule:(NSString *)arg2;
- (void)videoViewerDidStopPlayingVideoInPlayer:(IGFNFVideoPlayer *)arg1;
- (void)videoViewerDidStartPlayingVideoInPlayer:(IGFNFVideoPlayer *)arg1;
- (FBViewpointAction *)actionForVideoViewTrackingWithName:(NSString *)arg1 player:(IGFNFVideoPlayer *)arg2 analyticsModule:(NSString *)arg3;
- (FBViewpointAction *)viewabilityActionWithAnalyticsModuleProvider:(id <IGAnalyticsModule>)arg1;
- (FBViewpointAction *)impressionUpdateActionWithAnalyticsModule:(NSString *)arg1;
- (FBViewpointAction *)impressionMeasureActionWithAnalyticsModule:(NSString *)arg1;
- (FBViewpointAction *)actionForVideoTimeSpentTrackingWithName:(NSString *)arg1 analyticsModule:(NSString *)arg2;
- (void)videoViewerDidTapBrandedContentCreator:(IGUser *)arg1 source:(NSString *)arg2;
- (void)videoViewerDidTapBrandProfile:(IGUser *)arg1 source:(NSString *)arg2;
- (void)videoViewerDidTapMoreOptionsWithAnalyticsModule:(NSString *)arg1;
@end

