//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPair, IGLiveBroadcastSetupViewController, NSString;

@protocol IGLiveBroadcastSetupViewControllerDelegate <NSObject>
- (void)liveSetupViewController:(IGLiveBroadcastSetupViewController *)arg1 didFailWithMessage:(NSString *)arg2;
- (void)liveSetupViewControllerDidCancelSession:(IGLiveBroadcastSetupViewController *)arg1;
- (void)liveSetupViewController:(IGLiveBroadcastSetupViewController *)arg1 didFinishSetupWithBroadcastToolbox:(FBPair *)arg2 badgesEnabled:(_Bool)arg3;
- (void)liveSetupViewControllerWillBeginSetup:(IGLiveBroadcastSetupViewController *)arg1;
@end
