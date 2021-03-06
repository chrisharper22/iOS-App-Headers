//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IABAutofillDataManagerConforming-Protocol.h"

@class IGUserSession;
@protocol IGIABAutofillDataManagerDelegate;

@interface IGIABAutofillDataManager : NSObject <IABAutofillDataManagerConforming>
{
    IGUserSession *_userSession;
    id <IGIABAutofillDataManagerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_performGraphQLMutationWithQueryID:(id)arg1 dataKey:(id)arg2 queryParams:(id)arg3 safeSuccessHandler:(CDUnknownBlockType)arg4;
- (void)_updateAutofillUserOptOutResultWithOperation:(unsigned long long)arg1 autofillType:(unsigned long long)arg2;
- (void)updateContactAutofillFbpayDisclosureShown;
- (void)updatePaymentAutofillUserOptOutResultWithOperation:(unsigned long long)arg1;
- (void)updateUserOptOutResultWithOperation:(unsigned long long)arg1;
- (void)deleteAutofillDataFromServer;
- (void)saveAutofillDataToServer:(id)arg1;
- (void)fetchAutofillDataFromServer;
- (void)fetchUserOptOutResult;
- (void)fetchDomainOptOutResult:(id)arg1;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

@end

