//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaUploadLogging-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol FBMediaUploadEventLogging;

@interface FBMediaUploadLogger : NSObject <FBMediaUploadLogging>
{
    NSString *_moduleName;
    NSMutableDictionary *_extras;
    id <FBMediaUploadEventLogging> _eventLogger;
    CDUnknownBlockType _applicationStateProvider;
    NSDate *_transferRequestStartTime;
}

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 extras:(id)arg2;
- (void)_logEvent:(id)arg1 elapsedTime:(double)arg2 error:(id)arg3;
- (void)_logEvent:(id)arg1 elapsedTime:(double)arg2;
- (void)_logEvent:(id)arg1;
- (void)logUploadTransferCancel;
- (void)logUploadTransferFailure:(id)arg1;
- (void)logUploadTransferSuccess;
- (void)logUploadTransferStartIfFirstSegment;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)initWithModuleName:(id)arg1 extras:(id)arg2 eventLogger:(id)arg3 applicationStateProvider:(CDUnknownBlockType)arg4;
- (id)initWithModuleName:(id)arg1 extras:(id)arg2 eventLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

