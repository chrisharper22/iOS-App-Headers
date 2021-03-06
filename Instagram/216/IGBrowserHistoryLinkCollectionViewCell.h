//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGCellSwipeActionManagerActionDelegate-Protocol.h"

@class IGBrowserHistoryLinkInfo, IGCellSwipeActionManager, NSString, UIButton, UILabel, UIView;
@protocol IGBrowserHistoryLinkCollectionViewCellDelegate;

@interface IGBrowserHistoryLinkCollectionViewCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate>
{
    UIView *_thumbnail;
    UIView *_infoContainerView;
    UILabel *_webpageTitle;
    UILabel *_displayURL;
    UILabel *_timeSinceInteraction;
    UIButton *_hideButton;
    IGCellSwipeActionManager *_cellSwipeActionManager;
    IGBrowserHistoryLinkInfo *_linkInfoModel;
    id <IGBrowserHistoryLinkCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBrowserHistoryLinkCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (_Bool)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (id)_createHideButton;
- (void)_didTapHideButton:(id)arg1;
- (void)hideActionView;
- (void)configureWithLinkInfoModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

