//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKGraphRequestPiggybackManaging-Protocol.h>

@class NSDate;

@interface FBSDKGraphRequestPiggybackManager : NSObject <FBSDKGraphRequestPiggybackManaging>
{
    NSDate *_lastRefreshTry;
}

+ (void)setLastRefreshTry:(id)arg1;
+ (id)lastRefreshTry;
+ (int)tokenRefreshRetryInSeconds;
+ (int)tokenRefreshThresholdInSeconds;
+ (_Bool)isRequestSafeForPiggyback:(id)arg1;
+ (void)addServerConfigurationPiggyback:(id)arg1;
+ (void)addRefreshPiggybackIfStale:(id)arg1;
+ (void)addRefreshPiggyback:(id)arg1 permissionHandler:(CDUnknownBlockType)arg2;
+ (void)addPiggybackRequests:(id)arg1;
+ (void)configureWithTokenWallet:(Class)arg1 settings:(id)arg2 serverConfigurationProvider:(id)arg3 graphRequestFactory:(id)arg4;
+ (void)setGraphRequestFactory:(id)arg1;
+ (id)graphRequestFactory;
+ (void)setServerConfigurationProvider:(id)arg1;
+ (id)serverConfigurationProvider;
+ (void)setSettings:(id)arg1;
+ (id)settings;
+ (void)setTokenWallet:(Class)arg1;
+ (Class)tokenWallet;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastRefreshTry; // @synthesize lastRefreshTry=_lastRefreshTry;

@end

