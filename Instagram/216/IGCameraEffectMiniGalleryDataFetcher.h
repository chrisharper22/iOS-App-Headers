//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCameraEffectMiniGalleryTopicProviderListener-Protocol.h"

@class IGCameraEffectMiniGalleryFeedDataProvider, IGCameraEffectMiniGalleryTopicProvider, IGUserSession, NSString;

@interface IGCameraEffectMiniGalleryDataFetcher : NSObject <IGCameraEffectMiniGalleryTopicProviderListener>
{
    IGCameraEffectMiniGalleryFeedDataProvider *_effectMiniGallerySavedFeedDataProvider;
    IGCameraEffectMiniGalleryFeedDataProvider *_effectMiniGalleryFeedDataProvider;
    IGCameraEffectMiniGalleryTopicProvider *_effectMiniGalleryTopicProvider;
    NSString *_sessionID;
    IGUserSession *_userSession;
    unsigned long long _source;
}

- (void).cxx_destruct;
- (void)cameraEffectTopicProvider:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraEffectTopicProviderDidUpdate:(id)arg1;
- (void)_fetchEffectMiniGalleryDefaultTopic;
- (void)_prefetchTopics;
- (void)prefetch;
@property(readonly, nonatomic) IGCameraEffectMiniGalleryFeedDataProvider *feedDataProvider;
@property(readonly, nonatomic) IGCameraEffectMiniGalleryFeedDataProvider *savedFeedDataProvider;
@property(readonly, nonatomic) IGCameraEffectMiniGalleryTopicProvider *topicProvider;
- (id)_effectMiniGalleryPerfLoggingContext;
- (id)initWithUserSession:(id)arg1 sessionID:(id)arg2 source:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
