//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStoryEmojiReactionComposerNuxView, IGStoryEmojiReactionViewModel, IGStoryQuickReactionsView, IGStoryQuickReactionsViewModel, IGStorySuggestedReplyView, IGUserSession;
@protocol IGStoryEmojiReactionViewDelegate><IGStoryEmojiReactionComposerNuxViewDelegate, IGStoryFullscreenFooterContainerDelegate;

@interface IGStoryComposerBackgroundView : UIView
{
    IGUserSession *_userSession;
    UIView *_backgroundDimmingView;
    IGStoryEmojiReactionViewModel *_emojiReactionViewModel;
    IGStoryQuickReactionsViewModel *_quickReactionViewModel;
    id <IGStoryEmojiReactionViewDelegate><IGStoryEmojiReactionComposerNuxViewDelegate> _emojiReactionViewDelegate;
    _Bool _isSuggestedRepliesEnabled;
    IGStoryEmojiReactionComposerNuxView *_emojiReactionComposerNuxView;
    _Bool _shouldShowEmojiReactionComposerNUX;
    double _footerHeight;
    IGStoryQuickReactionsView *_quickReactionsView;
    IGStorySuggestedReplyView *_suggestedReplyView;
    id <IGStoryFullscreenFooterContainerDelegate> _footerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryFullscreenFooterContainerDelegate> footerDelegate; // @synthesize footerDelegate=_footerDelegate;
@property(nonatomic) _Bool shouldShowEmojiReactionComposerNUX; // @synthesize shouldShowEmojiReactionComposerNUX=_shouldShowEmojiReactionComposerNUX;
@property(readonly, nonatomic) IGStorySuggestedReplyView *suggestedReplyView; // @synthesize suggestedReplyView=_suggestedReplyView;
@property(readonly, nonatomic) IGStoryQuickReactionsView *quickReactionsView; // @synthesize quickReactionsView=_quickReactionsView;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
- (_Bool)_shouldShowQuickReactionsViewTooltip;
- (void)_initializeQuickReactionView;
- (_Bool)isShowingEmojiReactionComposerNUX;
- (_Bool)isShowingDimmingView;
- (_Bool)isScrollingSuggestedReplies;
- (_Bool)isShowingSuggestedReplies;
- (void)showQuickReactionsViewTooltipIfNecessary;
- (void)setEmojiReactionNUXVisibility:(_Bool)arg1;
- (void)setQuickReactionVisibility:(_Bool)arg1;
- (void)configureWithStoryQuickReactionsViewModel:(id)arg1 suggestedRepliesCategoryModels:(id)arg2 shouldShowEmojiReactionComposerNUX:(_Bool)arg3 emojiReactionDelegate:(id)arg4;
- (void)setIsComposing:(_Bool)arg1 inlineGifSelected:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

@end

