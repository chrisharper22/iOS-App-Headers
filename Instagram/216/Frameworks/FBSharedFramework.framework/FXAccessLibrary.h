//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FXAccessControlProviding, FXAccessLibraryConfig, FXAccessLibraryLogger, OS_dispatch_queue;

@interface FXAccessLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_nativeAccountsQueue;
    id <FXAccessLibraryConfig> _config;
    id <FXAccessControlProviding> _accessControlProvider;
    id <FXAccessLibraryLogger> _logger;
}

+ (id)sharedInstance;
+ (id)sharedQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FXAccessControlProviding> accessControlProvider; // @synthesize accessControlProvider=_accessControlProvider;
@property(readonly, nonatomic) id <FXAccessLibraryLogger> logger; // @synthesize logger=_logger;
- (void)_saveItemsForRequest:(id)arg1 errors:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeItemsWithRequestHandler:(id)arg1 errors:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_executeCompletionOnFetchedAccountItems:(id)arg1 accountItemsFromLegacy:(id)arg2 logData:(id)arg3 errors:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchKeychainItemsWithRequestHandler:(id)arg1 errors:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDeviceItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDeviceItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveDeviceItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAccounts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccounts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAccessControlProviderWithOptions:(id)arg1;
- (id)init;

@end
