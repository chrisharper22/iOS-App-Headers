//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStoryFacepileView, UIButton, UILabel, UIVisualEffectView;

@interface IGLiveRoomGuestEndingView : UIView
{
    IGStoryFacepileView *_profileListView;
    UIVisualEffectView *_blurView;
    UIView *_summaryView;
    UILabel *_titleLabel;
    UILabel *_summaryLabel;
    UIButton *_doneButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void)layoutSubviews;
- (id)initWithHost:(id)arg1 guests:(id)arg2 module:(id)arg3;

@end
