//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGTag.h>

#import <FBSharedFramework/IGTagProtocol-Protocol.h>
#import <FBSharedFramework/IGTagViewAccessibility-Protocol.h>

@class NSString;

@interface IGUsertag : IGTag <IGTagViewAccessibility, IGTagProtocol>
{
}

+ (id)inTagFromDictionary:(id)arg1 objectStores:(id)arg2;
- (id)user;
- (_Bool)shouldShowCategoryOfUser;
- (id)tagCategory;
- (id)usernameOrPlaceholder;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

