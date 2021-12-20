//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBFamilyDeviceIDReportInternal, NSString;
@protocol OS_dispatch_queue;

@interface FBFamilyDeviceID : NSObject
{
    NSString *_familyDeviceID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    FBFamilyDeviceIDReportInternal *_reporter;
    NSString *_appDeviceID;
    _Bool _hasAccessedSharedStorage;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasAccessedSharedStorage; // @synthesize hasAccessedSharedStorage=_hasAccessedSharedStorage;
- (_Bool)isMainThread;
- (id)appGroupUserDefaults;
- (id)reporter;
- (id)standardUserDefaults;
- (void)_doRegenByServerResponseWithLogBlock:(CDUnknownBlockType)arg1;
- (_Bool)_hasRegenFieldInResponse:(id)arg1;
- (void)regenerateFDIDUponServerResponse:(id)arg1 analyticsLogBlock:(CDUnknownBlockType)arg2;
- (void)logFamilyDeviceIDStatusWithBlock:(CDUnknownBlockType)arg1;
- (void)getFamilyDeviceIDWithCompletionBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (id)cachedFamilyDeviceID;
- (id)familyDeviceID;
- (void)setupWithAppDeviceIDWithCompletionBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2 appDeviceID:(id)arg3;
- (void)launchSetupWithAppDeviceID:(id)arg1;
- (void)setNeedsSync;
- (_Bool)_isRestoredOntoDifferentDevice:(id)arg1 realAppDeviceID:(id)arg2;
- (void)_doAccessFamilyDeviceID:(id)arg1;
- (id)setupWithAppDeviceID:(id)arg1;
- (void)testDoRegenFDIDUponServerResponse:(id)arg1 analyticsLogBlock:(CDUnknownBlockType)arg2;
- (id)internalQueue;
- (id)initPrivate;

@end
