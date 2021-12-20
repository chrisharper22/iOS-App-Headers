//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGScrollProgressView, IGShoppingPDPARTapIndicator, IGShoppingPDPHeroCarouselCollectionViewLayout, UICollectionView, UIView;
@protocol IGFeedSidecarIndicatorViewProtocol, IGShoppingPDPHeroCarouselContainerCellDelegate;

@interface IGShoppingPDPHeroCarouselContainerCell : UICollectionViewCell
{
    IGScrollProgressView *_scrollProgressView;
    IGShoppingPDPARTapIndicator *_arTapIndicator;
    UIView<IGFeedSidecarIndicatorViewProtocol> *_sidecarIndicatorView;
    unsigned long long _arTapIndicatorPosition;
    long long _wrapAroundBufferSize;
    _Bool _carouselIndicatorEnabled;
    long long _photosCount;
    long long _videosCount;
    long long _totalMedia;
    _Bool _scrollProgressViewEnabled;
    id <IGShoppingPDPHeroCarouselContainerCellDelegate> _delegate;
    UICollectionView *_collectionView;
    IGShoppingPDPHeroCarouselCollectionViewLayout *_collectionViewLayout;
    double _actualCollectionViewContentWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double actualCollectionViewContentWidth; // @synthesize actualCollectionViewContentWidth=_actualCollectionViewContentWidth;
@property(nonatomic, getter=isScrollProgressViewEnabled) _Bool scrollProgressViewEnabled; // @synthesize scrollProgressViewEnabled=_scrollProgressViewEnabled;
@property(readonly, nonatomic) IGShoppingPDPHeroCarouselCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselContainerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateARTapIndicator;
- (void)_onARIndicatorTapped;
- (void)setCounterWithPhotosCount:(long long)arg1 andVideosCount:(long long)arg2;
- (void)setCarouselIndicatorVisible:(_Bool)arg1 animated:(_Bool)arg2 withDuration:(double)arg3;
- (void)setCarouselIndicator:(_Bool)arg1 withWrapAroundBufferSize:(long long)arg2 withPhotosCount:(long long)arg3 videosCount:(long long)arg4 andTotalMedia:(long long)arg5;
- (void)_updateCarouselIndicator:(_Bool)arg1 withWrapAroundBufferSize:(long long)arg2;
- (void)trackARTapIndicatorWithViewpointAction:(id)arg1;
- (void)setARTapIndicatorState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setARTapIndicatorUIStyle:(unsigned long long)arg1;
- (void)setARTapIndicatorVisible:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)configureARTapIndicatorWithText:(id)arg1 position:(unsigned long long)arg2;
- (void)updateScrollProgress;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
