//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPostLiveItemSectionController, UICollectionViewCell;
@protocol IGStoryTrayBaseCell;

@protocol IGPostLiveItemSectionControllerDelegate <NSObject>
- (void)postLiveFullScreenSectionController:(IGPostLiveItemSectionController *)arg1 didLongPressPostLiveItemCell:(UICollectionViewCell<IGStoryTrayBaseCell> *)arg2;
- (void)postLiveFullScreenSectionController:(IGPostLiveItemSectionController *)arg1 didSelectPostLiveItemCell:(UICollectionViewCell<IGStoryTrayBaseCell> *)arg2;
@end
