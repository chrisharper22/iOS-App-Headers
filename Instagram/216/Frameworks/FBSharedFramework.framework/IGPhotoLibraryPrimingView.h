//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGHeadlineView, IGTextButton, NSArray, UILabel, UIScrollView;
@protocol IGPhotoLibraryPrimingViewDelegate;

@interface IGPhotoLibraryPrimingView : UIView
{
    UIScrollView *_scrollView;
    IGHeadlineView *_headlineView;
    NSArray *_contentViews;
    UILabel *_footerLabel;
    UIView *_buttonContainerView;
    IGTextButton *_confimationButton;
    IGTextButton *_dismissButton;
    id <IGPhotoLibraryPrimingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPhotoLibraryPrimingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithUpdatedPriming:(_Bool)arg1 gallerySuggestionsPrimingEnabled:(_Bool)arg2;

@end
