//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/FBTweakObserver-Protocol.h>
#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGScrollingSelectorViewDataSource-Protocol.h>
#import <FBSharedFramework/IGScrollingSelectorViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryBrushWidthSliderDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryEyedropperPresentationViewDataSource-Protocol.h>
#import <FBSharedFramework/IGStoryEyedropperPresentationViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryTextEntryInputAccessoryViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryTextMentionLocationPickerViewDelegate-Protocol.h>

@class IGRichTextFormat, IGShadowContainerView, IGStoryBrushWidthSlider, IGStoryEyedropperPresentationView, IGStoryTextAlignmentToggleButton, IGStoryTextEmphasisToggleButton, IGStoryTextEntryInputAccessoryView, IGStoryTextMentionLocationPickerView, IGTapButton, IGTooltipView, IGUser, NSArray, NSMutableDictionary, NSSet, NSString, UIColor;
@protocol IGStoryTextEntryControlsDataSource, IGStoryTextEntryControlsDelegate;

@interface IGStoryTextEntryControlsOverlayView : IGPassthroughView <FBTweakObserver, IGScrollingSelectorViewDataSource, IGScrollingSelectorViewDelegate, IGStoryBrushWidthSliderDelegate, IGStoryEyedropperPresentationViewDelegate, IGStoryEyedropperPresentationViewDataSource, IGStoryTextEntryInputAccessoryViewDelegate, IGStoryTextMentionLocationPickerViewDelegate, IGGestureHandler>
{
    IGPassthroughView *_controlsWrapperView;
    NSArray *_topControls;
    IGStoryEyedropperPresentationView *_eyedropperPresentationView;
    IGShadowContainerView *_doneContainerView;
    NSString *_module;
    NSMutableDictionary *_fontSelectorViewItemDrawnImages;
    _Bool _isTextToolV2AnimationEnabled;
    IGTooltipView *_textAnimationNUX;
    IGTooltipView *_textBackgroundNUX;
    _Bool _controlsVisible;
    _Bool _fontSizeSliderActive;
    id <IGStoryTextEntryControlsDelegate> _delegate;
    id <IGStoryTextEntryControlsDataSource> _dataSource;
    IGTapButton *_doneButton;
    IGStoryTextAlignmentToggleButton *_textAlignmentButton;
    IGStoryTextEmphasisToggleButton *_textEmphasisToggleButton;
    IGTapButton *_animationToggleButton;
    IGTapButton *_colorPickerFormatPickerToggleButton;
    IGStoryBrushWidthSlider *_fontSizeSlider;
    IGStoryTextEntryInputAccessoryView *_textInputAccessoryView;
    IGStoryTextMentionLocationPickerView *_mentionLocationPickerView;
    NSArray *_textFormats;
    double _fontSize;
    UIColor *_textColor;
    IGRichTextFormat *_textFormat;
    double _keyboardInset;
    unsigned long long _colorPickingState;
    struct CGPoint _eyedropperPosition;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long colorPickingState; // @synthesize colorPickingState=_colorPickingState;
@property(nonatomic) struct CGPoint eyedropperPosition; // @synthesize eyedropperPosition=_eyedropperPosition;
@property(nonatomic) _Bool fontSizeSliderActive; // @synthesize fontSizeSliderActive=_fontSizeSliderActive;
@property(nonatomic) _Bool controlsVisible; // @synthesize controlsVisible=_controlsVisible;
@property(nonatomic) double keyboardInset; // @synthesize keyboardInset=_keyboardInset;
@property(retain, nonatomic) IGRichTextFormat *textFormat; // @synthesize textFormat=_textFormat;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSArray *textFormats; // @synthesize textFormats=_textFormats;
@property(readonly, nonatomic) IGStoryTextMentionLocationPickerView *mentionLocationPickerView; // @synthesize mentionLocationPickerView=_mentionLocationPickerView;
@property(readonly, nonatomic) IGStoryTextEntryInputAccessoryView *textInputAccessoryView; // @synthesize textInputAccessoryView=_textInputAccessoryView;
@property(readonly, nonatomic) IGStoryBrushWidthSlider *fontSizeSlider; // @synthesize fontSizeSlider=_fontSizeSlider;
@property(readonly, nonatomic) IGTapButton *colorPickerFormatPickerToggleButton; // @synthesize colorPickerFormatPickerToggleButton=_colorPickerFormatPickerToggleButton;
@property(readonly, nonatomic) IGTapButton *animationToggleButton; // @synthesize animationToggleButton=_animationToggleButton;
@property(readonly, nonatomic) IGStoryTextEmphasisToggleButton *textEmphasisToggleButton; // @synthesize textEmphasisToggleButton=_textEmphasisToggleButton;
@property(readonly, nonatomic) IGStoryTextAlignmentToggleButton *textAlignmentButton; // @synthesize textAlignmentButton=_textAlignmentButton;
@property(readonly, nonatomic) IGTapButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak id <IGStoryTextEntryControlsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryTextEntryControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissTextBackgroundNUX;
- (void)presentTextBackgroundNUX;
- (void)dismissTextAnimationNUX;
- (void)presentTextAnimationNUX;
@property(retain, nonatomic) IGUser *cameraEffectCreator;
@property(retain, nonatomic) NSSet *alreadyMentionedUsers;
- (void)_setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setInputAccessoryMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long inputAccessoryMode;
@property(readonly, nonatomic) NSArray *suggestedHashtags;
@property(retain, nonatomic) NSString *hashtagQuery;
@property(retain, nonatomic) NSString *mentionsQuery;
@property(readonly, nonatomic) struct CGRect centerRegion;
@property(readonly, nonatomic) double topControlsMaxHeight;
- (void)tweakDidChange:(id)arg1;
- (_Bool)scrollingSelectorView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollingSelectorView:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)scrollingSelectorView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollingSelectorView:(id)arg1 didEndScrollingAtIndexPath:(id)arg2;
- (void)scrollingSelectorView:(id)arg1 didChangeSelectedIndexPath:(id)arg2;
- (id)scrollingSelectorView:(id)arg1 itemAtIndexPath:(id)arg2;
- (long long)numberOfItemsInScrollingSelectorView:(id)arg1;
- (void)mentionLocationPickerViewDidSelectLocation:(id)arg1;
- (void)mentionLocationPickerViewDidSelectMention:(id)arg1;
- (void)eyedropperPresentationView:(id)arg1 didSelectColor:(id)arg2;
- (id)eyedropperPresentationView:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)eyedropperPresentationView:(id)arg1 didMoveEyedropperToPointInWindowCoordinates:(struct CGPoint)arg2;
- (void)eyedropperPresentationViewDidDismissEyedropper:(id)arg1;
- (void)eyedropperPresentationViewDidPresentEyedropper:(id)arg1;
- (void)_colorToggleButtonTapped:(id)arg1;
- (void)_setColorPickingState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_didTapEyedropperToggleButton:(id)arg1;
- (void)brushWidthSlider:(id)arg1 didSlide:(double)arg2;
- (void)brushWidthSliderDidFinishSliding:(id)arg1;
- (void)brushWidthSliderDidBeginSliding:(id)arg1;
- (void)textEntryInputAccessoryView:(id)arg1 didLongPressOnColor:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)textEntryInputAccessoryView:(id)arg1 didSelectColor:(id)arg2;
- (void)textEntryInputAccessoryView:(id)arg1 didSelectUser:(id)arg2;
- (void)textEntryInputAccessoryView:(id)arg1 didUpdateSuggestedHashtags:(id)arg2;
- (void)textEntryInputAccessoryView:(id)arg1 didSelectHashtag:(id)arg2;
- (void)revealFontSizeSliderForDuration:(double)arg1;
- (void)concealFontSizeSlider;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)_visibleRichTextButtons;
- (void)_layoutFontSizeSlider;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1 fontSizeRange:(struct _IGRange)arg2 eyedropperColorPickerEnabled:(_Bool)arg3 colorPickerEnabled:(_Bool)arg4 wasFormatPickerLastSelected:(_Bool)arg5 privateMentionSharingToggleEnabled:(_Bool)arg6 challengesEnabled:(_Bool)arg7 mentionLocationPickerEnabled:(_Bool)arg8 textFormats:(id)arg9 fontSelectorViewItemDrawnImages:(id)arg10 editorStyle:(long long)arg11 disableAnimatedText:(_Bool)arg12 initialTextColor:(id)arg13 module:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

