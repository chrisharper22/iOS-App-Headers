//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, IGStackLayout, IGTapButton, UILabel, UIView;
@protocol IGStoryStandaloneFundraiserCollectionViewCellDelegate;

@interface IGStoryStandaloneFundraiserCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_amountRaisedLabel;
    UILabel *_timeLeftLabel;
    IGImageView *_coverPhotoImageView;
    IGTapButton *_moreButton;
    IGStackLayout *_containerStack;
    UIView *_accessibilityItemsWrappingView;
    id <IGStoryStandaloneFundraiserCollectionViewCellDelegate> _delegate;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryStandaloneFundraiserCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapMoreButton;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

