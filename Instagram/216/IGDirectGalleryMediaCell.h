//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGDirectGalleryMediaCellProtocol-Protocol.h"

@class IGGallerySelectionBadge, IGGradientView, NSString, UIImageView, UILabel, UIView;

@interface IGDirectGalleryMediaCell : UICollectionViewCell <IGDirectGalleryMediaCellProtocol>
{
    UIImageView *_imageView;
    IGGradientView *_gradientView;
    UILabel *_durationLabel;
    UIView *_disableOverlay;
    UIImageView *_checkmarkView;
    _Bool _checkmarkVisibility;
    IGGallerySelectionBadge *_gallerySelectionBadgeView;
    unsigned long long _checkmarkStyle;
    NSString *_assetIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
- (void)updateAssetIdentifier:(id)arg1 durationLabelVisibility:(_Bool)arg2 disableOverlayVisibility:(_Bool)arg3 checkmarkVisibility:(_Bool)arg4 selectedAssetNumber:(unsigned long long)arg5 text:(id)arg6 image:(id)arg7 checkmarkStyle:(unsigned long long)arg8 accessibilityLabel:(id)arg9 animated:(_Bool)arg10;
- (void)setSelectionIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_resetViewState;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateVisibilityForCheckmarkStyleAndCheckmarkVisible:(_Bool)arg1;
- (void)_setupCheckMarkView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
