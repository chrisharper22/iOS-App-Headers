//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGStoryCanvasGifFormatCreationBackgroundViewDelegate-Protocol.h"
#import "IGStoryCanvasGifSearchResultsViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBShimmeringView, IGStoryCanvasGifFormatCreationBackgroundView, IGStoryCanvasGifFormatSearchTextField, IGStoryCanvasGifSearchResultsView, IGTapButton, NSArray, NSString, NSURL, UILabel, UIViewPropertyAnimator, UIVisualEffectView;
@protocol IGStoryCanvasGifFormatCreationViewDelegate;

@interface IGStoryCanvasGifFormatCreationView : UIView <UITextFieldDelegate, IGStoryCanvasGifFormatCreationBackgroundViewDelegate, IGStoryCanvasGifSearchResultsViewDelegate, UIGestureRecognizerDelegate>
{
    IGStoryCanvasGifFormatCreationBackgroundView *_backgroundView;
    NSURL *_backgroundImageUrl;
    UIView *_overlayContainer;
    UILabel *_promptLabel;
    UILabel *_errorLabel;
    UIViewPropertyAnimator *_errorAnimator;
    FBShimmeringView *_shimmeringSearchBarWrapperView;
    UIVisualEffectView *_searchBackground;
    IGStoryCanvasGifFormatSearchTextField *_searchField;
    IGTapButton *_clearButton;
    UIView *_dimmingView;
    UIViewPropertyAnimator *_backgroundAnimator;
    IGStoryCanvasGifSearchResultsView *_searchResultsView;
    _Bool _submittable;
    _Bool _editing;
    _Bool _loading;
    id <IGStoryCanvasGifFormatCreationViewDelegate> _delegate;
    unsigned long long _errorState;
    struct CGPoint _contentOverlayCenter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long errorState; // @synthesize errorState=_errorState;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct CGPoint contentOverlayCenter; // @synthesize contentOverlayCenter=_contentOverlayCenter;
@property(nonatomic) __weak id <IGStoryCanvasGifFormatCreationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setSubmittable:(_Bool)arg1;
- (void)_setErrorLabelHidden:(_Bool)arg1;
- (void)_didTapClearButton;
- (void)_didTapBackground;
- (void)_searchFieldDidChange;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_menuDidHide:(id)arg1;
- (void)gifSearchResultsView:(id)arg1 didLongPressCell:(id)arg2 stickerModel:(id)arg3;
- (void)gifSearchResultsView:(id)arg1 didSelectStickerModel:(id)arg2;
- (void)gifSearchResultsView:(id)arg1 searchByAuthorWithStickerModel:(id)arg2;
- (void)gifFormatCreationBackgroundViewDidFinishDownloadingMedia:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)restoreInitialAnimationState;
- (void)restorePrecaptureState;
- (id)stickerViews;
@property(retain, nonatomic) NSArray *searchResults;
@property(readonly, nonatomic) NSString *searchFieldInput;
@property(retain, nonatomic) NSArray *stickers;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)inputAccessoryView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithPrompt:(id)arg1 backgroundImageUrl:(id)arg2 userSession:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
