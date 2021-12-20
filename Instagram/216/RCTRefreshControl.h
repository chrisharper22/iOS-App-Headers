//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIRefreshControl.h>

#import "RCTCustomRefreshContolProtocol-Protocol.h"
#import "RCTRefreshableProtocol-Protocol.h"

@class NSString, UIColor, UIScrollView;

@interface RCTRefreshControl : UIRefreshControl <RCTRefreshableProtocol, RCTCustomRefreshContolProtocol>
{
    _Bool _isInitialRender;
    _Bool _currentRefreshingState;
    unsigned long long _currentRefreshingStateClock;
    unsigned long long _currentRefreshingStateTimestamp;
    _Bool _refreshingProgrammatically;
    NSString *_title;
    UIColor *_titleColor;
    double _progressViewOffset;
    CDUnknownBlockType _onRefresh;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType onRefresh; // @synthesize onRefresh=_onRefresh;
- (void)refreshControlValueChanged;
- (void)setProgressViewOffset:(double)arg1;
- (void)setCurrentRefreshingState:(_Bool)arg1;
- (void)setRefreshing:(_Bool)arg1;
- (void)_updateTitle;
- (void)setTitleColor:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)_applyProgressViewOffset;
- (void)endRefreshingProgrammatically;
- (void)beginRefreshingProgrammatically;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;

@end
