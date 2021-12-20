//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRecipientSectionControllerOneTapDelegate-Protocol.h>

@class FBTimer, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol IGDirectRecipientOneTapStateTrackerDelegate;

@interface IGDirectRecipientOneTapStateTracker : NSObject <IGDirectRecipientSectionControllerOneTapDelegate>
{
    NSMutableDictionary *_sendStates;
    NSMutableSet *_blastListTargets;
    NSMutableOrderedSet *_inProgressSendStates;
    FBTimer *_inProgressSendStateTimer;
    _Bool _hasFinalizedAButton;
    _Bool _sendImmediately;
    id <IGDirectRecipientOneTapStateTrackerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sendImmediately; // @synthesize sendImmediately=_sendImmediately;
@property(nonatomic) __weak id <IGDirectRecipientOneTapStateTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isTargetAlreadyBlastedTo:(id)arg1;
- (void)_finalizeInProgressTarget:(id)arg1;
- (void)_checkForLapsedSendStates;
- (void)_startInProgressSendStateTimer;
- (_Bool)_hasInProgressSendStateForTargetType:(int)arg1 externalShareServiceType:(long long)arg2 directRecipient:(id)arg3 blastList:(id)arg4;
- (void)_removeInProgressSendStateToTargetType:(int)arg1 oneTapButtonState:(id)arg2 externalShareServiceType:(long long)arg3 directRecipient:(id)arg4 blastList:(id)arg5 restartTimer:(_Bool)arg6 shouldSkipPendingActionCheck:(_Bool)arg7;
- (void)_addInProgressSendStateToTargetType:(int)arg1 oneTapButtonState:(id)arg2 externalShareServiceType:(long long)arg3 directRecipient:(id)arg4 blastList:(id)arg5 messageText:(id)arg6;
- (void)_clearExternalServiceSharing;
- (void)_clearPreviousStorySendTarget:(long long)arg1;
- (void)_storySendTargetWasFinalized:(long long)arg1;
- (void)_recipientDidOneTapFinalizeSendTargetType:(int)arg1 externalShareServiceType:(long long)arg2 directRecipient:(id)arg3 blastList:(id)arg4 messageText:(id)arg5 shouldSkipPendingActionCheck:(_Bool)arg6;
- (void)_recipientDidOneTapUndoSendTargetType:(int)arg1 externalShareServiceType:(long long)arg2 directRecipient:(id)arg3 blastList:(id)arg4 directRecipientSection:(long long)arg5 shouldSkipPendingActionCheck:(_Bool)arg6 isFromSearch:(_Bool)arg7;
- (void)_recipientDidOneTapSendTargetType:(int)arg1 externalShareServiceType:(long long)arg2 directRecipient:(id)arg3 blastList:(id)arg4 directRecipientSection:(long long)arg5 sendImmediately:(_Bool)arg6 isFromSearch:(_Bool)arg7;
- (void)recipientDidOneTapSentViewModel:(id)arg1;
- (void)recipientDidOneTapUndoViewModel:(id)arg1;
- (void)recipientDidOneTapSendViewModel:(id)arg1;
- (void)recipientSectionControllerShouldSelectOneTapSendViewModel:(id)arg1 isSelectableBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasInteractedWithAtLeastOneSendButton;
- (id)oneTapSendStateForBlastList:(id)arg1;
- (id)oneTapSendStateForRecipient:(id)arg1;
- (id)oneTapSendStateForExternalSharingServiceType:(long long)arg1;
- (id)oneTapSendStateForStorySendTarget:(long long)arg1;
- (void)cancelAllStateManagement;
- (void)finalizeAllOutstandingStates;
- (void)markDirectShareRecipientAsUnsent:(id)arg1;
- (void)markDirectShareRecipientAsSent:(id)arg1;
- (void)markDirectShareRecipientAsSending:(id)arg1 sectionToLog:(long long)arg2 isFromSearch:(_Bool)arg3;
- (void)markRecipientAsSent:(int)arg1;
- (void)_removeSendStateForTarget:(id)arg1;
- (void)_setSendStateForTarget:(id)arg1 target:(id)arg2;
- (id)_oneTapSendStateForTarget:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

