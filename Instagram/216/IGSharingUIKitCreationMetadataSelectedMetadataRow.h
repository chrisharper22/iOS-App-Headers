//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGTapButton, UIColor, UILabel;
@protocol IGSharingUIKitCreationMetadataSelectedMetadataRowDelegate;

@interface IGSharingUIKitCreationMetadataSelectedMetadataRow : UIControl
{
    UILabel *_accessoryLabel;
    UILabel *_subtitleLabel;
    IGTapButton *_cancelButton;
    id <IGSharingUIKitCreationMetadataSelectedMetadataRowDelegate> _delegate;
    UILabel *_titleLabel;
    UIColor *_titleColor;
}

+ (double)preferredHeightForWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <IGSharingUIKitCreationMetadataSelectedMetadataRowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_clearButtonTapped;
- (id)_accessibilityLabelWithAllTitles;
- (void)configureWithAccessoryText:(id)arg1;
- (void)configureWithSubtitle:(id)arg1;
- (void)configureWithTitle:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1;

@end

