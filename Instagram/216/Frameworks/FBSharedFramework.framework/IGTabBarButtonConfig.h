//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGTabBarButtonConfig : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)shoppingConfig;
+ (id)directInboxConfigWithUseMessengerIcon:(_Bool)arg1;
+ (id)profileButtonConfigForMultipleUsers;
+ (id)profileButtonConfig;
+ (id)newsButtonConfig;
+ (id)panoramaCameraButtonConfig;
+ (id)cameraButtonConfig;
+ (id)reelsButtonConfig;
+ (id)videoButtonConfig;
+ (id)exploreButtonConfig;
+ (id)homeButtonConfig;
- (id)_initWithBadgeType:(unsigned long long)arg1 iconName:(unsigned long long)arg2 highlightedIconName:(unsigned long long)arg3 accessibilityLabel:(id)arg4 accessibilityIdentifier:(id)arg5 clearsBadgeWhenSelected:(_Bool)arg6;

@end
