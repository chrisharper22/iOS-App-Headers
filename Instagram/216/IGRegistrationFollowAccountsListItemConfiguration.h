//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserListItemConfigurationProtocol-Protocol.h"

@class IGUser, IGUserListItemSectionConfiguration, NSArray, NSString;

@interface IGRegistrationFollowAccountsListItemConfiguration : NSObject <IGUserListItemConfigurationProtocol>
{
    _Bool _showBottomSeparator;
    IGUser *_user;
    IGUserListItemSectionConfiguration *_sectionConfig;
    NSArray *_userMedia;
    NSString *_followedByUsername;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *followedByUsername; // @synthesize followedByUsername=_followedByUsername;
@property(readonly, nonatomic) NSArray *userMedia; // @synthesize userMedia=_userMedia;
@property(readonly, nonatomic) IGUserListItemSectionConfiguration *sectionConfig; // @synthesize sectionConfig=_sectionConfig;
@property(readonly, nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 showBottomSeparator:(_Bool)arg2 sectionConfig:(id)arg3 followedByUsername:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

