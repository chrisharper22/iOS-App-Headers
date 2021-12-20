//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/THAPIRequest-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface THTopThreadsAPIRequest : FBIvarBasedEqualityObject <THAPIRequest>
{
    unsigned long long _subtype;
    unsigned long long _setPushPreference_pushPreference;
    unsigned long long _setPushPreference_pushPreferenceForCloseFriendStory;
    unsigned long long _getTopThreads_blacklistQueryType;
    NSArray *_setTopThreads_specifiers;
}

+ (id)setTopThreadsWithSpecifiers:(id)arg1;
+ (id)setPushPreferenceWithPushPreference:(unsigned long long)arg1 pushPreferenceForCloseFriendStory:(unsigned long long)arg2;
+ (id)getTopThreadsWithBlacklistQueryType:(unsigned long long)arg1;
+ (id)getPushPreference;
- (void).cxx_destruct;
- (void)matchSetPushPreference:(CDUnknownBlockType)arg1 getPushPreference:(CDUnknownBlockType)arg2 getTopThreads:(CDUnknownBlockType)arg3 setTopThreads:(CDUnknownBlockType)arg4;
- (long long)matchIntegerSetPushPreference:(CDUnknownBlockType)arg1 getPushPreference:(CDUnknownBlockType)arg2 getTopThreads:(CDUnknownBlockType)arg3 setTopThreads:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool shouldSignRequest;
@property(readonly, nonatomic) CDUnknownBlockType parsingHandler;
@property(readonly, nonatomic) NSDictionary *rawParameters;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) unsigned long long httpMethod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
