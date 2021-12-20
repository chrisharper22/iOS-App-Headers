//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/MBIMediaUploadListening-Protocol.h>

@class LSThreadSafeSet, NSString, NSURL;

@interface __MBIAnalyticLogUploadListener : NSObject <MBIMediaUploadListening>
{
    CDUnknownBlockType _completionHandler;
    NSURL *_logFileURL;
    LSThreadSafeSet *_taskTracker;
}

- (void).cxx_destruct;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(struct MCDMediaUploadJobProgressInformation)arg2;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(int)arg2 isResumable:(_Bool)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
- (void)markUploadAsStopped;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 logFileURL:(id)arg2 taskTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
