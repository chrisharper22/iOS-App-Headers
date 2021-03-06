//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStoryQuickReactionsEmojiCellDelegate-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegate-Protocol.h>

@class IGStoryQuickReactionsViewModel, IGTooltipView, IGUserSession, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;
@protocol IGStoryQuickReactionsViewDelegate;

@interface IGStoryQuickReactionsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IGStoryQuickReactionsEmojiCellDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UILabel *_quickReactionsTitle;
    IGUserSession *_userSession;
    IGTooltipView *_tooltip;
    long long _tooltipIndex;
    IGStoryQuickReactionsViewModel *_viewModel;
    UILabel *_encoreExitNUXTitle;
    id <IGStoryQuickReactionsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryQuickReactionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)quickReactionsEmojiCellDidLongPress:(id)arg1 withLongPressGestureRecgonizer:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)_collectionViewHeight;
- (void)hideTooltipIfNecessary;
- (void)showTooltipWithTextIfNecessary:(id)arg1 atIndex:(long long)arg2 forDuration:(double)arg3 analyticsTag:(id)arg4;
- (void)animateEmojiAtIndexPath:(id)arg1;
- (void)reconfigureWithCurrentViewModel;
- (void)configureWithViewModel:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

