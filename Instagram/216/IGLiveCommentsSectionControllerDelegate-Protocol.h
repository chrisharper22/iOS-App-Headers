//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveCommentModel, IGLiveCommentsSectionController, UICollectionViewCell;

@protocol IGLiveCommentsSectionControllerDelegate <NSObject>
- (void)liveCommentsSectionController:(IGLiveCommentsSectionController *)arg1 didSelectCommentModel:(IGLiveCommentModel *)arg2 cell:(UICollectionViewCell *)arg3;
- (_Bool)liveCommentsSectionControllerIsInBroadcastView:(IGLiveCommentsSectionController *)arg1;
@end

