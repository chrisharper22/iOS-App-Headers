//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGSundialVideoTrimmer, UIControl;

@interface IGSundialVideoTrimmingFooterView : UIView
{
    IGSundialVideoTrimmer *_videoTrimmer;
    UIControl *_confirmButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(readonly, nonatomic) IGSundialVideoTrimmer *videoTrimmer; // @synthesize videoTrimmer=_videoTrimmer;
@property(nonatomic) _Bool confirmButtonVisible;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithLauncherSetProvider:(id)arg1;

@end

