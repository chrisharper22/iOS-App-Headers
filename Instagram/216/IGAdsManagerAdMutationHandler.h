//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGAdsManagerAdMutationHandler : NSObject
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)_errorForNoFBUserID;
- (void)_updateFeedItemForDeletedPromotionStateWithAdViewModel:(id)arg1;
- (void)_performAppealWithBusinessUserAccessTokenEnabledAndCached:(_Bool)arg1 boostID:(id)arg2 appealMessage:(id)arg3 successCompletion:(CDUnknownBlockType)arg4 errorCompletion:(CDUnknownBlockType)arg5;
- (void)performAppealForBoostID:(id)arg1 appealMessage:(id)arg2 successCompletion:(CDUnknownBlockType)arg3 errorCompletion:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;

@end

