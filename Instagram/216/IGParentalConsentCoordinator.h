//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGParentalConsentApprovalViewControllerDelegate-Protocol.h"
#import "IGParentalConsentContactViewControllerDelegate-Protocol.h"

@class IGRegistrationLogger, IGUserSession, NSString, UINavigationController;
@protocol IGParentalConsentCoordinatorDelegate;

@interface IGParentalConsentCoordinator : NSObject <IGParentalConsentApprovalViewControllerDelegate, IGParentalConsentContactViewControllerDelegate>
{
    UINavigationController *_navigationController;
    IGUserSession *_userSession;
    IGRegistrationLogger *_logger;
    id <IGParentalConsentCoordinatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGParentalConsentCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)parentalContactViewControllerDidSucceed:(id)arg1;
- (void)parentalConsentApprovalViewControllerDidComplete:(id)arg1;
- (void)parentalConsentApprovalViewControllerDidSkip:(id)arg1;
- (void)startFlow;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 navigationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

