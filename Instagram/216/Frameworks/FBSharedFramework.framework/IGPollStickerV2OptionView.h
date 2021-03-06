//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/UITextViewDelegate-Protocol.h>

@class CAShapeLayer, IGPollStickerV2OptionContentView, NSString, UIColor;
@protocol IGPollStickerV2OptionViewDelegate;

@interface IGPollStickerV2OptionView : UIView <UITextViewDelegate>
{
    CAShapeLayer *_placeholderBorderLayer;
    UIView *_voteFillView;
    double _votePercentage;
    IGPollStickerV2OptionContentView *_contentView;
    IGPollStickerV2OptionContentView *_filledContentView;
    _Bool _isPlaceholderValidFallbackText;
    NSString *_placeholderText;
    id <IGPollStickerV2OptionViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPollStickerV2OptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPlaceholderValidFallbackText; // @synthesize isPlaceholderValidFallbackText=_isPlaceholderValidFallbackText;
@property(readonly, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *fillColor;
- (_Bool)isInDiscardableState;
- (void)showResultsWithPercentage:(double)arg1;
- (id)creationModel;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) NSString *text;
- (void)_updatePlaceholderState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIsPlaceholderValidFallbackText:(_Bool)arg1 placeholderText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

