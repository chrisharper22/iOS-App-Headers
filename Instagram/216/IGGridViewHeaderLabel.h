//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, UILabel, UIView;
@protocol IGGridViewHeaderLabelDelegate;

@interface IGGridViewHeaderLabel : UICollectionViewCell
{
    id <IGGridViewHeaderLabelDelegate> _delegate;
    UIView *_secondaryView;
    UILabel *_label;
    IGTapButton *_secondaryButton;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) IGTapButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *secondaryView; // @synthesize secondaryView=_secondaryView;
@property(nonatomic) __weak id <IGGridViewHeaderLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapMore;
- (void)setShowsSecondaryLabel:(_Bool)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
