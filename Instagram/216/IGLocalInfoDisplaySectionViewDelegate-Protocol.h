//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLocalInfoDisplaySectionView, IGProfilePictureImageView, IGStoryReel, IGTextButton, UILabel;

@protocol IGLocalInfoDisplaySectionViewDelegate <NSObject>
- (void)localBusinessTileCardView:(IGLocalInfoDisplaySectionView *)arg1 didTapTitle:(UILabel *)arg2;
- (void)localBusinessTileCardView:(IGLocalInfoDisplaySectionView *)arg1 didTapProfilePicture:(IGProfilePictureImageView *)arg2;
- (void)localBusinessTileCardView:(IGLocalInfoDisplaySectionView *)arg1 didTapViewProfileButton:(IGTextButton *)arg2;
- (void)localBusinessTileCardView:(IGLocalInfoDisplaySectionView *)arg1 didTapStoryReel:(IGStoryReel *)arg2;
@end

