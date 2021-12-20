//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserStore, NSArray;
@protocol IGAPIClient;

@interface IGBrandedContentAllowlistedPartnersRequestManager : NSObject
{
    id <IGAPIClient> _networker;
    IGUserStore *_userStore;
    _Bool _requireApprovalSetting;
    _Bool _manualApproveAdsSetting;
    NSArray *_allowlistedAccounts;
    NSArray *_pendingRequests;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool manualApproveAdsSetting; // @synthesize manualApproveAdsSetting=_manualApproveAdsSetting;
@property(readonly, nonatomic) _Bool requireApprovalSetting; // @synthesize requireApprovalSetting=_requireApprovalSetting;
@property(readonly, nonatomic) NSArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSArray *allowlistedAccounts; // @synthesize allowlistedAccounts=_allowlistedAccounts;
- (void)changeRequestApprovalStatus:(id)arg1 newStatus:(long long)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)fetchPendingRequestsWithPaginationCursor:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)updatePartnersWithAllowlistedAccountsToAdd:(id)arg1 accountsToRemove:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)fetchAllowlistedAccountsWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)updateRequireApprovalSetting:(_Bool)arg1 manualApproveAdsSetting:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRequireApprovalSettingWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithNetworker:(id)arg1 userStore:(id)arg2;

@end

