//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGALTapGestureRecognizer, IGCoreTextView, IGShoppingPDPExternalLinkViewModel, IGTextButton, UILabel;
@protocol IGShoppingPDPExternalLinkCellDelegate;

@interface IGShoppingPDPExternalLinkCell : UICollectionViewCell
{
    IGCoreTextView *_titleView;
    UILabel *_subtitleLabel;
    IGTextButton *_ctaButton;
    IGALTapGestureRecognizer *_tapRecognizer;
    IGShoppingPDPExternalLinkViewModel *_viewModel;
    id <IGShoppingPDPExternalLinkCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPExternalLinkCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
- (void)_didTapCTAButton:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

