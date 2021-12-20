//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveCommentModel, IGLiveInteractionFooterView, IGLiveTappablePinnedViewModel, IGUserSession, NSString, NSURL, UICollectionViewCell, UIGestureRecognizer, UITapGestureRecognizer, UITouch;

@protocol IGLiveInteractionFooterViewDelegate <NSObject>
- (_Bool)interactionFooterShouldReceiveTouch:(UITouch *)arg1 forGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)interactionFooterViewDidRecognizeSingleTapGesture:(UITapGestureRecognizer *)arg1;
- (void)initMentionSuggestionsViewWithUserSession:(IGUserSession *)arg1 module:(NSString *)arg2;
- (void)interactionFooterViewDidToggleCommentsHeight:(IGLiveInteractionFooterView *)arg1 method:(NSString *)arg2;
- (void)interactionFooterView:(IGLiveInteractionFooterView *)arg1 didTapPinnedviewTextWithViewModel:(IGLiveTappablePinnedViewModel *)arg2 text:(NSString *)arg3 URL:(NSURL *)arg4;
- (void)interactionFooterView:(IGLiveInteractionFooterView *)arg1 didTapPinnedViewWithViewModel:(IGLiveTappablePinnedViewModel *)arg2;
- (void)interactionFooterView:(IGLiveInteractionFooterView *)arg1 didTapPinnedViewButtonWithViewModel:(IGLiveTappablePinnedViewModel *)arg2;
- (void)interactionFooterViewDidChangeText:(IGLiveInteractionFooterView *)arg1;
- (void)interactionFooterView:(IGLiveInteractionFooterView *)arg1 didChangeEditing:(_Bool)arg2;
- (void)interactionFooterView:(IGLiveInteractionFooterView *)arg1 didReceiveTapOnComment:(IGLiveCommentModel *)arg2 isPinned:(_Bool)arg3 cell:(UICollectionViewCell *)arg4;
- (void)interactionFooterView:(IGLiveInteractionFooterView *)arg1 didReceiveUnpinTapOnComment:(IGLiveCommentModel *)arg2;
- (void)interactionFooterView:(IGLiveInteractionFooterView *)arg1 didEnterCommentText:(NSString *)arg2;
@end
