//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGNetegoItem-Protocol.h>
#import <FBSharedFramework/IGUnitItemInformationProviding-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGAdPlatformGapRules, NSString;

@interface IGHScrollAYMFModel : IGValueObject <IGListDiffable, IGNetegoItem, IGUnitItemInformationProviding, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (id)analyticsExtrasIncludeUnitID:(_Bool)arg1 includeViewStateItemType:(_Bool)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)replaceItemsWithItems:(id)arg1;
- (id)removeItem:(id)arg1;
- (id)removeItemAtIndex:(long long)arg1;
- (unsigned long long)serverViewStateItemType;
- (unsigned long long)unitItemType;
- (id)unitItemId;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

