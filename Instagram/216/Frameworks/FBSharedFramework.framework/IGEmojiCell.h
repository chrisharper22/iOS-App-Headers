//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGEmojiModel, UILabel, UILongPressGestureRecognizer;
@protocol IGEmojiCellDelegate;

@interface IGEmojiCell : UICollectionViewCell
{
    UILabel *_label;
    UILongPressGestureRecognizer *_longPressRecognizer;
    id <IGEmojiCellDelegate> _delegate;
    IGEmojiModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGEmojiModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGEmojiCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)_didLongPress;
- (void)configureWithModel:(id)arg1 emojiFontSize:(double)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
