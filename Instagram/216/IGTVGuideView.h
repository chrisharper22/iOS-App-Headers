//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGHorizontalRefreshControl, IGTVSeparatorView, NSString, UICollectionView, UILabel;

@interface IGTVGuideView : UIView
{
    UILabel *_titleLabel;
    IGTVSeparatorView *_titleSeparator;
    _Bool _refreshControlEnabled;
    UICollectionView *_collectionView;
    IGHorizontalRefreshControl *_refreshControl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool refreshControlEnabled; // @synthesize refreshControlEnabled=_refreshControlEnabled;
@property(readonly, nonatomic) IGHorizontalRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (double)preferredHeightInWidth:(double)arg1;
@property(retain, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

