//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IGTVGuidePendingUploadHeaderView : UIView
{
    UIView *_backgroundView;
    UILabel *_progressLabel;
    UIView *_trackView;
    UIView *_progressView;
    UILabel *_failedLabel;
    _Bool _failed;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool failed; // @synthesize failed=_failed;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateProgressText;
- (void)_configureStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

