//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@protocol IGBugReportingCaptureStatusBarDelegate;

@interface IGBugReportingCaptureStatusBarWindow : UIWindow
{
    id <IGBugReportingCaptureStatusBarDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBugReportingCaptureStatusBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_viewTapped:(id)arg1;
- (id)initWithRedesignEnabled:(_Bool)arg1;

@end

