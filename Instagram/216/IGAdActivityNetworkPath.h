//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGUser;

@interface IGAdActivityNetworkPath : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUser *_viewAds_targetUser;
}

+ (id)viewAdsWithTargetUser:(id)arg1;
+ (id)adsHistory;
- (void).cxx_destruct;
- (void)matchAdsHistory:(CDUnknownBlockType)arg1 viewAds:(CDUnknownBlockType)arg2;

@end
