//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSearchCollectionViewCell, IGSearchResultViewModel;

@protocol IGSearchCollectionViewCellDelegate <NSObject>
- (void)searchCollectionViewCellDidTapCellDestructionButton:(IGSearchCollectionViewCell *)arg1 viewModel:(IGSearchResultViewModel *)arg2;
- (void)searchCollectionViewCellDidTapCellButton:(IGSearchCollectionViewCell *)arg1 viewModel:(IGSearchResultViewModel *)arg2;
- (void)searchCollectionViewCellDidTapAvatar:(IGSearchCollectionViewCell *)arg1 viewModel:(IGSearchResultViewModel *)arg2;
@end
