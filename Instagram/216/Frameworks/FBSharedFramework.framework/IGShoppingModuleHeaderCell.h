//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGCoreTextNonLinkHandler-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, IGCoreTextView, IGShoppingModuleHeaderViewModel, IGTapButton, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol IGShoppingModuleHeaderCellDelegate;

@interface IGShoppingModuleHeaderCell : UICollectionViewCell <IGCoreTextNonLinkHandler, UIGestureRecognizerDelegate>
{
    IGShoppingModuleHeaderViewModel *_viewModel;
    UILabel *_titleLabel;
    IGCoreTextView *_subtitleView;
    IGTapButton *_actionButton;
    UIImageView *_chevronView;
    CALayer *_topSeparatorLayer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <IGShoppingModuleHeaderCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingModuleHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapActionButton:(id)arg1;
- (void)_setupChevronView;
- (void)_setupActionButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

