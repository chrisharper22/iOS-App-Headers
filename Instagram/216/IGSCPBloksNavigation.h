//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPNavigating-Protocol.h"

@class NSString, SCPNavigationDefaultNavigationControllerDelegate, UINavigationController, UIViewController;
@protocol SCPNavigationDelegate;

@interface IGSCPBloksNavigation : NSObject <SCPNavigating>
{
    UIViewController *_hostViewController;
    UINavigationController *_modalNavigationController;
    SCPNavigationDefaultNavigationControllerDelegate *_navigationControllerDelegate;
    id <SCPNavigationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCPNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endFlow;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)presentNextViewController:(id)arg1;
- (void)presentFirstViewController:(id)arg1;
- (void)_endFlowWithCancelled:(_Bool)arg1;
- (void)_cancel;
- (id)_createCancelBarButtonItem;
- (id)initWithHostViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
