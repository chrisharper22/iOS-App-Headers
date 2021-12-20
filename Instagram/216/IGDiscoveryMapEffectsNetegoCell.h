//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, IGTextButton, NSString, UIButton, UILabel;
@protocol IGDiscoveryMapEffectsNetegoCellDelegate;

@interface IGDiscoveryMapEffectsNetegoCell : UICollectionViewCell
{
    IGImageView *_effectImageView;
    UIButton *_dismissButton;
    IGTextButton *_previewButton;
    id <IGDiscoveryMapEffectsNetegoCellDelegate> _delegate;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) __weak id <IGDiscoveryMapEffectsNetegoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGTextButton *previewButton; // @synthesize previewButton=_previewButton;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IGImageView *effectImageView; // @synthesize effectImageView=_effectImageView;
- (void)_didTapButton;
- (void)_dismissButtonTapped;
- (void)setThumbnailURL:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *subtitleText;
@property(retain, nonatomic) NSString *titleText;
- (id)initWithFrame:(struct CGRect)arg1;

@end
