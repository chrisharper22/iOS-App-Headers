//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _FBCaptureDeviceCacheRequestAccess : NSObject
{
    NSMutableArray *_handlers;
    struct mutex _mutex;
    Class _captureDeviceClass;
    long long _mediaType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fb_grantedHandler:(_Bool)arg1;
- (void)requestAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCaptureDeviceClass:(Class)arg1 mediaType:(long long)arg2;

@end
