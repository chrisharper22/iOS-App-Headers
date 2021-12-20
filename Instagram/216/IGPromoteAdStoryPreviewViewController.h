//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class IGBoostPostLogger, IGTapButton, NSString, NSURL, UIActivityIndicatorView, WKWebView;

@interface IGPromoteAdStoryPreviewViewController : UIViewController <WKNavigationDelegate, IGGestureHandler>
{
    IGBoostPostLogger *_logger;
    IGTapButton *_dismissButton;
    NSURL *_previewUrl;
    UIActivityIndicatorView *_spinner;
    WKWebView *_webView;
    _Bool _webViewFinishedLoading;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_dismissPreview;
- (void)_setupViews;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPreviewUrl:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
