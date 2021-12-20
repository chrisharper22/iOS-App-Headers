//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTTPMessage : NSObject
{
    struct __CFHTTPMessage *message;
}

- (void)setBody:(id)arg1;
- (id)body;
- (id)messageData;
- (void)setHeaderField:(id)arg1 value:(id)arg2;
- (id)headerField:(id)arg1;
- (id)allHeaderFields;
- (long long)statusCode;
- (id)url;
- (id)method;
- (id)version;
- (_Bool)isHeaderComplete;
- (_Bool)appendData:(id)arg1;
- (void)dealloc;
- (id)initResponseWithStatusCode:(long long)arg1 description:(id)arg2 version:(id)arg3;
- (id)initRequestWithMethod:(id)arg1 URL:(id)arg2 version:(id)arg3;
- (id)initEmptyRequest;
- (struct _NSRange)range;

@end

