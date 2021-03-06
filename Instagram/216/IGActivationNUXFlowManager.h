//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGNUXFlowCoordinator, IGNavigationController, IGUserSession, UIViewController;

@interface IGActivationNUXFlowManager : NSObject
{
    IGUserSession *_userSession;
    IGNUXFlowCoordinator *_nuxCoordinator;
    UIViewController *_hostViewController;
    IGNavigationController *_navigationController;
    IGNavigationController *_strongNavigationController;
}

- (void).cxx_destruct;
- (void)_showNUXWithDataProvider:(id)arg1 context:(id)arg2;
- (void)showRegularNUX;
- (id)initWithUserSession:(id)arg1 navigationController:(id)arg2;
- (id)initWithUserSession:(id)arg1 hostViewController:(id)arg2;

@end

