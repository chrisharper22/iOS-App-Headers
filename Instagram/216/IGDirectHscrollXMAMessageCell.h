//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDirectMessageCell.h>

#import "IGDirectHscrollXMASingleItemViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGDirectHscrollXMASingleItemView, IGHScrollCollectionViewLayout, NSArray, NSString, UICollectionView;
@protocol IGDirectHscrollXMAMessageCellDelegate;

@interface IGDirectHscrollXMAMessageCell : IGDirectMessageCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGDirectHscrollXMASingleItemViewDelegate>
{
    UICollectionView *_collectionView;
    IGDirectHscrollXMASingleItemView *_singleItemView;
    struct CGSize _contentSize;
    long long _itemCount;
    double _parentViewWidth;
    NSArray *_xmaItems;
    IGHScrollCollectionViewLayout *_flowLayout;
    _Bool _playPauseButtonIsPlaying;
    id <IGDirectHscrollXMAMessageCellDelegate> _hscrollCellDelegate;
    double _playPauseButtonProgress;
}

+ (_Bool)needsSingleTapGesture;
+ (_Bool)needsContainerStyling;
- (void).cxx_destruct;
@property(nonatomic) _Bool playPauseButtonIsPlaying; // @synthesize playPauseButtonIsPlaying=_playPauseButtonIsPlaying;
@property(nonatomic) double playPauseButtonProgress; // @synthesize playPauseButtonProgress=_playPauseButtonProgress;
@property(nonatomic) __weak id <IGDirectHscrollXMAMessageCellDelegate> hscrollCellDelegate; // @synthesize hscrollCellDelegate=_hscrollCellDelegate;
- (void)didTapOnPlayPauseButton:(id)arg1;
- (void)didTapOnCtaButtonWithActionURL:(id)arg1 postbackPayload:(id)arg2 actionTitle:(id)arg3 indexId:(long long)arg4 itemType:(long long)arg5;
- (void)didTapOnSingleViewWithTargetUrl:(id)arg1 indexId:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)prepareForReuse;
- (id)staticGradientView;
- (struct CGSize)messageContentSize;
- (void)layoutSubviews;
- (void)_configureAccessibility;
- (void)configureWithHscrollXMAMessageViewModel:(id)arg1;
- (void)_setupCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

