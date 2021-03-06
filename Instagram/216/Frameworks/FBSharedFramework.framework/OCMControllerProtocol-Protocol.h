//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/OCMComponentManagingContext-Protocol.h>

@class FBCaptureCoordinatorBase, NSArray, NSObject, NSSet, NSString, OCMGraph;
@protocol FBCaptureCameraController><FBARCameraSLAMControllerProviding><FBCaptureSessionController, FBCaptureCoordinatorFilterManaging><FBCCCaptureModeManaging, FBCaptureMode, OCMCaptureModeOwning;

@protocol OCMControllerProtocol <OCMComponentManagingContext>
@property(retain, nonatomic) OCMGraph *graph;
- (_Bool)isCaptureCoordinatorRunning;
- (_Bool)isCaptureCoordinatorLoaded;
- (id <FBCaptureMode>)activeCaptureMode;
- (long long)activeControllerState;
- (struct FBCaptureCoordinatorConfiguration)activeCaptureCoordinatorConfiguration;
- (struct FBNewCaptureCoordinatorConfiguration *)newCaptureCoordinatorConfiguration;
- (NSObject<FBCaptureCameraController><FBARCameraSLAMControllerProviding><FBCaptureSessionController> *)cameraCaptureCoordinator;
- (FBCaptureCoordinatorBase<FBCaptureCoordinatorFilterManaging><FBCCCaptureModeManaging> *)captureCoordinator;
- (void)unmountCurrentCaptureModeComponentWithCompletion:(void (^)(NSError *))arg1;
- (void)mountCaptureModeComponentWithID:(NSString *)arg1 forState:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)mountCaptureModeComponent:(id <OCMCaptureModeOwning>)arg1 forState:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (id <OCMCaptureModeOwning>)activeCaptureModeComponent;
- (void)stopSessionWithCompletion:(void (^)(void))arg1;
- (void)startSessionWithCompletion:(void (^)(void))arg1;
- (id)graphValueForKey:(NSString *)arg1;
- (id)interfaceForComponentID:(NSString *)arg1;
- (NSSet *)attachedComponentIDs;
- (void)detachComponentsWithIDs:(NSArray *)arg1;
- (void)attachComponents:(NSArray *)arg1;
- (void)attachComponentsWithIDs:(NSArray *)arg1;
@end

