//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGDiscoverPeopleCellDelegate-Protocol.h"

@class IGFeaturedUserInfo, IGUserSession, NSString;
@protocol IGFollowPeopleLoggerProtocol;

@interface IGFindUsersSectionController : IGListSectionController <IGDiscoverPeopleCellDelegate>
{
    IGFeaturedUserInfo *_featuredUserInfo;
    NSString *_module;
    id <IGFollowPeopleLoggerProtocol> _logger;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)discoverPeopleCell:(id)arg1 didTapCustomButtonTypeModel:(id)arg2;
- (void)discoverPeopleCellDidTapProfileRing:(id)arg1;
- (void)discoverPeopleCellDidTapDismiss:(id)arg1;
- (void)discoverPeopleCellDidTapFollowing:(id)arg1;
- (void)discoverPeopleCellDidTapFollow:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithLogger:(id)arg1 userSession:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

