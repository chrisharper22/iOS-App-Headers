//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFBIdentityProvisioning-Protocol.h>

@class IGFacebookHelper, NSString;
@protocol IGUserLauncherSetProviding;

@interface IGFBIdentityProvisioner : NSObject <IGFBIdentityProvisioning>
{
    id <IGUserLauncherSetProviding> _launcherSet;
    _Bool _calAccessTokenCleanEnabled;
    IGFacebookHelper *_fbHelper;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool calAccessTokenCleanEnabled; // @synthesize calAccessTokenCleanEnabled=_calAccessTokenCleanEnabled;
@property(nonatomic) __weak IGFacebookHelper *fbHelper; // @synthesize fbHelper=_fbHelper;
- (_Bool)_shouldUseFirstPartyToken;
- (_Bool)isFirstPartyToken;
- (id)_currentFxAccessToken;
- (id)userID;
- (_Bool)hasPermission:(id)arg1;
- (id)accessToken;
- (id)initWithFacebookHelper:(id)arg1 launcherSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
