//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSaveLogger-Protocol.h"

@class IGUserSession, NSDictionary, NSString;

@interface IGSaveMediaLogger : NSObject <IGSaveLogger>
{
    IGUserSession *_userSession;
    NSDictionary *_defaultExtras;
    NSString *_module;
}

- (void).cxx_destruct;
- (id)_eventWithSuffix:(id)arg1 extras:(id)arg2;
- (id)_eventWithName:(id)arg1 extras:(id)arg2;
- (void)logRemoveFromCollectionWithCollectionId:(id)arg1 extras:(id)arg2;
- (void)logAddToCollectionWithCollectionId:(id)arg1 extras:(id)arg2;
- (void)logUnsaveWithExtras:(id)arg1;
- (void)logSaveWithExtras:(id)arg1;
- (void)logUnsaveFailed;
- (void)logSaveFailed;
- (void)logSaveSuccess;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

