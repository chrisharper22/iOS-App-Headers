//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UICollectionView, UILabel;

@interface IGDiscoveryIGTVChannelCell : UICollectionViewCell
{
    UILabel *_titleView;
    UICollectionView *_collectionView;
    NSString *_title;
}

+ (double)preferredHeightForTitle:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
