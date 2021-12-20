//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGBrowserViewControllerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol IGBrowserControllerDelegate;

@interface IGBrowserController : NSObject <IGBrowserViewControllerDelegate>
{
    UIViewController *_presentingViewController;
    id <IGBrowserControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBrowserControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)browserViewControllerPresenter;
- (void)browserViewController:(id)arg1 loadingProgressChanged:(double)arg2;
- (void)browserViewController:(id)arg1 UrlChanged:(id)arg2;
- (void)browserViewControllerDidFinishWithUrl:(id)arg1 dismissWithMethod:(unsigned long long)arg2;
- (id)_browserViewControllerWithBrowserSession:(id)arg1 willPushBrowserOnNavStack:(_Bool)arg2 forceFreshLoad:(_Bool)arg3;
- (id)browserViewControllerWithBrowserSession:(id)arg1 forceFreshLoad:(_Bool)arg2;
- (void)presentBrowserWithBrowserSession:(id)arg1 viewController:(id)arg2 presentingPanGesture:(id)arg3 forceFreshLoad:(_Bool)arg4;
- (void)presentBrowserWithBrowserSession:(id)arg1 viewController:(id)arg2 forceFreshLoad:(_Bool)arg3;
- (void)pushBrowserWithBrowserSession:(id)arg1 navigationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
