//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageForwardControllerDelegate-Protocol.h"
#import "IGDirectMessageMenuActionHandling-Protocol.h"
#import "IGDirectSaveSelfieStickerServiceListener-Protocol.h"

@class IGDirectMessageForwardController, IGDirectThreadKey, IGDirectThreadViewOutgoingMessageSendAttributionFactory, IGDirectVisualMessageViewerPresentationManager, IGUserSession, NSString;
@protocol IGDirectMessageMenuActionHandlerDelegate, IGDirectMessageReplying, IGDirectThreadListMessageQuerying, IGDirectVaulting;

@interface IGDirectMessageMenuActionHandler : NSObject <IGDirectMessageForwardControllerDelegate, IGDirectSaveSelfieStickerServiceListener, IGDirectMessageMenuActionHandling>
{
    IGUserSession *_userSession;
    IGDirectThreadKey *_threadKey;
    id <IGDirectThreadListMessageQuerying> _messageQuerier;
    id <IGDirectMessageReplying> _messageReplyHandler;
    IGDirectMessageForwardController *_forwardController;
    IGDirectThreadViewOutgoingMessageSendAttributionFactory *_sendAttributionFactory;
    NSString *_analyticsModule;
    IGDirectVisualMessageViewerPresentationManager *_visualMessageViewerPresentationManager;
    id <IGDirectVaulting> _vault;
    id <IGDirectMessageMenuActionHandlerDelegate> _actionHandlerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectMessageMenuActionHandlerDelegate> actionHandlerDelegate; // @synthesize actionHandlerDelegate=_actionHandlerDelegate;
- (void)_saveSelfieStickerWithMediaId:(id)arg1;
- (void)_presentViewerForVisualMessage:(id)arg1 viewerPresentationManager:(id)arg2 entryPoint:(long long)arg3 sourceController:(id)arg4 contextIdentifier:(id)arg5 contextactionHandlerDelegate:(id)arg6 autoLoopingMode:(unsigned long long)arg7 messageReplyHandler:(id)arg8 analyticsModule:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (id)messageForwardControllerPresentingViewController:(id)arg1;
- (void)saveSelfieStickerServiceDidUpdateSelfieStickers;
- (void)saveSelfieStickerServiceDidFailToUnsave;
- (void)saveSelfieStickerServiceDidFailToSave;
- (void)saveSelfieStickerServiceDidSave;
- (void)forwardMessageWithKey:(id)arg1 previewImage:(id)arg2;
- (void)viewDetails:(id)arg1;
- (void)replyWithMessageViewModel:(id)arg1;
- (void)unsendWithMessageViewModel:(id)arg1;
- (void)removeReactionWithMessageViewModel:(id)arg1 actionSource:(long long)arg2;
- (void)reactWithEmojiReaction:(id)arg1 isSuperReact:(_Bool)arg2 messageViewModel:(id)arg3 actionSource:(long long)arg4;
- (void)saveWithMessageViewModel:(id)arg1;
- (void)reportWithMessageViewModel:(id)arg1;
- (void)replayMessage:(id)arg1;
- (void)lookForGiphyCreator:(id)arg1;
- (void)copyWithMessageViewModel:(id)arg1;
- (id)initWithUserSession:(id)arg1 threadKey:(id)arg2 messageQuerier:(id)arg3 messageReplyHandler:(id)arg4 analyticsModule:(id)arg5 sendAttributionFactory:(id)arg6 visualMessageViewerPresentationManager:(id)arg7 vault:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

