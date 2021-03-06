//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;

@interface IGShoppingFeaturedProductsLogger : NSObject
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    NSString *_shoppingSessionId;
}

- (void).cxx_destruct;
- (void)logPermissionStatusUpdateFailureWithStatus:(long long)arg1 merchantId:(id)arg2 productId:(id)arg3 permissionId:(id)arg4 media:(id)arg5 carouselInfo:(id)arg6 sponsoredInfoProvider:(id)arg7;
- (void)logPermissionStatusUpdateSuccessWithStatus:(long long)arg1 merchantId:(id)arg2 productId:(id)arg3 permissionId:(id)arg4 media:(id)arg5 carouselInfo:(id)arg6 sponsoredInfoProvider:(id)arg7;
- (id)initWithUserSession:(id)arg1 navigationInfo:(id)arg2 shoppingSessionId:(id)arg3;

@end

