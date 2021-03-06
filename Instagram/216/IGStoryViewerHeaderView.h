//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UILabel;
@protocol IGStoryViewerHeaderViewDelegate;

@interface IGStoryViewerHeaderView : UIView
{
    IGTapButton *_backButton;
    IGTapButton *_moreOptionsButton;
    long long _style;
    UILabel *_titleLabel;
    id <IGStoryViewerHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryViewerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapMoreOptionsButton:(id)arg1;
- (void)_didTapBackButton:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end

