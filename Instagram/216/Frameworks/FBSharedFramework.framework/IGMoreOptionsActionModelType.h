//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGMedia, NSURL;
@protocol IGSponsoredInfoProviding;

@interface IGMoreOptionsActionModelType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSURL *_reportWebsite_url;
    IGMedia *_reportAd_media;
    id <IGSponsoredInfoProviding> _reportAd_sponsoredInfoProvider;
    long long _reportAd_adPlacementType;
    IGMedia *_learnMore_media;
    id <IGSponsoredInfoProviding> _learnMore_sponsoredInfoProvider;
    IGMedia *_hideAd_media;
    id <IGSponsoredInfoProviding> _hideAd_sponsoredInfoProvider;
    long long _hideAd_adPlacementType;
}

+ (id)reportWebsiteWithUrl:(id)arg1;
+ (id)reportAdWithMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 adPlacementType:(long long)arg3;
+ (id)learnMoreWithMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
+ (id)hideAdWithMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 adPlacementType:(long long)arg3;
- (void).cxx_destruct;
- (void)matchReportWebsite:(CDUnknownBlockType)arg1 reportAd:(CDUnknownBlockType)arg2 learnMore:(CDUnknownBlockType)arg3 hideAd:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanReportWebsite:(CDUnknownBlockType)arg1 reportAd:(CDUnknownBlockType)arg2 learnMore:(CDUnknownBlockType)arg3 hideAd:(CDUnknownBlockType)arg4;

@end
