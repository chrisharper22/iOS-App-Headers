//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGColumnCollectionViewLayout, NSIndexPath;

@protocol IGColumnCollectionViewLayoutDelegate <NSObject>
- (_Bool)columnCollectionViewLayout:(IGColumnCollectionViewLayout *)arg1 itemIsCenteredAtIndexPath:(NSIndexPath *)arg2;
- (double)columnCollectionViewLayout:(IGColumnCollectionViewLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
@end

