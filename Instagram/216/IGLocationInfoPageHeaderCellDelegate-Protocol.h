//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLocationInfoPageHeaderCell, IGLocationInfoPageModel, IGStoryReel, IGStoryReelOwnerView, IGStoryTrayViewModel;

@protocol IGLocationInfoPageHeaderCellDelegate <NSObject>
- (void)locationInfoPageHeaderCellDidTapViewGuides:(IGLocationInfoPageHeaderCell *)arg1;
- (void)locationInfoPageHeaderCell:(IGLocationInfoPageHeaderCell *)arg1 didTapStory:(IGStoryReelOwnerView *)arg2 withReel:(IGStoryReel *)arg3 reelViewModel:(IGStoryTrayViewModel *)arg4;
- (void)locationInfoPageHeaderCell:(IGLocationInfoPageHeaderCell *)arg1 didTapViewInformationWithModel:(IGLocationInfoPageModel *)arg2;
@end
