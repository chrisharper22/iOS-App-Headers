//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBIHTTPExtensionRequestProgressContext : NSObject
{
    const struct __MCIURLRequest *_request;
    const void *_requestContext;
}

@property(readonly, nonatomic) const void *requestContext; // @synthesize requestContext=_requestContext;
@property(readonly, nonatomic) const struct __MCIURLRequest *request; // @synthesize request=_request;
- (void)dealloc;
- (id)initWithRequest:(const struct __MCIURLRequest *)arg1 requestContext:(const void *)arg2;

@end

