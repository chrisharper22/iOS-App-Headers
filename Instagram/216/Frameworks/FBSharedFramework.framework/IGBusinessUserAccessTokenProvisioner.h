//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFBIdentityProvisioning-Protocol.h>

@class IGUserDefaults, NSString;

@interface IGBusinessUserAccessTokenProvisioner : NSObject <IGFBIdentityProvisioning>
{
    NSString *_userPK;
    IGUserDefaults *_sessionUserDefaults;
}

- (void).cxx_destruct;
- (_Bool)isFirstPartyToken;
- (id)userID;
- (_Bool)hasPermission:(id)arg1;
- (id)accessToken;
- (id)initWithUserPK:(id)arg1 sessionUserDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

