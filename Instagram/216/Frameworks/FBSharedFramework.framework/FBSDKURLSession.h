//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURLSession;
@protocol NSURLSessionDataDelegate;

@interface FBSDKURLSession : NSObject
{
    NSURLSession *_session;
    id <NSURLSessionDataDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSURLSession *session; // @synthesize session=_session;
- (_Bool)valid;
- (void)invalidateAndCancel;
- (void)updateSessionWithBlock:(CDUnknownBlockType)arg1;
- (void)executeURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

@end

