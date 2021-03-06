//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol IGGuideItemAttributionOverlayDelegate;

@interface IGGuideItemAttributionOverlay : UIView
{
    UILabel *_attributionLabel;
    UIButton *_optionsButton;
    _Bool _shouldUseDarkAttributionText;
    id <IGGuideItemAttributionOverlayDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideItemAttributionOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldUseDarkAttributionText; // @synthesize shouldUseDarkAttributionText=_shouldUseDarkAttributionText;
- (void)_optionsButtonTapped;
- (void)_configureAttributionStyle;
- (void)configureWithAttributionText:(id)arg1 shouldShowOptionsButton:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

