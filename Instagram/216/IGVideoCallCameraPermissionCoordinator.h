//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStoryCameraPermissionViewControllerDelegate-Protocol.h"
#import "IGVideoCallCameraPermissionCoordinatorInterface-Protocol.h"

@class IGVideoCallLoggingContext, NSString, UIViewController;
@protocol IGVideoCallCameraPermissionCoordinatorDelegate;

@interface IGVideoCallCameraPermissionCoordinator : NSObject <IGStoryCameraPermissionViewControllerDelegate, IGVideoCallCameraPermissionCoordinatorInterface>
{
    UIViewController *_presentingViewController;
    IGVideoCallLoggingContext *_loggingContext;
    id <IGVideoCallCameraPermissionCoordinatorDelegate> _delegate;
    CDUnknownBlockType _permissionsBlock;
    long long _callType;
}

- (void).cxx_destruct;
- (void)_permissionViewControllerDidAuthorizePermissions:(id)arg1;
- (void)permissionViewControllerWillOpenSettings:(id)arg1;
- (void)permissionViewControllerDidCancel:(id)arg1;
- (void)permissionViewControllerDidAuthorizeAudioAndVideo:(id)arg1;
- (void)permissionViewControllerDidAuthorizeAudio:(id)arg1;
- (void)permissionViewControllerDidAuthorizeVideo:(id)arg1;
- (void)permissionViewControllerDidTapEnableAudio:(id)arg1;
- (void)permissionViewControllerDidTapEnableVideo:(id)arg1;
- (_Bool)isPermissionsAuthorized;
- (void)checkAndRequestPermissionsWithBlock:(CDUnknownBlockType)arg1;
- (void)requestPermissions;
- (id)initWithPresentingViewController:(id)arg1 callType:(long long)arg2 loggingContext:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

