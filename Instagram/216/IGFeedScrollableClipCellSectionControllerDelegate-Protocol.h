//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedScrollableClipCellSectionController, IGFeedScrollableClipViewModel, IGMedia;

@protocol IGFeedScrollableClipCellSectionControllerDelegate <NSObject>
- (void)suggestedClipCellSectionController:(IGFeedScrollableClipCellSectionController *)arg1 logImpressionForReel:(IGMedia *)arg2 timespentMs:(double)arg3;
- (void)suggestedClipCellSectionController:(IGFeedScrollableClipCellSectionController *)arg1 didSelectedViewModel:(IGFeedScrollableClipViewModel *)arg2;
@end

