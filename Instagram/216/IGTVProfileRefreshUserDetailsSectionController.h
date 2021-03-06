//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGFollowControllerFollowingRelationshipDelegate-Protocol.h"
#import "IGProfileAvatarViewDelegate-Protocol.h"
#import "IGTVProfileRefreshUserDetailsCellDelegate-Protocol.h"
#import "IGUserUpdatedListener-Protocol.h"

@class IGFollowController, IGTVDestinationLoggingContext, IGTextButton, IGUserSession, NSString;
@protocol IGTVProfileRefreshUserDetailsSectionControllerDelegate;

@interface IGTVProfileRefreshUserDetailsSectionController : IGListGenericSectionController <IGProfileAvatarViewDelegate, IGFollowControllerFollowingRelationshipDelegate, IGUserUpdatedListener, IGTVProfileRefreshUserDetailsCellDelegate>
{
    id <IGTVProfileRefreshUserDetailsSectionControllerDelegate> _delegate;
    IGUserSession *_userSession;
    IGTVDestinationLoggingContext *_loggingContext;
    IGFollowController *_followController;
    IGTextButton *_editProfileButton;
}

- (void).cxx_destruct;
- (void)profileAvatarViewDidFinishAnimatingPeekPreview:(id)arg1;
- (void)profileAvatarViewDidLongPressProfilePic:(id)arg1;
- (void)profileAvatarViewDidTapLiveWithProfilePic:(id)arg1;
- (void)profileAvatarViewDidTapProfilePic:(id)arg1;
- (void)profileRefreshUserDetailsCell:(id)arg1 didTapSuggestedUsersWithIsSelected:(_Bool)arg2;
- (void)_presentPartialModalSheetWithViewController:(id)arg1;
- (void)_configureCell:(id)arg1;
- (id)_button;
- (void)_handleEditProfileButton;
- (void)followControllerWantsToOpenFollowFromSheet:(id)arg1;
- (void)followControllerWantsToOpenFollowingSheet:(id)arg1;
- (void)userWasUpdated:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)suggestedUsersShowSpinner:(_Bool)arg1 requestFailed:(_Bool)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

