//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionPayload-Protocol.h"

@class NSString, QPEligibilityContext;

@interface QuickPromotionEligibilityChecker : NSObject <IGUserSessionPayload>
{
    QPEligibilityContext *_context;
    long long _appName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QPEligibilityContext *context; // @synthesize context=_context;
- (_Bool)checkPostDeliveryEligibilityForPromotion:(id)arg1;
- (id)bestOfPromotions:(id)arg1 useUnifiedEvaluation:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 nuxID:(id)arg2 appName:(long long)arg3 triggerID:(id)arg4 dataStore:(id)arg5 triggerContext:(id)arg6 lastFetchTime:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
