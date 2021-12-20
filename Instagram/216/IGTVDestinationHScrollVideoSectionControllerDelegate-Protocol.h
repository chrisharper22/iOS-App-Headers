//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGStoryTrayViewModel, IGTVDestinationHScrollVideoSectionController, IGTVDestinationVideoPosition;

@protocol IGTVDestinationHScrollVideoSectionControllerDelegate <NSObject>
- (void)destinationHScrollVideoSectionController:(IGTVDestinationHScrollVideoSectionController *)arg1 didTapTrayItem:(IGStoryTrayViewModel *)arg2 withVideoPosition:(IGTVDestinationVideoPosition *)arg3;
- (void)destinationHScrollVideoSectionController:(IGTVDestinationHScrollVideoSectionController *)arg1 didLongPressFeedItem:(IGMedia *)arg2 withVideoPosition:(IGTVDestinationVideoPosition *)arg3;
- (void)destinationHScrollVideoSectionController:(IGTVDestinationHScrollVideoSectionController *)arg1 didTapFeedItem:(IGMedia *)arg2 withVideoPosition:(IGTVDestinationVideoPosition *)arg3;
- (long long)availableItemCountForDestinationHScrollVideoSectionController:(IGTVDestinationHScrollVideoSectionController *)arg1;
- (long long)loggingPositionForDestinationHScrollVideoSectionController;
@end
