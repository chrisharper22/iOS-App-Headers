//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface FBPayFullScreenLoadingView : UIView
{
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_loadingOverlayView;
}

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)stopAnimating;
- (void)startAnimating;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

