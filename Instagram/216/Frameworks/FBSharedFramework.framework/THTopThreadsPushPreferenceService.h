//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/THTopThreadsPushPreferenceServicing-Protocol.h>

@class FBProxyAnnouncer, NSString, THAPIClient;
@protocol OS_dispatch_queue, THTopThreadsPushPreferenceListener;

@interface THTopThreadsPushPreferenceService : NSObject <THTopThreadsPushPreferenceServicing>
{
    THAPIClient *_apiClient;
    FBProxyAnnouncer<THTopThreadsPushPreferenceListener> *_pushPreferenceAnnouncer;
    unsigned long long _pushPreference;
    unsigned long long _pushPreferenceForCloseFriendStory;
    NSObject<OS_dispatch_queue> *_topThreadsPushPreferenceServiceLockQueue;
}

- (void).cxx_destruct;
- (void)_overrideTopThreadsPushPreferenceIfNeeded;
- (void)_loadTopThreadsPushPreference;
- (void)_setLocalTopThreadsPushPreferenceForCloseFriendStory:(unsigned long long)arg1;
- (void)_setLocalTopThreadsPushPreference:(unsigned long long)arg1;
- (void)removePushPreferenceListener:(id)arg1;
- (void)addPushPreferenceListener:(id)arg1;
- (unsigned long long)topThreadsPushPreferenceForCloseFriendStory;
- (unsigned long long)topThreadsPushPreference;
- (void)fetchTopThreadsPushPreferenceWithCompletion:(CDUnknownBlockType)arg1;
- (void)setLocalTopThreadsPushPreferenceForCloseFriendStory:(unsigned long long)arg1;
- (void)setTopThreadsPushPreferenceForCloseFriendStory:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLocalTopThreadsPushPreference:(unsigned long long)arg1;
- (void)setTopThreadsPushPreference:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAPIClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

