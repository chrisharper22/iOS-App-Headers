//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPassthroughWindow, IGPromoteBottomNotificationViewController;

@interface IGPromoteBottomNotificationBar : NSObject
{
    IGPassthroughWindow *_window;
    IGPromoteBottomNotificationViewController *_viewController;
}

- (void).cxx_destruct;
- (void)_showNotificationBar;
- (void)_setupIfNeeded;
- (void)showWithImage:(id)arg1 styledBody:(id)arg2 bottomOffset:(double)arg3;

@end

