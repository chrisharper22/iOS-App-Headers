//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGPromptStickerEmptyStateViewModel, IGStoryFacepileView, UILabel;
@protocol IGPromptStickerEmptyStateCellDelegate;

@interface IGPromptStickerEmptyStateCell : UICollectionViewCell
{
    IGStoryFacepileView *_emptyStateFacepile;
    UILabel *_emptyStateLabel;
    UILabel *_inviteFriendCTA;
    id <IGPromptStickerEmptyStateCellDelegate> _delegate;
    IGPromptStickerEmptyStateViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGPromptStickerEmptyStateViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGPromptStickerEmptyStateCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_didTapInviteFriendsCTA:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)_setupCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end

