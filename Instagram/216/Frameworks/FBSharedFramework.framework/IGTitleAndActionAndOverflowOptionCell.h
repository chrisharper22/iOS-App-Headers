//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, UIButton, UILabel;
@protocol IGTitleAndActionAndOverflowOptionCellDelegate;

@interface IGTitleAndActionAndOverflowOptionCell : UICollectionViewCell
{
    CALayer *_topSeparator;
    UILabel *_titleLabel;
    UIButton *_actionButton;
    UIButton *_moreButton;
    UILabel *_dotSeparator;
    struct UIEdgeInsets _labelInsets;
    struct UIEdgeInsets _separatorInsets;
    id <IGTitleAndActionAndOverflowOptionCellDelegate> _delegate;
}

+ (double)_maxTitleLabelWidthWithCellWidth:(double)arg1 labelInsets:(struct UIEdgeInsets)arg2;
+ (double)heightForCellWithWidth:(double)arg1 title:(id)arg2 titleFont:(id)arg3 labelInsets:(struct UIEdgeInsets)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTitleAndActionAndOverflowOptionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapMoreButton;
- (void)_didTapActionButton;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
