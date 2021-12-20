//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGContentWarningProgressManagerListener-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"

@class CAShapeLayer, IGCommentOffense, IGCoreTextView, NSString, UIButton, UIProgressView;
@protocol IGContentWarningIndicatorCellDelegate;

@interface IGContentWarningIndicatorCell : UICollectionViewCell <IGCoreTextLinkHandler, IGContentWarningProgressManagerListener>
{
    IGCoreTextView *_warningCoreTextView;
    UIButton *_undoButton;
    UIProgressView *_progressView;
    IGCommentOffense *_offenseComment;
    CAShapeLayer *_topDividerShape;
    unsigned long long _layoutStyle;
    id <IGContentWarningIndicatorCellDelegate> _delegate;
}

+ (struct CGSize)sizeForWarningStyledString:(id)arg1 undoText:(id)arg2 containerWidth:(double)arg3 layoutStyle:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGContentWarningIndicatorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentWarningProgressManagerDidUpdateToProgress:(double)arg1;
- (void)_didTapUndoButton;
- (void)_setupTopDivider;
- (void)_setUpProgressBarColor;
- (void)_updateProgressViewTransform;
- (void)_setupProgressBar;
- (void)_setupUndoButton;
- (void)_setupWarningCoreText;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)prepareForReuse;
- (void)configureWithStyledString:(id)arg1 undoText:(id)arg2 layoutSyle:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

