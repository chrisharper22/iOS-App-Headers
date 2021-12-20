//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGBugReportingCaptureStatusBarDelegate-Protocol.h"

@class IGBugReportingCaptureStatusBarWindow, NSString, UIButton;
@protocol IGBugReportingCaptureOverlayDelegate;

@interface IGBugReportingCaptureOverlayViewController : UIViewController <IGBugReportingCaptureStatusBarDelegate>
{
    _Bool _redesignEnabled;
    UIButton *_captureButton;
    IGBugReportingCaptureStatusBarWindow *_statusBarWindow;
    id <IGBugReportingCaptureOverlayDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBugReportingCaptureOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGBugReportingCaptureStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
- (void)_actionButtonAction:(id)arg1;
- (void)onBugReportCaptureStatusBarTap;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithRedesignEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
