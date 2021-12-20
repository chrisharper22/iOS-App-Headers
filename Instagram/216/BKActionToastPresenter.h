//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKBloksActionToastViewControllerDelegate-Protocol.h"

@class BKActionToastPresenterWindow, BKBloksActionToastViewController, NSString;
@protocol BKActionToastPresenterDelegate;

@interface BKActionToastPresenter : NSObject <BKBloksActionToastViewControllerDelegate>
{
    BKActionToastPresenterWindow *_window;
    BKBloksActionToastViewController *_viewController;
    id <BKActionToastPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)toastDismissedWithToastID:(id)arg1;
- (void)startCATransactionWithControlPoints:(id)arg1;
- (void)dismissToastWithAnimationDuration:(double)arg1 controlPoints:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentToast:(id)arg1 toastID:(id)arg2 withAnimationDuration:(double)arg3 controlPoints:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
