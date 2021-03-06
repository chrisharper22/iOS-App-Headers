//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCircularProgressView, IGStoryUploadStatusView, IGTapButton;
@protocol IGStoryOverviewUploadStatusViewDelegate;

@interface IGStoryOverviewUploadStatusView : UIView
{
    unsigned long long _status;
    id <IGStoryOverviewUploadStatusViewDelegate> _delegate;
    IGStoryUploadStatusView *_statusLabelView;
    IGTapButton *_retryButton;
    IGCircularProgressView *_progressView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) IGTapButton *retryButton; // @synthesize retryButton=_retryButton;
@property(readonly, nonatomic) IGStoryUploadStatusView *statusLabelView; // @synthesize statusLabelView=_statusLabelView;
@property(nonatomic) __weak id <IGStoryOverviewUploadStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)_onRetryTapped;
@property(nonatomic) double progress;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

