//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGEditPostTextViewControllerDelegate-Protocol.h"
#import "IGEditProfileBioAccessoryBarViewDelegate-Protocol.h"
#import "IGEditProfileBioViewControllerType-Protocol.h"
#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGTypeaheadSuggestionsControllerDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGEditPostTextViewController, IGEditProfileBioAccessoryBarView, IGKeyboardObserver, IGStringStyle, IGTooltipView, IGTypeaheadSuggestionsController, IGUserSession, NSString;
@protocol IGEditProfileBioViewControllerDelegate;

@interface IGEditProfileBioViewController : IGViewController <IGEditPostTextViewControllerDelegate, IGEditProfileBioAccessoryBarViewDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGTypeaheadSuggestionsControllerDelegate, IGEditProfileBioViewControllerType>
{
    IGUserSession *_userSession;
    IGEditPostTextViewController *_textViewController;
    id <IGEditProfileBioViewControllerDelegate> _delegate;
    IGEditProfileBioAccessoryBarView *_accessoryView;
    IGKeyboardObserver *_keyboardObserver;
    NSString *_originalBioText;
    IGStringStyle *_textStringStyle;
    IGTypeaheadSuggestionsController *_typeaheadSuggestionsController;
    IGActionableConfirmationToastController *_productMentionLimitToastController;
    unsigned long long _entryPoint;
    IGTooltipView *_nuxView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGTooltipView *nuxView; // @synthesize nuxView=_nuxView;
- (long long)preferredTabBarBehavior;
- (long long)statusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)editProfileBioAccessoryBarViewDidSelectHashtag:(id)arg1;
- (void)editProfileBioAccessoryBarViewDidSelectMention:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)_logMASAccountLinks;
- (void)_hideNuxIfPossible;
- (void)_showNux;
- (void)_showNuxIfPossible;
- (void)_dismissViewController;
- (void)_updateProductMentionLimitWarning:(_Bool)arg1;
- (void)_updateDoneButtonEnabled;
- (void)_updateCharacterCountLabel;
- (void)_resetSearchResults;
- (void)_didSelectDoneButton;
- (void)_didSelectBackButton;
- (void)_setupSearchResultsCollectionView;
- (void)typeaheadSuggestionsControllerWillShowResults:(id)arg1;
- (void)typeaheadSuggestionController:(id)arg1 didAutocompleteWithSearchText:(id)arg2 lastResponseRankToken:(id)arg3 atIndex:(long long)arg4 isUserSearch:(_Bool)arg5 allResults:(id)arg6;
- (void)typeaheadSuggestionsControllerWillHideResults:(id)arg1;
- (void)typeaheadSuggestionControllerDidAutocomplete:(id)arg1;
- (void)_boldHashtagAndUsers;
- (id)_attributedStringWithBioText:(id)arg1 productMentions:(id)arg2 profileLinks:(id)arg3;
- (void)_resetTextViewWithCaretLocation:(unsigned long long)arg1;
- (void)textViewController:(id)arg1 textViewDidChange:(id)arg2;
- (void)textViewController:(id)arg1 textViewDidChangeSelection:(id)arg2;
- (_Bool)textViewController:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewController:(id)arg1 didChangeContentHeightToHeight:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 bioText:(id)arg2 bioLinks:(id)arg3 productMentions:(id)arg4 entryPoint:(unsigned long long)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

