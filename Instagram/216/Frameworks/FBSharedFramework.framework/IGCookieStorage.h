//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface IGCookieStorage : NSObject
{
    NSMutableDictionary *_storage;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (id)_cookieStorageForDomain:(id)arg1 withPath:(id)arg2;
- (id)_allCookies;
- (void)deleteCookie:(id)arg1;
- (void)setCookie:(id)arg1;
- (id)cookies;
- (id)init;

@end

