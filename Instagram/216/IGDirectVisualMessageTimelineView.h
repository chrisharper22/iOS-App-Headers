//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectVisualMessageTimelinePlayheadView, UICollectionView;

@interface IGDirectVisualMessageTimelineView : UIView
{
    IGDirectVisualMessageTimelinePlayheadView *_playheadView;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initTimelineView;

@end

