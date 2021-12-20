//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGAddPartnerManager : NSObject
{
    IGUserSession *_userSession;
}

+ (id)_buildBrandedContentTagsDictionary:(id)arg1 removedUsers:(id)arg2 allowSponsorPartnerToBoost:(_Bool)arg3;
+ (id)_builderForEditMedia:(id)arg1;
- (void).cxx_destruct;
- (void)_sendAPIRequest:(id)arg1 media:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)sendRemoveMeFromBrandedContentToStoryRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)sendUpdateBrandPartnersToStoryRequest:(id)arg1 brandedContentTags:(id)arg2 isPaidPartnership:(_Bool)arg3 allowPartnerToBoost:(_Bool)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (void)sendReplaceSponsorPartnerToStoryRequest:(id)arg1 previousUser:(id)arg2 newUser:(id)arg3 allowSponsorPartnerToBoost:(_Bool)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (void)sendRemoveSponsorPartnerToStoryRequest:(id)arg1 user:(id)arg2 allowSponsorPartnerToBoost:(_Bool)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)sendAddSponsorPartnerToStoryRequest:(id)arg1 user:(id)arg2 allowSponsorPartnerToBoost:(_Bool)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)sendUpdateSponsorPartnerToStoryRequest:(id)arg1 user:(id)arg2 allowSponsorPartnerToBoost:(_Bool)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)initWithUserSession:(id)arg1;

@end
