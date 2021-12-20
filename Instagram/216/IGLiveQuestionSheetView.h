//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UICollectionView, UIImageView, UILabel;
@protocol IGLiveQuestionSheetViewDelegate;

@interface IGLiveQuestionSheetView : UIView
{
    UIView *_headerContainer;
    UILabel *_headerLabel;
    UIButton *_moreButton;
    UIView *_nullStateContainer;
    UIImageView *_nullStateImageView;
    UILabel *_nullStateMessageLabel;
    UICollectionView *_collectionView;
    UIView *_nullStateView;
    id <IGLiveQuestionSheetViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveQuestionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *nullStateView; // @synthesize nullStateView=_nullStateView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_moreButtonTapped:(id)arg1;
- (void)_setUpNullStateViewsWithEntryPoint:(unsigned long long)arg1 isRealtimeQuestionFeatureEnabled:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithEntryPoint:(unsigned long long)arg1 showMoreButton:(_Bool)arg2 isRealtimeQuestionFeatureEnabled:(_Bool)arg3;

@end

