//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNUXIdentitySyncViewControllerDelegate-Protocol.h"
#import "IGNUXStepControllerProtocol-Protocol.h"

@class IGNUXFlowContext, IGNUXIdentitySyncViewController, NSArray, NSString;
@protocol IGNUXFlowCoordinatorProtocol;

@interface IGNUXIdentitySyncingStepController : NSObject <IGNUXIdentitySyncViewControllerDelegate, IGNUXStepControllerProtocol>
{
    IGNUXFlowContext *_context;
    IGNUXIdentitySyncViewController *_viewController;
    NSArray *_accountsToSync;
    int _syncGraphQLRetryCount;
    id <IGNUXFlowCoordinatorProtocol> coordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGNUXFlowCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void)identitySyncViewControllerFetchContent:(id)arg1;
- (void)identitySyncViewControllerDidSkip:(id)arg1;
- (void)identitySyncViewControllerDidComplete:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

