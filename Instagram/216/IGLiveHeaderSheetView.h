//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGShareSheetHeaderView, UICollectionView, UILabel;

@interface IGLiveHeaderSheetView : UIView
{
    UILabel *_titleLabel;
    UIView *_separator;
    UICollectionView *_userListView;
    IGShareSheetHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShareSheetHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UICollectionView *userListView; // @synthesize userListView=_userListView;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

