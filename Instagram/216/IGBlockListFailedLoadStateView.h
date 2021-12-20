//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol IGBlockListFailedLoadStateViewDelegate;

@interface IGBlockListFailedLoadStateView : UIView
{
    UIButton *_retryButton;
    UILabel *_failedLoadStateLabel;
    id <IGBlockListFailedLoadStateViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBlockListFailedLoadStateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tapped;
- (void)_setupRetryButtonIfNecessary;
- (void)_setupErrorLabelIfNecessary;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
