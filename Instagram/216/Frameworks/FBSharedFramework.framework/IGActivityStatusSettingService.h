//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGActivityStatusSetting, IGCoPresenceStatusSetting, IGDirectUserActions, IGPresenceManager, IGUserActions;

@interface IGActivityStatusSettingService : NSObject
{
    IGUserActions *_userActions;
    IGDirectUserActions *_directUserActions;
    IGPresenceManager *_presenceManager;
}

- (void).cxx_destruct;
- (void)_updatePresenceManager;
- (void)_setActivityStatusSetting:(_Bool)arg1;
- (void)setCoPresenceStatusSetting:(_Bool)arg1 presenceUpdateLogger:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchCoPresenceStatusSettingWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasCachedCoPresenceStatusSetting;
@property(readonly, nonatomic) IGCoPresenceStatusSetting *cachedCoPresenceStatusSetting;
- (void)setActivityStatusSetting:(_Bool)arg1 userSession:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchActivityStatusSettingWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasCachedActivityStatusSetting;
@property(readonly, nonatomic) IGActivityStatusSetting *cachedActivityStatusSetting;
- (id)initWithUserActions:(id)arg1 directUserActions:(id)arg2 presenceManager:(id)arg3;

@end
