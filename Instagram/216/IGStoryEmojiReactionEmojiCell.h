//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGEmojiModel, UILabel;
@protocol IGStoryEmojiReactionEmojiCellDelegate;

@interface IGStoryEmojiReactionEmojiCell : UICollectionViewCell
{
    UILabel *_emojiLabel;
    IGEmojiModel *_model;
    id <IGStoryEmojiReactionEmojiCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryEmojiReactionEmojiCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGEmojiModel *model; // @synthesize model=_model;
- (void)_didLongPress:(id)arg1;
- (void)configureWithModel:(id)arg1 fontSize:(double)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

