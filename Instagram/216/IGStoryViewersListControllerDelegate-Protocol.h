//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGGenericMegaphone, IGPromptStickerViewerListModel, IGStoryAQRSummaryViewModel, NSArray, NSError, NSURL;

@protocol IGStoryViewersListControllerDelegate <NSObject>
- (void)storyViewersListControllerDidReceiveSharedWithUserIds:(NSArray *)arg1;
- (void)storyViewersListControllerDidReceiveMultiAuthorViewers:(NSArray *)arg1 learnMoreURL:(NSURL *)arg2;
- (void)storyViewersListControllerDidReceivePromptStickerParticipantList:(IGPromptStickerViewerListModel *)arg1;
- (void)storyViewersListControllerDidReceiveQuickReactionsSummary:(IGStoryAQRSummaryViewModel *)arg1;
- (void)storyViewersListControllerDidReceiveUpdatedTapModels:(NSArray *)arg1;
- (void)storyViewersListControllerDidReceiveUpdatedViewerCount:(long long)arg1;
- (void)storyViewersListControllerDidReceiveGenericMegaphone:(IGGenericMegaphone *)arg1;
- (void)storyViewersListControllerDidFinishFetchFromSource:(long long)arg1 success:(_Bool)arg2 error:(NSError *)arg3;
- (void)storyViewersListControllerWillFetchFromSource:(long long)arg1;
- (void)storyViewersListControllerScheduledInitialFetch;
@end

