//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGStoryDataControllerBroadcastItemListener-Protocol.h"
#import "IGStoryDataControllerCollabStoriesListener-Protocol.h"
#import "IGStoryDataControllerPostLiveItemListener-Protocol.h"
#import "IGStoryDataControllerStoryItemListener-Protocol.h"
#import "IGStoryTrayDataSourceChangeListener-Protocol.h"

@class IGGenericMegaphone, IGProOnboardingChecklistViewModel, IGProfileBusinessHubViewModel, IGUserDetailDataController, NSError, NSString;

@protocol IGUserDetailDataControllerDelegate <IGStoryDataControllerStoryItemListener, IGStoryDataControllerBroadcastItemListener, IGStoryDataControllerPostLiveItemListener, IGStoryDataControllerCollabStoriesListener, IGStoryTrayDataSourceChangeListener>
- (void)userDetailDataControllerDidFetchFanClubSubscriptionDetails:(NSString *)arg1 canSeeButton:(_Bool)arg2;
- (void)userDetailDataControllerDidFetchUserPk:(NSString *)arg1;
- (void)userDetailDataController:(IGUserDetailDataController *)arg1 didFailToFetchUserAdditionalDetailsWithErrorMessage:(NSString *)arg2 showAlert:(_Bool)arg3 isHardError:(_Bool)arg4;
- (void)userDetailDataController:(IGUserDetailDataController *)arg1 didFetchUserAdditionalDetailsWithMegaphone:(IGGenericMegaphone *)arg2 checklistViewModel:(IGProOnboardingChecklistViewModel *)arg3 businessHubViewModel:(IGProfileBusinessHubViewModel *)arg4;
- (void)userDetailDataControllerWillFetchUserAdditionalDetails:(IGUserDetailDataController *)arg1;
- (void)userDetailDataController:(IGUserDetailDataController *)arg1 didFailToFetchFollowStatusWithError:(NSError *)arg2;
- (void)userDetailDataControllerDidFetchFollowStatus:(IGUserDetailDataController *)arg1;
- (void)userDetailDataControllerWillFetchFollowStatus:(IGUserDetailDataController *)arg1;
@end

