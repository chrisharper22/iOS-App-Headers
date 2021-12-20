//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGEmojiPickerTrayViewControllerDelegate-Protocol.h"
#import "IGStoryEmojiReactionComposerNuxViewDelegate-Protocol.h"
#import "IGStoryEmojiReactionReactorsViewDelegate-Protocol.h"
#import "IGStoryEmojiReactionViewDelegate-Protocol.h"

@class IGEmojiModel, IGObjectDiskStorage, IGStoryEmojiReactionConfig, IGStoryEmojiReactionExperimentConfig, IGStoryEmojiReactionReactorViewModel, IGStoryEmojiReactionViewModel, IGStoryViewerLoggingContext, IGUserSession, NSMutableArray, NSString, UIViewController;
@protocol IGDirectReplyToAuthorViewControllerPresenting, IGStoryEmojiReactionsControllerDelegate, IGStoryItemType><IGUnitItemInformationProviding;

@interface IGStoryEmojiReactionsController : NSObject <IGEmojiPickerTrayViewControllerDelegate, IGStoryEmojiReactionReactorsViewDelegate, IGStoryEmojiReactionViewDelegate, IGStoryEmojiReactionComposerNuxViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGStoryViewerLoggingContext *_loggingContext;
    IGObjectDiskStorage *_mostRecentlyUsedEmojisStorage;
    NSMutableArray *_emojiReactionMostRecentlyUsedEmojis;
    long long _emojiPickerIntent;
    id <IGDirectReplyToAuthorViewControllerPresenting> _directReplyToReactorPresenter;
    IGEmojiModel *_previousEmojiSent;
    id <IGStoryItemType><IGUnitItemInformationProviding> _currentStoryItem;
    NSString *_currentReelPk;
    IGStoryEmojiReactionExperimentConfig *_emojiReactionExperimentConfig;
    long long _latestTrayLaunchAction;
    id <IGStoryEmojiReactionsControllerDelegate> _delegate;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <IGStoryEmojiReactionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long latestTrayLaunchAction; // @synthesize latestTrayLaunchAction=_latestTrayLaunchAction;
- (void)emojiReactionViewDidTapCTA:(id)arg1;
- (void)_presentDirectThreadWithUser:(id)arg1;
- (unsigned long long)_storyStatusForUser:(id)arg1;
- (id)_ringSpecForUser:(id)arg1;
- (void)storyEmojiReactorsViewNewFloatieAnimationDidTrigger:(id)arg1 finished:(_Bool)arg2;
- (void)storyEmojiReactorsViewDidToggleFloatiesTray:(id)arg1 visualMode:(long long)arg2;
- (void)storyEmojiReactorsView:(id)arg1 willDisplayReactionAtIndex:(long long)arg2 reactorViewModel:(id)arg3;
- (void)storyEmojiReactorsViewDidTapMoreReactionsButton:(id)arg1;
- (void)storyEmojiReactorsView:(id)arg1 reactorViewModel:(id)arg2 didTapReaction:(id)arg3;
- (void)emojiReactionViewDidDisplayPrivacyNux:(id)arg1;
- (void)emojiReactionView:(id)arg1 didSelectEmoji:(id)arg2 emojiButton:(id)arg3;
- (void)emojiReactionViewDidTapSearchButton:(id)arg1;
- (void)emojiPickerTrayViewController:(id)arg1 didTapActionButtonForType:(unsigned long long)arg2 actionButton:(id)arg3;
- (_Bool)emojiPickerTrayViewController:(id)arg1 shouldFilterOutEmoji:(id)arg2;
- (void)emojiPickerTrayViewControllerDidTapSearchCancel:(id)arg1;
- (void)emojiPickerTrayViewController:(id)arg1 didSelectEmoji:(id)arg2 fromEmojiView:(id)arg3 fromSearch:(_Bool)arg4;
- (void)_updateRecentEmojiSkintoneIfNeccessary:(id)arg1;
- (void)_updateRecentEmojisWithEmoji:(id)arg1;
- (void)sendEmojiReaction:(id)arg1 emojiButton:(id)arg2 sendSource:(unsigned long long)arg3;
- (void)_handleEmojiSelectedFromTray:(id)arg1 emojiView:(id)arg2 fromSearch:(_Bool)arg3;
- (void)_presentCustomEmojiPicker;
- (id)_emojiReactionOverlayDisclaimerText;
- (void)_initializeEmojiReactionRecentsEmojiModels;
- (id)_emojiReactionSingleEntrypointConfig;
- (_Bool)shouldSwipeUpToShowEmojiOverlay;
- (void)unsendEmojiReactionForMediaID:(id)arg1 traySessionId:(id)arg2 viewerSessionId:(id)arg3 analyticsModule:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)sendEmojiReaction:(id)arg1 mediaID:(id)arg2 sendSource:(id)arg3 analyticsModule:(id)arg4 traySessionId:(id)arg5 viewerSessionId:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (id)emojiReactionExperimentConfig;
@property(readonly, nonatomic) IGStoryEmojiReactionViewModel *emojiReactionOverlayViewModel;
@property(readonly, nonatomic) IGStoryEmojiReactionReactorViewModel *emojiReactionUserReactedButtonViewModel;
@property(readonly, nonatomic) IGStoryEmojiReactionConfig *emojiReactionConfig;
- (void)didUpdateCurrentStoryItem:(id)arg1 reelPk:(id)arg2;
- (void)configureWithPresentingViewController:(id)arg1;
- (void)presentCustomEmojiReactionPickerForSending;
- (id)initWithConfig:(id)arg1 viewerEmojiReaction:(id)arg2 analyticsModule:(id)arg3 loggingContext:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

