//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGHeadlineView, IGTextButton, NSArray, UILabel, UIScrollView;
@protocol IGLocationPermissionViewDelegate;

@interface IGLocationPermissionView : UIView
{
    IGHeadlineView *_headlineView;
    UIScrollView *_scrollView;
    NSArray *_contentViews;
    UILabel *_footerLabel;
    IGTextButton *_dismissButton;
    UIView *_buttonContainerView;
    IGTextButton *_confimationButton;
    id <IGLocationPermissionViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLocationPermissionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDismissButton;
- (void)didTapConfirmationButton;
- (void)layoutSubviews;
- (id)init;

@end

