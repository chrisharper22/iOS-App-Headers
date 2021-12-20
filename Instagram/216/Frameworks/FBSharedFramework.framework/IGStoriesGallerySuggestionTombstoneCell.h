//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, UIImageView, UILabel;
@protocol IGStoriesGallerySuggestionTombstoneCellDelegate;

@interface IGStoriesGallerySuggestionTombstoneCell : UICollectionViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    IGTapButton *_changeSettingsButton;
    IGTapButton *_undoButton;
    id <IGStoriesGallerySuggestionTombstoneCellDelegate> _delegate;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoriesGallerySuggestionTombstoneCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapUndoButton;
- (void)_didTapChangeSettingsButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
