//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGViewControllerType-Protocol.h"

@class UICollectionView;
@protocol IGCommentsManagerProtocol;

@protocol IGCommentViewControllerType <IGViewControllerType>
- (UICollectionView *)collectionView;
- (id <IGCommentsManagerProtocol>)commentThreadManager;
@end

