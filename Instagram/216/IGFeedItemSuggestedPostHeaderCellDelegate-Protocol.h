//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemSuggestedPostHeaderCell, NSURL;
@protocol IGFeedItemSuggestedPostHeaderCellType;

@protocol IGFeedItemSuggestedPostHeaderCellDelegate <NSObject>
- (void)suggestedPostHeaderCellDidTapOpenTopic:(id <IGFeedItemSuggestedPostHeaderCellType>)arg1;
- (void)suggestedPostHeaderCellDidDwell:(id <IGFeedItemSuggestedPostHeaderCellType>)arg1;
- (void)suggestedPostHeaderCell:(id <IGFeedItemSuggestedPostHeaderCellType>)arg1 didTapInterestedButtonWithValue:(_Bool)arg2;
- (void)feedItemSuggestedPostHeaderCell:(IGFeedItemSuggestedPostHeaderCell *)arg1 didTapOnURL:(NSURL *)arg2;
- (void)suggestedPostHeaderCellDidTapSeeLessFromSource:(id <IGFeedItemSuggestedPostHeaderCellType>)arg1;
@end

