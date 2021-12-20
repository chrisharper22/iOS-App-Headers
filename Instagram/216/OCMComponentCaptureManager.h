//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OCMComponentCaptureManagerProtocol-Protocol.h"

@class NSString;
@protocol FBCameraCaptureManaging, OCMComponentManagingContext;

@interface OCMComponentCaptureManager : NSObject <OCMComponentCaptureManagerProtocol>
{
    id <OCMComponentManagingContext> _context;
    id <FBCameraCaptureManaging> _fbCaptureManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBCameraCaptureManaging> captureManager;
- (void)willDetachWithContext:(id)arg1;
- (void)didAttachWithContext:(id)arg1;
- (long long)supportedControllerStates;
- (id)dependentComponentIDs;
- (id)componentID;
- (id)_fetchCaptureManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

