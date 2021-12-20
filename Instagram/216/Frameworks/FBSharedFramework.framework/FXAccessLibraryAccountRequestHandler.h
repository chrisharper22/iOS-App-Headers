//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FXAccessLibraryRequestHandlerProtocol-Protocol.h>

@class FXAccessLibraryLogData, NSArray, NSString;
@protocol FXAccessLibraryLogger;

@interface FXAccessLibraryAccountRequestHandler : NSObject <FXAccessLibraryRequestHandlerProtocol>
{
    CDUnknownBlockType _itemBuilder;
    NSArray *_accountQueries;
    _Bool _shouldFetchFromSharedKeychain;
    _Bool _shouldFetchFromFBAccessOnlyKeychain;
    id <FXAccessLibraryLogger> _logger;
    FXAccessLibraryLogData *_logData;
}

- (void).cxx_destruct;
- (void)_logEventWithType:(long long)arg1 query:(id)arg2 isSuccess:(_Bool)arg3 errors:(id)arg4;
- (void)logRemoveEventWithQuery:(id)arg1 isSuccess:(_Bool)arg2 errors:(id)arg3;
- (void)logSaveEventWithQuery:(id)arg1 isSuccess:(_Bool)arg2 errors:(id)arg3;
- (void)logFetchEventWithQuery:(id)arg1 isSuccess:(_Bool)arg2 errors:(id)arg3;
- (void)logQPLCompleteEventWithType:(long long)arg1 errors:(id)arg2;
- (id)updatedItemDictWithQuery:(id)arg1 keychainItem:(id)arg2 errors:(id)arg3;
- (id)actualizeItemsWithQuery:(id)arg1 keychainItems:(id)arg2;
- (id)sharedKeychainGroup;
- (id)FBAccessOnlyKeychainGroup;
- (_Bool)shouldFetchFromFBAccessOnlyKeychain;
- (_Bool)shouldFetchFromSharedKeychain;
- (id)queries;
- (id)initWithAccountQueries:(id)arg1 logger:(id)arg2 logData:(id)arg3 itemBuilder:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
