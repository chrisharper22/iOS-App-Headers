//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGImageView, IGTextButton, UILabel;
@protocol IGFBCrossPostingFeedAudienceSheetDelegate;

@interface IGFBCrossPostingFeedAudienceSheetView : UIView
{
    IGImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_separatorLineView;
    IGTextButton *_primaryButton;
    IGTextButton *_secondaryButton;
    double _contentHeight;
    id <IGFBCrossPostingFeedAudienceSheetDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFBCrossPostingFeedAudienceSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_secondaryButtonTapped;
- (void)_primaryButtonTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

