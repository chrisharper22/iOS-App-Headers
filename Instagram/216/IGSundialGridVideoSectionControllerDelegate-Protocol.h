//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGSundialGridVideoSectionController;

@protocol IGSundialGridVideoSectionControllerDelegate <NSObject>
- (void)sundialGridVideoSectionControllerDidChangeCoverPhoto:(IGSundialGridVideoSectionController *)arg1;
- (void)sundialGridVideoSectionController:(IGSundialGridVideoSectionController *)arg1 didLikeRevertedMedia:(IGMedia *)arg2;
- (void)sundialGridVideoSectionController:(IGSundialGridVideoSectionController *)arg1 didSelectVideo:(IGMedia *)arg2;
@end

