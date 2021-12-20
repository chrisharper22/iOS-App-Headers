//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFeedPreviewableCell-Protocol.h"

@class CALayer, IGBlurredImageView, IGGradientView, IGImageView, IGProfilePictureImageView, IGShoppingAdInsertionTileViewModel, NSNumber, NSString, UIImageView, UILabel;

@interface IGShoppingAdInsertionTileCell : UICollectionViewCell <IGFeedPreviewableCell>
{
    IGShoppingAdInsertionTileViewModel *_viewModel;
    IGImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_headerLabel;
    IGProfilePictureImageView *_profilePictureImageView;
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    CALayer *_highlightOverlay;
    IGBlurredImageView *_blurredImageView;
    UIImageView *_hiddenIconImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *currentPlaybackTime;
- (_Bool)shouldAllowPreviewForLocation:(struct CGPoint)arg1;
- (id)image;
- (id)sessionId;
- (void)prepareForReuse;
- (id)_styleForTitleLabel;
- (void)_setUpHiddenUIWithBlurredImageURL:(id)arg1;
- (void)_setUpWithViewModel:(id)arg1 imageURL:(id)arg2;
- (void)configureWithViewModel:(id)arg1 width:(double)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

