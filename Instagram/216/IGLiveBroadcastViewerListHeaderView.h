//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UILabel;
@protocol IGLiveBroadcastViewerListHeaderViewDelegate;

@interface IGLiveBroadcastViewerListHeaderView : UIView
{
    IGTapButton *_doneButton;
    UILabel *_titleView;
    id <IGLiveBroadcastViewerListHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveBroadcastViewerListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_doneButtonTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

