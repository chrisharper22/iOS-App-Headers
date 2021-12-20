//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGHTTPResponse, IGURLRequest, NSArray, NSError, NSNumber;

@interface IGBloksDataFetcherResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSNumber *_pendingResult_preloadID;
    NSArray *_pendingResult_successCallbacks;
    NSArray *_pendingResult_errorCallbacks;
    NSNumber *_successResult_preloadID;
    IGURLRequest *_successResult_request;
    IGHTTPResponse *_successResult_response;
    id _successResult_responseObject;
    NSNumber *_errorResult_preloadID;
    NSError *_errorResult_error;
}

+ (id)successResultWithPreloadID:(id)arg1 request:(id)arg2 response:(id)arg3 responseObject:(id)arg4;
+ (id)pendingResultWithPreloadID:(id)arg1 successCallbacks:(id)arg2 errorCallbacks:(id)arg3;
+ (id)errorResultWithPreloadID:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (void)matchPendingResult:(CDUnknownBlockType)arg1 successResult:(CDUnknownBlockType)arg2 errorResult:(CDUnknownBlockType)arg3;

@end

