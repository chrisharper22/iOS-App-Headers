//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGIABAutofillDataManagerDelegate-Protocol.h"

@class IGIABAutofillDataManager, NSString;

@interface IGIABAutofillFetchDataHelper : NSObject <IGIABAutofillDataManagerDelegate>
{
    CDUnknownBlockType _callback;
    IGIABAutofillDataManager *_fbIABAutofillDataManager;
}

- (void).cxx_destruct;
- (void)autofillDataManager:(id)arg1 didDeleteAutofillDataWithSuccess:(_Bool)arg2;
- (void)autofillDataManager:(id)arg1 didMutateAutofillData:(id)arg2 success:(_Bool)arg3;
- (void)autofillDataManager:(id)arg1 didFetchAutofillData:(id)arg2;
- (void)autofillDataManager:(id)arg1 didFetchUserOptOutResult:(id)arg2;
- (void)autofillDataManager:(id)arg1 didFetchDomainOptOutResult:(id)arg2 forDomain:(id)arg3;
- (void)fetchData:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

