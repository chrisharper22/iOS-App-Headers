//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol FBSDKGraphRequest;

@interface FBSDKGraphRequestMetadata : NSObject
{
    id <FBSDKGraphRequest> _request;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_batchParameters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *batchParameters; // @synthesize batchParameters=_batchParameters;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <FBSDKGraphRequest> request; // @synthesize request=_request;
- (id)description;
- (void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;

@end
