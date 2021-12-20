//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGHashtagSuggestionsViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryColorPaletteDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMentionsViewDelegate-Protocol.h>

@class IGHashtagSuggestionsView, IGScrollingSelectorView, IGStoryColorPickingControls, IGStoryEmojiSuggestionsView, IGStoryMentionsView, IGUserSession, NSArray, NSString;
@protocol IGStoryTextEntryInputAccessoryViewDelegate;

@interface IGStoryTextEntryInputAccessoryView : UIView <IGHashtagSuggestionsViewDelegate, IGStoryMentionsViewDelegate, IGStoryColorPaletteDelegate>
{
    IGUserSession *_userSession;
    _Bool _textFormatSelectorEnabled;
    _Bool _colorPickerEnabled;
    _Bool _challengesEnabled;
    _Bool _privateMentionToggleEnabled;
    _Bool _eyedropperColorPickerEnabled;
    NSArray *_colorPalettes;
    NSString *_module;
    id <IGStoryTextEntryInputAccessoryViewDelegate> _delegate;
    long long _mode;
    IGHashtagSuggestionsView *_hashtagSuggestionsView;
    IGStoryColorPickingControls *_textColorPickingControls;
    UIView *_hashtagAndMentionsDisabledHintView;
    IGStoryMentionsView *_mentionsView;
    IGStoryEmojiSuggestionsView *_emojiSuggestionsView;
    IGScrollingSelectorView *_textFormatSelector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGScrollingSelectorView *textFormatSelector; // @synthesize textFormatSelector=_textFormatSelector;
@property(retain, nonatomic) IGStoryEmojiSuggestionsView *emojiSuggestionsView; // @synthesize emojiSuggestionsView=_emojiSuggestionsView;
@property(retain, nonatomic) IGStoryMentionsView *mentionsView; // @synthesize mentionsView=_mentionsView;
@property(retain, nonatomic) UIView *hashtagAndMentionsDisabledHintView; // @synthesize hashtagAndMentionsDisabledHintView=_hashtagAndMentionsDisabledHintView;
@property(retain, nonatomic) IGStoryColorPickingControls *textColorPickingControls; // @synthesize textColorPickingControls=_textColorPickingControls;
@property(retain, nonatomic) IGHashtagSuggestionsView *hashtagSuggestionsView; // @synthesize hashtagSuggestionsView=_hashtagSuggestionsView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <IGStoryTextEntryInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateSecondaryViewVisibilityForMode:(long long)arg1;
- (_Bool)_shouldUpdateEmojiSuggestionsViewVisibilityForMode:(long long)arg1;
- (_Bool)_shouldUpdateHashtagSuggestionsViewVisibilityForMode:(long long)arg1;
- (_Bool)_shouldUpdateMentionsViewVisibilityForMode:(long long)arg1;
- (_Bool)_shouldUpdateTextFormatSelectorVisibilityForMode:(long long)arg1;
- (_Bool)_shouldUpdateColorPickerVisibilityForMode:(long long)arg1;
- (_Bool)_shouldUpdateHashtagAndMentionsDisabledHintViewVisibilityForMode:(long long)arg1;
- (void)colorPalette:(id)arg1 didLongPressOnColor:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)colorPalette:(id)arg1 didSelectColor:(id)arg2;
- (void)storyMentionsView:(id)arg1 didSelectUser:(id)arg2;
- (void)hashtagSuggestionsView:(id)arg1 didUpdateSuggestedHashtags:(id)arg2;
- (void)hashtagSuggestionsView:(id)arg1 didSelectHashtag:(id)arg2;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserSession:(id)arg1 eyedropperColorPickerEnabled:(_Bool)arg2 colorPickerEnabled:(_Bool)arg3 privateMentionToggleEnabled:(_Bool)arg4 textFormatSelectorEnabled:(_Bool)arg5 challengesEnabled:(_Bool)arg6 colorPalettes:(id)arg7 module:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
