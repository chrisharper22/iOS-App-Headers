//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton;
@protocol IGStoryAutoArchiveUpsellCellDelegate;

@interface IGStoryAutoArchiveUpsellCell : UICollectionViewCell
{
    UIButton *_archiveSettingsButton;
    id <IGStoryAutoArchiveUpsellCellDelegate> _delegate;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryAutoArchiveUpsellCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_archiveSettingsButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

