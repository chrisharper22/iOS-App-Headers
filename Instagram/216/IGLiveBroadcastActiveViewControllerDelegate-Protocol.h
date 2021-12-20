//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveBroadcastActiveViewController, IGLiveDonationsDataSource, IGLiveUserPaySupporterDataSource, NSString, UITapGestureRecognizer;

@protocol IGLiveBroadcastActiveViewControllerDelegate <NSObject>
- (void)liveBroadcastActiveViewController:(IGLiveBroadcastActiveViewController *)arg1 didTapWithGestureRecognizer:(UITapGestureRecognizer *)arg2;
- (void)liveBroadcastActiveViewController:(IGLiveBroadcastActiveViewController *)arg1 didFailWithMessage:(NSString *)arg2;
- (void)liveBroadcastActiveViewController:(IGLiveBroadcastActiveViewController *)arg1 didFinishSuccessfulBroadcastWithId:(NSString *)arg2 mediaId:(NSString *)arg3 didHaveJoinedGuests:(_Bool)arg4 canShareToPostLive:(_Bool)arg5 canSaveToCameraRoll:(_Bool)arg6 shouldShowSupportResources:(_Bool)arg7 isPolicyViolation:(_Bool)arg8 policyViolationReason:(NSString *)arg9 donationsDatasource:(IGLiveDonationsDataSource *)arg10 userPaySupporterDataSource:(IGLiveUserPaySupporterDataSource *)arg11;
@end
