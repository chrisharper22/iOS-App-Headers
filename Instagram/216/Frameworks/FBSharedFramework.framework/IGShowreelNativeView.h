//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGRenderingLoggingProviding-Protocol.h>

@class IGStoryGradientRingView, NSString, UIButton;
@protocol IGShowreelNativeViewDelegate;

@interface IGShowreelNativeView : UIView <IGRenderingLoggingProviding>
{
    id <IGShowreelNativeViewDelegate> _delegate;
    UIView *_showreelNativeView;
    IGStoryGradientRingView *_loadingIndicatorView;
    UIButton *_failureView;
}

- (void).cxx_destruct;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicator;
- (void)_retrySNFetch;
- (void)_updateLoadingIndicatorView:(unsigned long long)arg1;
- (void)_updateFailureViewIfNecessary:(unsigned long long)arg1;
- (void)_updateStatusViews:(unsigned long long)arg1;
- (void)updateView:(id)arg1;
- (void)updatePlayBackState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_setupRetryViews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 playerView:(id)arg3;
- (id)renderedComponentLoggingInfo;
- (void)playerViewDidFinishPreparingAssets:(id)arg1 templateName:(id)arg2 clientName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
