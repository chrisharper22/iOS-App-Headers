//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStoryViewerPivotModel, UIButton;
@protocol IGStoryFullscreenFooterPivotViewDelegate;

@interface IGStoryFullscreenFooterPivotView : UIView
{
    IGStoryViewerPivotModel *_pivotModel;
    id <IGStoryFullscreenFooterPivotViewDelegate> _delegate;
    UIView *_backgroundBlurView;
    UIButton *_storyButton;
    UIButton *_postLiveButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *postLiveButton; // @synthesize postLiveButton=_postLiveButton;
@property(readonly, nonatomic) UIButton *storyButton; // @synthesize storyButton=_storyButton;
@property(readonly, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(nonatomic) __weak id <IGStoryFullscreenFooterPivotViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_postLiveButtonTapped;
- (void)_storyButtonTapped;
- (void)configureWithPivotModel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithInitialType:(long long)arg1;

@end
