//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNUXStepControllerProtocol-Protocol.h"
#import "IGRegistrationOneTapViewControllerDelegate-Protocol.h"

@class IGNUXFlowContext, NSString, UIViewController;
@protocol IGNUXFlowCoordinatorProtocol;

@interface IGNUXOneTapStepController : NSObject <IGNUXStepControllerProtocol, IGRegistrationOneTapViewControllerDelegate>
{
    IGNUXFlowContext *_context;
    UIViewController *_viewController;
    id <IGNUXFlowCoordinatorProtocol> coordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGNUXFlowCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void)oneTapControllerNextButtonTapped;
- (void)oneTapControllerSkipButtonTapped;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

