//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectReachabilityLinkedPageIGDMAccessSettingProtocol-Protocol.h"

@class IGDirectMessageReachabilitySettings, IGDirectReachabilityLinkedPageIGDMAccessSettingNetworker, IGDirectUserActions, NSString;

@interface IGDirectMessageReachabilitySettingsService : NSObject <IGDirectReachabilityLinkedPageIGDMAccessSettingProtocol>
{
    IGDirectUserActions *_directUserActions;
    IGDirectReachabilityLinkedPageIGDMAccessSettingNetworker *_linkedPageIGDMAccessSettingNetworker;
}

- (void).cxx_destruct;
- (void)fetchDirectReachabilityLinkedPageIGDMAccessSettingEligibilityWithEntryPoint:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchDirectReachabilityLinkedPageIGDMAccessSettingDialogEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDirectReachabilityLinkedPageIGDMAccessSettingIsEnabled:(_Bool)arg1 entryPoint:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setGroupMessageReachabilitySetting:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)setOneOnOneMessageReachabilitySetting:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchMessageReachabilitySettingsWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) IGDirectMessageReachabilitySettings *cachedReachabilitySettings;
- (id)initWithDirectUserActions:(id)arg1 linkedPageIGDMAccessNetworker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

