//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMessagingMailboxProtocol-Protocol.h>

@class MBAMailbox, MBAMessagingPlatform, MBUIMediaManager, NSError, NSMutableArray, NSString;
@protocol MBIMediaUploadHandling;

@interface FBMessagingMailboxV3 : NSObject <FBMessagingMailboxProtocol>
{
    MBAMailbox *_underlyingMailbox;
    MBUIMediaManager *_underlyingMediaManager;
    id <MBIMediaUploadHandling> _underlyingMediaUploadHandler;
    NSMutableArray *_activationCallbackBlocks;
    MBAMessagingPlatform *_messagingPlatform;
    CDUnknownBlockType _willInitializeActions;
    CDUnknownBlockType _willActivateActions;
    CDUnknownBlockType _didActivateActions;
    CDUnknownBlockType _willDeactivateActions;
    CDUnknownBlockType _didDeactivateActions;
    CDUnknownBlockType _fatalErrorHandlerProvider;
    _Bool _shouldEnableWalMode;
    _Bool _deleteDatabaseAfterShutdown;
    NSError *_underlyingFatalError;
    NSString *_userLocale;
    _Bool _syncEnabled;
}

- (void).cxx_destruct;
- (void)beginSyncIfNeeded;
- (void)_setMailboxState:(int)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)underlyingFatalErrorIfAvailable;
- (void)_activateUnderlyingMailboxWithStoreURL:(id)arg1 authSession:(id)arg2 databaseCreated:(_Bool)arg3 error:(id)arg4 userLocale:(id)arg5 activateSyncAfterSetup:(_Bool)arg6;
- (void)_underlyingMailboxActivatedWithError:(id)arg1;
- (void)_setUnderlyingMailbox:(id)arg1;
- (void)invalidate;
- (id)underlylingMediaUploadHandler;
- (id)underlyingMediaManagerIfAvailable;
- (id)underlyingMailboxIfAvailable;
- (void)getActiveUnderlyingMailbox:(CDUnknownBlockType)arg1;
- (void)setupMailboxWithConfig:(id)arg1 lifeCycleBlocks:(id)arg2;
- (id)initWithPlatform:(id)arg1;
- (id)initWithPlatformConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
