//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGOneTapLogger : NSObject
{
}

+ (id)_stringForSurface:(long long)arg1;
+ (void)logFetchNonceRegularlyFailureWithUserSession:(id)arg1 autoRetryCountLeft:(long long)arg2;
+ (void)logSaveOneTapLoginFailureWithError:(id)arg1 surface:(long long)arg2 analyticsLogger:(id)arg3;
+ (void)logSaveOneTapLoginSuccessOnSurface:(long long)arg1 analyticsLogger:(id)arg2;

@end

