//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGEmojiPickerTrayViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGEmojiSkinTonePickerControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryQuickReactionsViewDelegate-Protocol.h>

@class IGEmojiSkinTonePickerController, IGObjectDiskStorage, IGQuickReactionConfig, IGStoryQuickReactionSkinToneNuxManager, IGStoryQuickReactionsView, IGUserSession, NSArray, NSIndexPath, NSString, UIViewController;
@protocol IGStoryItemType><IGUnitItemInformationProviding, IGStoryQuickReactionsControllerDelegate;

@interface IGStoryQuickReactionsController : NSObject <IGEmojiSkinTonePickerControllerDelegate, IGEmojiPickerTrayViewControllerDelegate, IGStoryQuickReactionsViewDelegate>
{
    IGUserSession *_userSession;
    IGObjectDiskStorage *_quickReactionEmojisStorage;
    IGQuickReactionConfig *_quickReactionConfig;
    NSArray *_quickReactionEmojiModels;
    unsigned long long _emojiPickerMode;
    IGEmojiSkinTonePickerController *_emojiPicker;
    NSIndexPath *_lastLongPressedIndexPath;
    IGStoryQuickReactionSkinToneNuxManager *_skinToneNuxManager;
    id <IGStoryItemType><IGUnitItemInformationProviding> _currentStoryItem;
    _Bool _isEmojiReplacementEnabled;
    _Bool _isSkinTonePickerEnabled;
    _Bool _isSkinToneSortedFromDarkestToLightest;
    _Bool _autosendsAlternateWhenSelected;
    _Bool _encoreTestExitNuxEnabled;
    _Bool _canReplyToStoryAuthor;
    id <IGStoryQuickReactionsControllerDelegate> _delegate;
    UIViewController *_presentingViewController;
    IGStoryQuickReactionsView *_quickReactionsView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGStoryQuickReactionsView *quickReactionsView; // @synthesize quickReactionsView=_quickReactionsView;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <IGStoryQuickReactionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)emojiPickerTrayViewController:(id)arg1 didTapActionButtonForType:(unsigned long long)arg2 actionButton:(id)arg3;
- (_Bool)emojiPickerTrayViewController:(id)arg1 shouldFilterOutEmoji:(id)arg2;
- (void)emojiPickerTrayViewControllerDidTapSearchCancel:(id)arg1;
- (void)emojiPickerTrayViewController:(id)arg1 didSelectEmoji:(id)arg2 fromEmojiView:(id)arg3 fromSearch:(_Bool)arg4;
- (void)emojiSkinTonePickerControllerDismissViewTapped:(id)arg1;
- (void)emojiSkinTonePickerControllerDidPresent:(id)arg1;
- (void)emojiSkinTonePickerControllerDidDismiss:(id)arg1;
- (void)emojiSkinTonePickerController:(id)arg1 didSelectEmoji:(id)arg2 emojiView:(id)arg3;
- (void)quickReactionsView:(id)arg1 didLongPressOnEmoji:(id)arg2 atIndexPath:(id)arg3 withLongPressGestureRecognizer:(id)arg4;
- (void)quickReactionsView:(id)arg1 didTapEmoji:(id)arg2;
- (void)_replaceQuickReactionEmoji:(id)arg1;
- (void)_presentEmojiPickerWithLongPressGesture:(id)arg1 emojiModel:(id)arg2 alternativeSelectionConfiguration:(id)arg3;
- (void)_presentCustomEmojiPicker;
- (void)_presentSkinToneNux;
- (void)_initializeQuickReactionEmojiModels;
- (void)hideSkinTonePickerIfNecessary;
- (id)quickReactionViewModel;
- (void)quickReactionsViewDidSetHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithPresentingViewController:(id)arg1 quickReactionsView:(id)arg2;
- (void)didUpdateCurrentStoryItem:(id)arg1 canReplyToStoryAuthor:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 quickReactionConfig:(id)arg2 encoreTestExitNuxEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

