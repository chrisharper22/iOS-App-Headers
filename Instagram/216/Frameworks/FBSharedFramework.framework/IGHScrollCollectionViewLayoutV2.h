//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <FBSharedFramework/IGHScrollCollectionViewLayoutProtocol-Protocol.h>

@class NSString;

@interface IGHScrollCollectionViewLayoutV2 : UICollectionViewFlowLayout <IGHScrollCollectionViewLayoutProtocol>
{
    _Bool _centersCellsWhenPaging;
}

@property(readonly, nonatomic) _Bool centersCellsWhenPaging; // @synthesize centersCellsWhenPaging=_centersCellsWhenPaging;
- (id)_previousIndexPathBefore:(id)arg1;
- (id)_nextIndexPathAfter:(id)arg1;
- (double)_clampedXOffset:(double)arg1;
- (double)_maxXOffset;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1;
- (id)currentIndexPath;
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1;
- (id)initWithCentersCellsWhenPaging:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

