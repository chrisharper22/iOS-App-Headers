//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGDirectAvatarView, IGTapButton, UIView;
@protocol IGDirectGroupIconCellDelegate;

@interface IGDirectGroupIconCell : UICollectionViewCell
{
    IGDirectAvatarView *_avatarView;
    IGTapButton *_changeIconTapButton;
    UIView *_bottomLineView;
    id <IGDirectGroupIconCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectGroupIconCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapChangeIconButton;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
