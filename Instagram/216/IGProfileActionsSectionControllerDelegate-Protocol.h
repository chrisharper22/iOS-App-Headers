//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProfileActionsSectionController;

@protocol IGProfileActionsSectionControllerDelegate <NSObject>
- (void)actionsSectionController:(IGProfileActionsSectionController *)arg1 didCompleteFollowAction:(long long)arg2;
- (void)actionsSectionController:(IGProfileActionsSectionController *)arg1 didReceiveFollowAction:(long long)arg2;
- (void)actionsSectionControllerDidFinishAnimatingPeekPreview:(IGProfileActionsSectionController *)arg1;
- (void)actionsSectionControllerDidTapDirect:(IGProfileActionsSectionController *)arg1;
- (void)actionsSectionControllerWantsFocusOnPosts:(IGProfileActionsSectionController *)arg1;
- (void)actionsSectionController:(IGProfileActionsSectionController *)arg1 wantsToggleChaining:(_Bool)arg2;
@end
