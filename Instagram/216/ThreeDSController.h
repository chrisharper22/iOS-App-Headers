//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayWebBrowserControllerDelegate-Protocol.h"

@class NSString;
@protocol FBPayWebBrowserControlling;

@interface ThreeDSController : NSObject <FBPayWebBrowserControllerDelegate>
{
    id <FBPayWebBrowserControlling> _webController;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)browserControllerDidStartLoadURL:(id)arg1 url:(id)arg2;
- (void)browserControllerDidCancel:(id)arg1;
- (void)browserControllerDidChange:(id)arg1 url:(id)arg2;
- (void)browserControllerDidFinish:(id)arg1 url:(id)arg2;
- (void)presentWebViewControllerFrom:(id)arg1;
- (id)initWithThreeDSParams:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

