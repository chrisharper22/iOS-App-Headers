//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGDiscoveryNavigationTrayItem-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGRefinementCategoryModel : IGValueObject <IGDiscoveryNavigationTrayItem, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (id)displayText;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)showsDropdownIndicator;
- (id)navigationTrayTitle;
- (id)navigationTrayIcon;

@end
