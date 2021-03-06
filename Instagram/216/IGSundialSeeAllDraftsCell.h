//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGGallerySelectionBadge, IGGradientView, UIImage, UIImageView, UILabel, UIView;

@interface IGSundialSeeAllDraftsCell : UICollectionViewCell
{
    UIImageView *_imageView;
    IGGradientView *_infoLabelProtectionGradient;
    UILabel *_durationLabel;
    UIView *_dimmingView;
    IGGallerySelectionBadge *_selectionBadge;
    _Bool _selectionChromeVisible;
    _Bool _dimmingViewVisible;
    double _duration;
    long long _selectionIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dimmingViewVisible; // @synthesize dimmingViewVisible=_dimmingViewVisible;
@property(nonatomic) _Bool selectionChromeVisible; // @synthesize selectionChromeVisible=_selectionChromeVisible;
@property(nonatomic) long long selectionIndex; // @synthesize selectionIndex=_selectionIndex;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)_setDimmingViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelectionChromeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelectionIndex:(long long)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *thumbnail;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

