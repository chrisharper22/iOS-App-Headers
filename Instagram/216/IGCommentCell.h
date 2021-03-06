//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGCellSwipeActionManagerActionDelegate-Protocol.h"
#import "IGCellSwipeActionManagerSwipingDelegate-Protocol.h"
#import "IGCommentContentWithLikeViewDelegate-Protocol.h"
#import "IGListBindable-Protocol.h"

@class CALayer, IGAccessibilityMagicTapController, IGActionSheetController, IGCellSwipeActionManager, NSString, UIAccessibilityCustomAction, UIButton, UIColor, UITapGestureRecognizer, UIView;
@protocol IGCommentCellDelegate, IGCommentCellInteractionDelegate, IGCommentCellUFIDelegate, IGCommentContentViewProtocol;

@interface IGCommentCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate, IGCellSwipeActionManagerSwipingDelegate, IGCommentContentWithLikeViewDelegate, IGListBindable>
{
    IGActionSheetController *_actionSheetController;
    UITapGestureRecognizer *_singleTapGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    UIColor *_previousColor;
    _Bool _hasDeleteButton;
    _Bool _hasReportButton;
    _Bool _hasPinButton;
    _Bool _isCommentPinned;
    _Bool _hasHideButton;
    _Bool _isHideAction;
    IGAccessibilityMagicTapController *_magicTapController;
    _Bool _isShowingEditActions;
    _Bool _enableSingleTap;
    _Bool _enableDoubleTap;
    _Bool _enableSwipeActions;
    _Bool _showActions;
    id <IGCommentCellDelegate> _delegate;
    id <IGCommentCellInteractionDelegate> _interactionDelegate;
    id <IGCommentCellUFIDelegate> _ufiDelegate;
    UIButton *_pinButton;
    UIAccessibilityCustomAction *_pinAccessibilityAction;
    UIButton *_replyButton;
    CALayer *_replyButtonSeparatorLayer;
    UIButton *_deleteButton;
    UIButton *_reportButton;
    CALayer *_reportButtonSeparatorLayer;
    UIButton *_hideButton;
    UIAccessibilityCustomAction *_hideAccessibilityAction;
    IGCellSwipeActionManager *_cellSwipeActionManager;
    double _beginningX;
    long long _maxActionBarWidth;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxActionBarWidth; // @synthesize maxActionBarWidth=_maxActionBarWidth;
@property(nonatomic) _Bool showActions; // @synthesize showActions=_showActions;
@property(nonatomic) double beginningX; // @synthesize beginningX=_beginningX;
@property(retain, nonatomic) IGCellSwipeActionManager *cellSwipeActionManager; // @synthesize cellSwipeActionManager=_cellSwipeActionManager;
@property(readonly, nonatomic) UIAccessibilityCustomAction *hideAccessibilityAction; // @synthesize hideAccessibilityAction=_hideAccessibilityAction;
@property(readonly, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(readonly, nonatomic) CALayer *reportButtonSeparatorLayer; // @synthesize reportButtonSeparatorLayer=_reportButtonSeparatorLayer;
@property(readonly, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) CALayer *replyButtonSeparatorLayer; // @synthesize replyButtonSeparatorLayer=_replyButtonSeparatorLayer;
@property(readonly, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(readonly, nonatomic) UIAccessibilityCustomAction *pinAccessibilityAction; // @synthesize pinAccessibilityAction=_pinAccessibilityAction;
@property(readonly, nonatomic) UIButton *pinButton; // @synthesize pinButton=_pinButton;
@property(nonatomic) _Bool enableSwipeActions; // @synthesize enableSwipeActions=_enableSwipeActions;
@property(nonatomic) _Bool enableDoubleTap; // @synthesize enableDoubleTap=_enableDoubleTap;
@property(nonatomic) _Bool enableSingleTap; // @synthesize enableSingleTap=_enableSingleTap;
@property(nonatomic) __weak id <IGCommentCellUFIDelegate> ufiDelegate; // @synthesize ufiDelegate=_ufiDelegate;
@property(nonatomic) __weak id <IGCommentCellInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak id <IGCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isShowingEditActions; // @synthesize isShowingEditActions=_isShowingEditActions;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)bindViewModel:(id)arg1;
- (void)contentView:(id)arg1 didTapOnUnsupportedMediaView:(id)arg2;
- (void)contentView:(id)arg1 didEndLongPressOnLikeButton:(id)arg2;
- (void)contentView:(id)arg1 didLongPressOnLikeButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnCommentMedia:(id)arg2;
- (void)contentView:(id)arg1 didTapOnCheckmarkButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnTapToReadButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnDeleteButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnApproveButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnTranslateButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnFailureButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnLikedByUser:(id)arg2;
- (void)contentView:(id)arg1 didTapOnUnhideButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnPrivateReplyButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnReplyButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnLikeCountButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnLikeButton:(id)arg2;
- (void)didFailToPost:(id)arg1;
- (void)cellSwipeManagerWillCompleteClosingSwipeAction:(id)arg1;
- (void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2;
- (void)cellSwipeActionManager:(id)arg1 willCompleteSwipeActionForButton:(id)arg2;
- (_Bool)cellSwipeActionManagerShouldAllowSwipeToAction:(id)arg1;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (_Bool)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (void)hideHighlight;
- (void)showHighlightWithAutoHide:(_Bool)arg1;
- (void)_didDoubleTap:(id)arg1;
- (void)_didSingleTap:(id)arg1;
- (void)_didLongPressCommentCell:(id)arg1;
- (void)_toggleActions;
- (void)peekActions;
- (void)showActions:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_hideButtonTapped:(id)arg1;
- (void)_deleteButtonTapped:(id)arg1;
- (void)_pinButtonTapped:(id)arg1;
- (void)_reportButtonTapped:(id)arg1;
- (void)_replyButtonTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHideButton:(_Bool)arg1;
- (void)updatePinButton:(_Bool)arg1;
- (void)setActionButtons:(long long)arg1 presentationStyle:(long long)arg2;
- (void)setCommentViewModel:(id)arg1 coreTextLinkHandler:(id)arg2 profilePicViewDelegate:(id)arg3 shouldShowLongPressLikeIconTooltip:(_Bool)arg4 maxShowLongPressLikeIconTooltipCount:(long long)arg5;
@property(readonly, nonatomic) UIView<IGCommentContentViewProtocol> *commentView;
- (void)_setupHideButton;
- (void)_setupDeleteButton;
- (void)_setupReplyButton;
- (void)_setupPinButton;
- (void)_setupReportButton;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

