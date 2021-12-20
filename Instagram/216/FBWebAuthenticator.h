//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBWebAuthenticatorRequest, NSString, NSURL, UIViewController;
@protocol FBWebAuthenticationRequesting;

@interface FBWebAuthenticator : NSObject
{
    NSString *_URLScheme;
    NSURL *_URL;
    unsigned long long _status;
    CDUnknownBlockType _completion;
    FBWebAuthenticatorRequest *_request;
    id <FBWebAuthenticationRequesting> _requestor;
    UIViewController *_presenter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <FBWebAuthenticationRequesting> requestor; // @synthesize requestor=_requestor;
@property(readonly, nonatomic) FBWebAuthenticatorRequest *request; // @synthesize request=_request;
- (void)disable;
- (void)completeAuthenticationWithRepsonse:(id)arg1;
- (void)didReceiveURL:(id)arg1 requestCanceled:(_Bool)arg2 error:(id)arg3;
- (void)cancel;
- (void)start;
- (void)setURLScheme:(id)arg1;
- (id)URLScheme;
- (id)requestURL;
- (void)setStatus:(unsigned long long)arg1;
@property(readonly) unsigned long long status;
- (void)setURL:(id)arg1;
- (id)URL;

@end

