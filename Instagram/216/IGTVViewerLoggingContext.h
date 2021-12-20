//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGTVAnalyticsModuleSuffix, IGTVDestinationEntryPoint, IGTVDestinationVideoPosition, IGUserSession, NSString;

@interface IGTVViewerLoggingContext : NSObject
{
    IGUserSession *_userSession;
    NSString *_entryAction;
    _Bool _loggedViewerEntry;
    _Bool _tvGuideShowing;
    NSString *_initialOrganicMediaPK;
    NSString *_browseSessionID;
    IGSessionTracker *_shoppingSessionTracker;
    NSString *_destinationSessionID;
    NSString *_viewerSessionID;
    NSString *_analyticsModule;
    IGTVAnalyticsModuleSuffix *_analyticsModuleSuffix;
    IGTVDestinationEntryPoint *_entryPoint;
    NSString *_surface;
    long long _component;
    NSString *_sourceChannelType;
    IGTVDestinationVideoPosition *_videoPosition;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGTVDestinationVideoPosition *videoPosition; // @synthesize videoPosition=_videoPosition;
@property(readonly, copy, nonatomic) NSString *sourceChannelType; // @synthesize sourceChannelType=_sourceChannelType;
@property(readonly, nonatomic) long long component; // @synthesize component=_component;
@property(readonly, copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(readonly, nonatomic) IGTVDestinationEntryPoint *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGTVAnalyticsModuleSuffix *analyticsModuleSuffix; // @synthesize analyticsModuleSuffix=_analyticsModuleSuffix;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, copy, nonatomic) NSString *viewerSessionID; // @synthesize viewerSessionID=_viewerSessionID;
@property(readonly, copy, nonatomic) NSString *destinationSessionID; // @synthesize destinationSessionID=_destinationSessionID;
@property(readonly, copy, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(readonly, copy, nonatomic) NSString *browseSessionID; // @synthesize browseSessionID=_browseSessionID;
- (id)_videoLoggingAdHocDataForMedia:(id)arg1;
- (id)videoLoggingExtrasForMedia:(id)arg1 channelPK:(id)arg2 chainingSeedMediaId:(id)arg3;
- (id)loggingExtrasForMedia:(id)arg1 channelPK:(id)arg2 parentMediaPK:(id)arg3 hasAdInserted:(_Bool)arg4;
- (id)loggingExtrasForMedia:(id)arg1 parentMediaPK:(id)arg2;
- (id)_allLoggingExtrasForAdItem:(id)arg1 extras:(id)arg2;
- (void)_logPlaybackNavigationEventWithAction:(id)arg1 item:(id)arg2 adItem:(id)arg3 channelPK:(id)arg4 indexInChannel:(long long)arg5 extras:(id)arg6;
- (id)_eventWithName:(id)arg1 media:(id)arg2 sponsoredInfoProvider:(id)arg3;
- (id)_eventWithName:(id)arg1 media:(id)arg2;
- (id)_eventWithName:(id)arg1;
- (id)_loggingExtras;
- (void)logTapCollectionTagWithTitle:(id)arg1;
- (void)logTapIGTVHashtag:(id)arg1;
- (void)logTapIGHashtag:(id)arg1 forMedia:(id)arg2;
- (id)loggingExtrasForAdItem:(id)arg1 adPlatformStatesProvider:(id)arg2;
- (void)logCTATappedForAdItem:(id)arg1 ctaContext:(unsigned long long)arg2 link:(id)arg3 loggingDelegate:(id)arg4 adSkipType:(id)arg5 extra:(id)arg6;
- (void)logTapOnBrandProfileForAdItem:(id)arg1 adSkipType:(id)arg2 extras:(id)arg3;
- (void)logTapOnOpenBrowseButtonForMedia:(id)arg1;
- (void)logTapOnCreatorForMedia:(id)arg1;
- (void)logTapOnPartnerID:(id)arg1 media:(id)arg2;
- (void)logAboutBrandedContentTappedPartnerID:(id)arg1 media:(id)arg2;
- (void)logRemoveBusinessPartnerForMedia:(id)arg1;
- (void)logTagBusinessPartnerFromEditFlowPartnerID:(id)arg1;
- (void)logVideoReplayForMedia:(id)arg1 reason:(long long)arg2;
- (void)logVideoCompletionForMedia:(id)arg1 endOfVideoExperience:(unsigned long long)arg2;
- (void)logVideoChangedToOrientationName:(id)arg1 action:(id)arg2;
- (void)logProfileTapWithMedia:(id)arg1;
- (void)logUnhideOnFeedItem:(id)arg1;
- (void)logHideOnFeedItem:(id)arg1 channelPK:(id)arg2;
- (void)logViewerExitWithAction:(id)arg1 onFeedItem:(id)arg2 sponsoredInfoProvider:(id)arg3 adSkipType:(id)arg4 extras:(id)arg5;
- (void)logTVGuideHidden;
- (void)notifyTVGuideShownFromGesture:(_Bool)arg1;
- (void)logTapBrowse;
- (void)logQuickSkipForward:(_Bool)arg1 item:(id)arg2 itemIndex:(long long)arg3 channelPK:(id)arg4;
- (void)logAutoforwardFromIndex:(long long)arg1 fromItem:(id)arg2 fromAdItem:(id)arg3 adSkipType:(id)arg4 channelPK:(id)arg5;
- (void)logPlaybackSwipeFromIndex:(long long)arg1 toIndex:(long long)arg2 fromItem:(id)arg3 fromAdItem:(id)arg4 adSkipType:(id)arg5 channelPK:(id)arg6 extras:(id)arg7;
- (void)logVideoTapWithMedia:(id)arg1 channelPK:(id)arg2 chainingSeedMediaId:(id)arg3 videoPosition:(long long)arg4;
- (void)logViewerEntryWithInfo:(id)arg1 chainingSeedMediaId:(id)arg2 sponsoredInfoProvider:(id)arg3 adSkipType:(id)arg4 isUnifiedVideo:(_Bool)arg5;
- (id)initWithUserSession:(id)arg1 analyticsModuleSuffix:(id)arg2 entryAction:(id)arg3 entryPoint:(id)arg4 surface:(id)arg5 component:(long long)arg6 sourceChannelType:(id)arg7 videoPosition:(id)arg8 browseSessionID:(id)arg9 destinationSessionID:(id)arg10 shoppingSessionTracker:(id)arg11 initialOrganicMediaPK:(id)arg12;
- (id)initWithUserSession:(id)arg1 analyticsModuleSuffix:(id)arg2 entryPoint:(id)arg3 surface:(id)arg4 component:(long long)arg5 sourceChannelType:(id)arg6 videoPosition:(id)arg7 destinationSessionID:(id)arg8;
- (id)initWithUserSession:(id)arg1 analyticsModuleSuffix:(id)arg2 entryAction:(id)arg3 browseSessionID:(id)arg4 initialOrganicMediaPK:(id)arg5;

@end
