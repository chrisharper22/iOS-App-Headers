//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItemLogger, IGSponsoredSupportConfiguration, IGSundialAdsSectionControllerConfig, IGSundialViewerMediaPrefetchManager, IGUserSession;

@interface IGSundialAdsViewerInteractionCoordinator : NSObject
{
    IGUserSession *_userSession;
    IGSundialAdsSectionControllerConfig *_config;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGFeedItemLogger *_feedItemLogger;
    IGSundialViewerMediaPrefetchManager *_mediaPrefetchManager;
    long long _section;
}

- (void).cxx_destruct;
- (void)handleSingleTapForCell:(id)arg1 playbackCoordinator:(id)arg2 activePlaybackSessionKey:(id)arg3 config:(id)arg4 announcer:(id)arg5 isAudioDetected:(_Bool)arg6 updateAudioBlock:(CDUnknownBlockType)arg7;
- (id)buildViewPointActionsForVideoCell:(id)arg1 adItem:(id)arg2 shouldLogContextualColorAnalytics:(_Bool)arg3;
- (void)_presentAdsWAISTForMedia:(id)arg1 viewController:(id)arg2;
- (void)handleMoreButtonTapForAdItem:(id)arg1 playbackController:(id)arg2 hostSectionController:(id)arg3 dismissSelector:(SEL)arg4 section:(long long)arg5;
- (id)initWithUserSession:(id)arg1 sponsoredSupportConfiguration:(id)arg2 mediaPrefetchManager:(id)arg3 feedItemLogger:(id)arg4 config:(id)arg5;

@end
