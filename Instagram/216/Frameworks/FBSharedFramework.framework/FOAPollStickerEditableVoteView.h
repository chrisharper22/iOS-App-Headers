//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/FOAOverlayTransformViewType-Protocol.h>
#import <FBSharedFramework/UITextViewDelegate-Protocol.h>

@class CALayer, FOAGradientTextView, FOAPollStickerProvider, FOAStickerProvider, NSString;
@protocol FOAPollStickerVoteViewDelegate;

@interface FOAPollStickerEditableVoteView : UIView <UITextViewDelegate, FOAOverlayTransformViewType>
{
    FOAPollStickerProvider *_pollStickerProvider;
    FOAStickerProvider *_provider;
    FOAStickerProvider *_modelProvider;
    _Bool _showPlaceholder;
    FOAGradientTextView *_leftGradientTextView;
    FOAGradientTextView *_rightGradientTextView;
    id <FOAPollStickerVoteViewDelegate> _delegate;
    CALayer *_lineLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(nonatomic) __weak id <FOAPollStickerVoteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
@property(readonly, nonatomic) FOAGradientTextView *rightGradientTextView; // @synthesize rightGradientTextView=_rightGradientTextView;
@property(readonly, nonatomic) FOAGradientTextView *leftGradientTextView; // @synthesize leftGradientTextView=_leftGradientTextView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)outlinePath;
- (void)_adjustPlaceholderFontSizeForGradientTextView:(id)arg1;
- (void)_centerContentForTextView:(id)arg1;
- (id)_gradientTextViewForTextView:(id)arg1;
- (id)transformTargetView;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)configureWithProvider;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pollStickerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

