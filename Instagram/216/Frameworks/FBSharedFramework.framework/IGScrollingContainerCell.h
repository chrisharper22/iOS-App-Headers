//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIScrollView, UIView, UIViewController;

@interface IGScrollingContainerCell : UICollectionViewCell
{
    double _dimmingAlpha;
    UIScrollView *_containerScrollView;
    UIViewController *_viewController;
    UIView *_dimmingOverlay;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *dimmingOverlay; // @synthesize dimmingOverlay=_dimmingOverlay;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(nonatomic) double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
- (void)_resetToDefaultAppearance;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithViewController:(id)arg1 parentViewController:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
