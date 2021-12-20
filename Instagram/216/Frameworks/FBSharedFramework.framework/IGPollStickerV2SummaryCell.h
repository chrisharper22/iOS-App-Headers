//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGPollStickerModel, NSArray, UIButton;
@protocol IGPollStickerV2SummaryCellDelegate;

@interface IGPollStickerV2SummaryCell : UICollectionViewCell
{
    IGPollStickerModel *_model;
    NSArray *_resultViews;
    UIButton *_shareButton;
    id <IGPollStickerV2SummaryCellDelegate> _delegate;
}

+ (double)heightForPollStickerModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPollStickerV2SummaryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapShareButton;
- (void)configureWithPollStickerModel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

