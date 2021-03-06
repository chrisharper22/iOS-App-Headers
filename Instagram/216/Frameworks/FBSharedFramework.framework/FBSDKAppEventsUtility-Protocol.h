//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FBSDKAccessToken, NSDate, NSString;

@protocol FBSDKAppEventsUtility
@property(readonly, nonatomic) double unixTimeNow;
- (NSString *)flushReasonToString:(unsigned long long)arg1;
- (NSString *)tokenStringToUseFor:(FBSDKAccessToken *)arg1 loggingOverrideAppID:(NSString *)arg2;
- (_Bool)validateIdentifier:(NSString *)arg1;
- (double)convertToUnixTime:(NSDate *)arg1;
- (void)ensureOnMainThread:(NSString *)arg1 className:(NSString *)arg2;
@end

