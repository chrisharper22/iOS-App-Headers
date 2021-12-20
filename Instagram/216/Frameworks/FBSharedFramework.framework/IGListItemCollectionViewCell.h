//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGCellSwipeActionManagerActionDelegate-Protocol.h>
#import <FBSharedFramework/IGSwipeableCollectionViewCellProtocol-Protocol.h>

@class IGCellSwipeActionManager, IGListItemView, NSString, UIButton;
@protocol IGListItemViewProvider, IGSwipeableCollectionViewCellDelegate;

@interface IGListItemCollectionViewCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate, IGSwipeableCollectionViewCellProtocol>
{
    IGCellSwipeActionManager *_cellSwipeActionManager;
    _Bool _highlightable;
    id <IGListItemViewProvider> _provider;
    IGListItemView *_itemView;
    id <IGSwipeableCollectionViewCellDelegate> _swipeDelegate;
    UIButton *_hideButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(nonatomic, getter=isHighlightable) _Bool highlightable; // @synthesize highlightable=_highlightable;
@property(nonatomic) __weak id <IGSwipeableCollectionViewCellDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
@property(readonly, nonatomic) IGListItemView *itemView; // @synthesize itemView=_itemView;
@property(readonly, nonatomic) id <IGListItemViewProvider> provider; // @synthesize provider=_provider;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (_Bool)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (void)showSwipeAnimationTeaser;
- (void)configureWithSwipeToHideEnabled:(_Bool)arg1;
- (void)_didTapHideButton:(id)arg1;
- (id)_createHideButton;
- (void)_hideActionAnimated:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)__private_initializeProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

