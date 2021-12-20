//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGHashtagModel, IGListSectionController, IGMedia, IGUser, NSString, UIView;
@protocol IGFeedSectionControllerType;

@protocol IGFeedSectionControllerActionDelegate <NSObject>
- (void)feedSectionControllerDidBeginWYTSurvey:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (void)feedSectionControllerDidEndUserInteraction:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (void)feedSectionControllerDidBeginUserInteraction:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (void)feedSectionController:(IGListSectionController<IGFeedSectionControllerType> *)arg1 showDetailsForMedia:(IGMedia *)arg2;
- (_Bool)feedSectionControllerIsInOverviewMode:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (void)feedSectionController:(IGListSectionController<IGFeedSectionControllerType> *)arg1 showRelatedPostsForMedia:(IGMedia *)arg2;
- (void)feedSectionControllerDidLoop:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (void)feedSectionControllerDidTapDismissButton:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (void)feedSectionController:(IGListSectionController<IGFeedSectionControllerType> *)arg1 didLikeFeedItem:(IGMedia *)arg2 mediaView:(UIView *)arg3;
- (void)feedSectionControllerDidDismissFeedItem:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (_Bool)feedSectionControllerShouldExpandFeedItemOnMoreTapped:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
- (_Bool)feedSectionController:(IGListSectionController<IGFeedSectionControllerType> *)arg1 shouldNavigateToCommentsWithEntryPoint:(long long)arg2;
- (void)feedSectionController:(IGListSectionController<IGFeedSectionControllerType> *)arg1 changedMuteStatusForUser:(IGUser *)arg2 changedPostsMuteStatus:(_Bool)arg3 changedStoryMuteStatus:(_Bool)arg4;
- (void)feedSectionController:(IGListSectionController<IGFeedSectionControllerType> *)arg1 didUnfollowHashtag:(IGHashtagModel *)arg2;
- (void)feedSectionController:(IGListSectionController<IGFeedSectionControllerType> *)arg1 didUnfollowUser:(IGUser *)arg2;
- (void)feedSectionControllerDidSwipePageCell:(IGListSectionController<IGFeedSectionControllerType> *)arg1 toIndex:(long long)arg2;
- (void)feedSectionControllerDidTapCommentEntryPoint:(IGListSectionController<IGFeedSectionControllerType> *)arg1 replyText:(NSString *)arg2;
- (void)feedSectionControllerDidTapCustomizableButton:(IGListSectionController<IGFeedSectionControllerType> *)arg1;
@end
