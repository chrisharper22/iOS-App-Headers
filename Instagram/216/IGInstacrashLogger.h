//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;

@interface IGInstacrashLogger : NSObject
{
    NSURLSession *_session;
    NSString *_sessionID;
    CDUnknownBlockType _requestBodyFormatter;
}

- (void).cxx_destruct;
- (id)_extrasDictionaryWithSessionID:(id)arg1;
- (void)logInstacrashEvent:(id)arg1 extras:(id)arg2;
- (id)initWithRequestBodyFormatter:(CDUnknownBlockType)arg1;
- (id)init;

@end

