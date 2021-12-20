//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IGDirectInboxConfig : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)roomsTabConfigWithCurrentUser:(id)arg1 featureSetProvider:(id)arg2;
+ (id)partnershipsTabConfigWithCurrentUser:(id)arg1 featureSetProvider:(id)arg2;
+ (id)mainAppConfigWithFiltersEnabled:(_Bool)arg1 blendedInboxEnabled:(_Bool)arg2 currentUser:(id)arg3 backButtonShouldPopNavController:(_Bool)arg4 tabs:(id)arg5 showMultiSelectBarButton:(_Bool)arg6 showRoomsBarButton:(_Bool)arg7 showActiveNowTray:(_Bool)arg8 showHangoutsTray:(_Bool)arg9 featureSetProvider:(id)arg10 interopFeatureGating:(id)arg11;

@end

