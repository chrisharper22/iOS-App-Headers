//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGActivatorHomeCellDelegate-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGEmptyFeedWelcomeCardDataModel, IGUserSession, NSString;

@interface IGFindFriendsSectionController : IGListSectionController <IGActivatorHomeCellDelegate, IGListDiffable>
{
    _Bool _shouldTakeFullContainer;
    IGUserSession *_userSession;
    IGEmptyFeedWelcomeCardDataModel *_dataModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGEmptyFeedWelcomeCardDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(readonly, nonatomic) _Bool shouldTakeFullContainer; // @synthesize shouldTakeFullContainer=_shouldTakeFullContainer;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)didTapActionButtonOnHomeActivatorCell:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_showFindFriendsScreen;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
