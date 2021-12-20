//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "IGCreatorPartnershipAdsSectionItem-Protocol.h"
#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGUser, NSArray, NSString;

@interface IGCreatorPartnershipInactiveAdsSectionItem : IGValueObject <IGCreatorPartnershipAdsSectionItem, IGListDiffable, NSCopying, NSCoding>
{
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) NSArray *adPreviewItems;
@property(readonly, nonatomic) unsigned long long adCount;

// Remaining properties
@property(readonly, nonatomic) IGUser *brandPartner;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

