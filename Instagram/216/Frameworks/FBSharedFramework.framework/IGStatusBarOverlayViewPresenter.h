//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPassthroughWindow, IGStatusBarProxyViewController, UIApplication;

@interface IGStatusBarOverlayViewPresenter : NSObject
{
    UIApplication *_application;
    IGStatusBarProxyViewController *_statusBarViewController;
    IGPassthroughWindow *_overlayWindow;
    _Bool _showing;
    _Bool _hiding;
}

- (void).cxx_destruct;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithApplication:(id)arg1 volumeView:(id)arg2;

@end

