//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFollowControllerDelegate-Protocol.h"
#import "IGSuggestionsUnitUserCardCellDelegate-Protocol.h"

@class IGFeaturedUserInfo, IGFollowController, IGSuggestionsUnitUserCardActionHandler, IGUserSession, NSString;
@protocol IGSuggestionsUnitUserCardSectionControllerDelegate;

@interface IGSuggestionsUnitUserCardSectionController : IGListSectionController <IGSuggestionsUnitUserCardCellDelegate, IGFollowControllerDelegate>
{
    IGFeaturedUserInfo *_featuredUser;
    IGUserSession *_userSession;
    IGFollowController *_followController;
    NSString *_module;
    IGSuggestionsUnitUserCardActionHandler *_userCardActionHandler;
    id <IGSuggestionsUnitUserCardSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSuggestionsUnitUserCardSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)suggestionsUnitUserCarDidTapUserCardCell:(id)arg1;
- (void)suggestionsUnitUserCardDidDismissUserCardCell:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 userCardActionHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

