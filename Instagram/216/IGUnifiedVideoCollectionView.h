//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSHashTable;

@interface IGUnifiedVideoCollectionView : UICollectionView
{
    NSHashTable *_registeredScrollViews;
}

- (void).cxx_destruct;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)isScrollEnabled;
- (void)preventBouncePropagationForScrollView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

