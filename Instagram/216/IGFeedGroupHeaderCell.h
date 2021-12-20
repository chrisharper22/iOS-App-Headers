//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UILabel, UIView;
@protocol IGFeedGroupHeaderCellDelegate;

@interface IGFeedGroupHeaderCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIButton *_accessoryButton;
    _Bool _centerText;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    id <IGFeedGroupHeaderCellDelegate> _delegate;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedGroupHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onAccessoryButtonTapped:(id)arg1;
- (void)setAccessoryEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithTitle:(id)arg1 showAccessory:(_Bool)arg2 accessoryType:(id)arg3 backgroundColor:(id)arg4 hideTopSeparator:(_Bool)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

