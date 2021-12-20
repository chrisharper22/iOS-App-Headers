//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSURLConnection, NSURLResponse, OAMutableURLRequest;

@interface OADataFetcher : NSObject
{
    OAMutableURLRequest *request;
    NSURLResponse *response;
    NSURLConnection *connection;
    NSMutableData *responseData;
    id delegate;
    SEL didFinishSelector;
    SEL didFailSelector;
}

- (void)fetchDataWithRequest:(id)arg1 didFinishBlock:(CDUnknownBlockType)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)fetchDataWithRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 didFailSelector:(SEL)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (id)init;

@end
