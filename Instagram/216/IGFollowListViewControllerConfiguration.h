//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IGFollowListViewControllerConfiguration : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)_configurationForUserListGroupPageType;
+ (id)_configurationForFollowerRollupdPageType;
+ (id)_configurationForAllMutualFollowersPageType;
+ (id)_configurationForMutualFollowersUnifiedPageType;
+ (id)_configurationForMutualFollowersPageType;
+ (id)_configurationForSelfFollowerUnifiedPageTypeWithShowRemoveButtonAsMainCta:(_Bool)arg1;
+ (id)_configurationForSelfFollowingUnifiedPageType;
+ (id)_configurationForFollowerUnifiedPageType;
+ (id)_configurationForFollowingUnifiedPageType;
+ (id)_configurationForLiveViewersPageType;
+ (id)_configurationForLiveLikersPageType;
+ (id)_configurationForChronoLikersPageType;
+ (id)_configurationForPendingPageType;
+ (id)_configurationForCommentLikersPageType;
+ (id)_configurationForLikersPageType;
+ (id)configurationForPageType:(long long)arg1 showRemoveButtonAsMainCta:(_Bool)arg2 customDisclaimerString:(id)arg3;

@end

