//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDateItem, IGDayHeaderItem, IGMonthHeaderItem, IGSpacerItem, NSArray, NSObject, NSString, UICollectionView, UICollectionViewCell;

@protocol IGCalendarViewCellBinder <NSObject>
- (void)bindDayCell:(UICollectionViewCell *)arg1 toModel:(IGDateItem *)arg2 withCalendarEntries:(NSArray *)arg3;
- (void)bindSpacerCell:(UICollectionViewCell *)arg1 toModel:(IGSpacerItem *)arg2;
- (void)bindDayHeaderCell:(UICollectionViewCell *)arg1 toModel:(IGDayHeaderItem *)arg2;
- (void)bindMonthHeaderCell:(UICollectionViewCell *)arg1 toModel:(IGMonthHeaderItem *)arg2;
- (struct CGSize)sizeForDay:(UICollectionView *)arg1;
- (struct CGSize)sizeForSpacer:(UICollectionView *)arg1;
- (struct CGSize)sizeForDayHeader:(UICollectionView *)arg1;
- (struct CGSize)sizeForMonthHeader:(UICollectionView *)arg1;
- (NSString *)reuseIdentifierForModel:(NSObject *)arg1;
@end
