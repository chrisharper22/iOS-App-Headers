//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGShoppingPermissionsNetworker : NSObject
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_startAPIRequestWithRequestBuilder:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateCreatorPermissionsForMerchantID:(id)arg1 creatorID:(id)arg2 productTaggingToggleStatus:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)updateCreatorPermissionsForMerchantID:(id)arg1 creatorID:(id)arg2 shopLinkingToggleStatus:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)removeHighlightedProduct:(id)arg1 forApprovedPartner:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)addHighlightedProduct:(id)arg1 forApprovedPartner:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getApprovedPartnersCountWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)updateApprovedPartnersWithAddedUsers:(id)arg1 removedUsers:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;

@end

