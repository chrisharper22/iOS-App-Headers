//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectRecipientOneTapStateTracker, IGDirectShareRecipient, NSArray, NSString;
@protocol IGDirectRecipientCellViewModelProtocol;

@protocol IGDirectRecipientOneTapStateTrackerDelegate <NSObject>
- (NSString *)messageTextForOneTapStateTracker:(IGDirectRecipientOneTapStateTracker *)arg1;
- (void)oneTapStateTrackerDidFinalizeSentState:(IGDirectRecipientOneTapStateTracker *)arg1;
- (void)oneTapStateTrackerDidFinalizeSentState:(IGDirectRecipientOneTapStateTracker *)arg1 directRecipientBlastList:(NSArray *)arg2;
- (void)oneTapStateTrackerDidFinalizeSentState:(IGDirectRecipientOneTapStateTracker *)arg1 directRecipient:(IGDirectShareRecipient *)arg2 messageText:(NSString *)arg3;
- (void)oneTapStateTrackerDidFinalizeSentState:(IGDirectRecipientOneTapStateTracker *)arg1 externalShareServiceType:(long long)arg2;
- (void)oneTapStateTrackerDidFinalizeSentState:(IGDirectRecipientOneTapStateTracker *)arg1 storySendTarget:(long long)arg2;
- (void)oneTapStateTracker:(IGDirectRecipientOneTapStateTracker *)arg1 didTapUndoToBlastList:(NSArray *)arg2 inSection:(long long)arg3 isFromSearch:(_Bool)arg4;
- (void)oneTapStateTrackerDidTapUndoToRecipient:(IGDirectRecipientOneTapStateTracker *)arg1 directRecipient:(IGDirectShareRecipient *)arg2 inSection:(long long)arg3 isFromSearch:(_Bool)arg4;
- (void)oneTapStateTrackerDidTapSendToRecipientBlastList:(IGDirectRecipientOneTapStateTracker *)arg1 directRecipientBlastList:(NSArray *)arg2 inSection:(long long)arg3 isFromSearch:(_Bool)arg4;
- (void)oneTapStateTrackerDidTapSendToRecipient:(IGDirectRecipientOneTapStateTracker *)arg1 directRecipient:(IGDirectShareRecipient *)arg2 inSection:(long long)arg3 isFromSearch:(_Bool)arg4;
- (void)oneTapStateTrackerDidTapUndo:(IGDirectRecipientOneTapStateTracker *)arg1 recipientTargetType:(int)arg2;
- (void)oneTapStateTrackerDidTapSend:(IGDirectRecipientOneTapStateTracker *)arg1 recipientTargetType:(int)arg2;
- (_Bool)oneTapStateTrackerCanSelectOnlyOneShareTarget:(IGDirectRecipientOneTapStateTracker *)arg1;
- (void)oneTapStateTrackerShouldSelect:(IGDirectRecipientOneTapStateTracker *)arg1 viewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2 isSelectableBlock:(void (^)(_Bool, IGStoryXpostingSettingOneTimeOverrideUponSharing *))arg3;
- (_Bool)oneTapStateTrackerCanSelectFavorites:(IGDirectRecipientOneTapStateTracker *)arg1;
@end
