//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGCellSwipeActionManagerActionDelegate-Protocol.h"
#import "IGSwipeableCollectionViewCellProtocol-Protocol.h"

@class IGAccessibilityMagicTapController, IGCellSwipeActionManager, IGNewsCellView, NSString, UIButton;
@protocol IGSwipeableCollectionViewCellDelegate;

@interface IGNewsCollectionViewCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate, IGSwipeableCollectionViewCellProtocol>
{
    IGCellSwipeActionManager *_cellSwipeActionManager;
    IGAccessibilityMagicTapController *_magicTapController;
    IGNewsCellView *_cellView;
    id <IGSwipeableCollectionViewCellDelegate> _swipeDelegate;
    UIButton *_reportButton;
    UIButton *_hideButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(nonatomic) __weak id <IGSwipeableCollectionViewCellDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
@property(readonly, nonatomic) IGNewsCellView *cellView; // @synthesize cellView=_cellView;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (_Bool)_didTapDeleteButton;
- (_Bool)accessibilityActivate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (_Bool)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (void)showSwipeAnimationTeaser;
- (void)setBackgroundColor:(id)arg1;
- (void)configureWithContextString:(id)arg1 story:(id)arg2 userSession:(id)arg3 module:(id)arg4 showStoryRing:(_Bool)arg5 ufiModel:(id)arg6 hasExpiredMedia:(_Bool)arg7 shouldEnableSwipeActions:(_Bool)arg8;
- (void)_didTapReportButton:(id)arg1;
- (void)_didTapHideButton:(id)arg1;
- (id)_createReportButton;
- (id)_createHideButton;
- (void)_hideActionAnimated:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

