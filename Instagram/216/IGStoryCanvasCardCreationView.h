//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGStoryUserSelectionTextViewDelegate-Protocol.h"

@class FBShimmeringView, IGStoryUserSelectionTextView, NSString, UIColor, UILabel, UIView;
@protocol IGStoryCanvasCardCreationViewDelegate, IGStoryCanvasCardCreationViewInitiationDelegate;

@interface IGStoryCanvasCardCreationView : IGPassthroughView <IGStoryUserSelectionTextViewDelegate>
{
    UIView *_contentView;
    UILabel *_titleLabel;
    IGStoryUserSelectionTextView *_userSelectionTextView;
    FBShimmeringView *_shimmeringSearchBarWrapperView;
    UILabel *_errorLabel;
    _Bool _loading;
    id <IGStoryCanvasCardCreationViewDelegate> _delegate;
    id <IGStoryCanvasCardCreationViewInitiationDelegate> _initiationDelegate;
    unsigned long long _errorState;
    struct CGPoint _contentOverlayCenter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long errorState; // @synthesize errorState=_errorState;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) struct CGPoint contentOverlayCenter; // @synthesize contentOverlayCenter=_contentOverlayCenter;
@property(nonatomic) __weak id <IGStoryCanvasCardCreationViewInitiationDelegate> initiationDelegate; // @synthesize initiationDelegate=_initiationDelegate;
@property(nonatomic) __weak id <IGStoryCanvasCardCreationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyUserSelectionTextViewDidEndEditing:(id)arg1;
- (void)storyUserSelectionTextViewDidAttemptBeginEditing:(id)arg1;
- (_Bool)storyUserSelectionTextViewShouldBeginEditing:(id)arg1;
- (void)storyUserSelectionTextView:(id)arg1 didUpdateText:(id)arg2;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *currentText;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

