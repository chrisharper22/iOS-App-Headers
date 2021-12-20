//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol FBWebView;

@protocol FBBusinessExtensionCallbackHandling <NSObject>
- (void)invokeJavaScriptCallbackWithError:(unsigned long long)arg1 errorMessage:(NSString *)arg2 messageName:(NSString *)arg3 messageParams:(NSDictionary *)arg4 startWebsiteURL:(NSURL *)arg5 webView:(id <FBWebView>)arg6;
- (void)invokeJavaScriptCallbackWithResult:(_Bool)arg1 returnParams:(NSDictionary *)arg2 messageName:(NSString *)arg3 messageParams:(NSDictionary *)arg4 startWebsiteURL:(NSURL *)arg5 webView:(id <FBWebView>)arg6;
@end
