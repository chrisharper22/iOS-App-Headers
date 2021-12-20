//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OCMComponentVideoCaptureProtocol-Protocol.h"

@class NSString;
@protocol OCMControllerProtocol;

@interface OCMComponentDefaultVideoCapture : NSObject <OCMComponentVideoCaptureProtocol>
{
    id <OCMControllerProtocol> _context;
}

- (void).cxx_destruct;
- (void)stopRecordingWithCompletion:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)cancelRecordingIfAny;
- (void)startRecordingWithCompletion:(CDUnknownBlockType)arg1;
- (void)willDetachWithContext:(id)arg1;
- (void)didAttachWithContext:(id)arg1;
- (long long)supportedControllerStates;
- (id)dependentComponentIDs;
- (id)componentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

