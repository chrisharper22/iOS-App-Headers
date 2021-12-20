//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol THTopThreadsPushPreferenceListener;

@protocol THTopThreadsPushPreferenceServicing <NSObject>
- (void)removePushPreferenceListener:(id <THTopThreadsPushPreferenceListener>)arg1;
- (void)addPushPreferenceListener:(id <THTopThreadsPushPreferenceListener>)arg1;
- (unsigned long long)topThreadsPushPreferenceForCloseFriendStory;
- (unsigned long long)topThreadsPushPreference;
- (void)fetchTopThreadsPushPreferenceWithCompletion:(void (^)(unsigned long long, unsigned long long, NSError *))arg1;
- (void)setLocalTopThreadsPushPreferenceForCloseFriendStory:(unsigned long long)arg1;
- (void)setTopThreadsPushPreferenceForCloseFriendStory:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)setLocalTopThreadsPushPreference:(unsigned long long)arg1;
- (void)setTopThreadsPushPreference:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
@end
