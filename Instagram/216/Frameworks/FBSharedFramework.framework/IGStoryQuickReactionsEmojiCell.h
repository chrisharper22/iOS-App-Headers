//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGEmojiModel, UILabel;
@protocol IGStoryQuickReactionsEmojiCellDelegate;

@interface IGStoryQuickReactionsEmojiCell : UICollectionViewCell
{
    UILabel *_label;
    id <IGStoryQuickReactionsEmojiCellDelegate> _delegate;
    IGEmojiModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGEmojiModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGStoryQuickReactionsEmojiCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateEmojiCellBounce;
- (void)configureWithModel:(id)arg1 fontSize:(double)arg2 accessibilityLabel:(id)arg3;
- (void)_animateEmojiCellBounce;
- (void)_didLongPress:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateTransform;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

