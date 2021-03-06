//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGAdsManagerLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_waterfallID;
    NSString *_entryPoint;
}

+ (id)loggerWithEntryPoint:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)_logAdsManagerFinishStepAtStep:(id)arg1 mediaId:(id)arg2 adStatus:(id)arg3;
- (void)_logAdsManagerActionAtStep:(id)arg1 mediaId:(id)arg2 adStatus:(id)arg3 action:(id)arg4 errorMessage:(id)arg5;
- (void)_logAdsManagerTapEntryEventAtStep:(id)arg1 withSelectedValue:(id)arg2;
- (void)_logEvent:(id)arg1 atStep:(id)arg2 additionalFields:(id)arg3;
- (void)didTapActivityFeedAdsManagerPaymentErrorNotificationWithErrorIdentifier:(id)arg1;
- (void)didViewActivityFeedAdsManagerPaymentErrorNotificationWithErrorIdentifier:(id)arg1;
- (void)didTapPromoteButtonOnAd:(id)arg1;
- (void)didTapToggleButtonOnOrganicMedia:(id)arg1 toPromotionMedia:(id)arg2;
- (void)didStartPromoteOrganicToggle;
- (void)didLoadPromotedPostWithAdViewModel:(id)arg1;
- (void)didFailAppealAdWithMediaID:(id)arg1 error:(id)arg2;
- (void)didAppealAdWithMediaID:(id)arg1;
- (void)didFailLoadAdScreenWithAdViewModel:(id)arg1 error:(id)arg2;
- (void)didLoadAdScreenWithAdViewModel:(id)arg1;
- (void)didTapCouponEnrollmentTip;
- (void)didTapEntryPoint;
- (id)_initWithEntryPoint:(id)arg1 userSession:(id)arg2;

@end

