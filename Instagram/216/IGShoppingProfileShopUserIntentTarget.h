//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class FBViewpointLevelOverride, IGShoppingProfileShopFeedConfiguration, IGShoppingProfileShopLoggingProviderFields, IGShoppingStorefrontAnalyticsContext, NSString;
@protocol IGShoppingProfileShopViewControllerDelegate;

@interface IGShoppingProfileShopUserIntentTarget : NSObject <FBIntentTarget>
{
    NSString *_merchantId;
    long long _shoppableFeedType;
    NSString *_linkId;
    id <IGShoppingProfileShopViewControllerDelegate> _profileShopDelegate;
    IGShoppingProfileShopLoggingProviderFields *_loggingFields;
    IGShoppingProfileShopFeedConfiguration *_feedConfiguration;
    FBViewpointLevelOverride *_viewpointLevelOverride;
    NSString *_attributedUsername;
    IGShoppingStorefrontAnalyticsContext *_storefrontInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingStorefrontAnalyticsContext *storefrontInfo; // @synthesize storefrontInfo=_storefrontInfo;
@property(readonly, nonatomic) NSString *attributedUsername; // @synthesize attributedUsername=_attributedUsername;
@property(readonly, nonatomic) FBViewpointLevelOverride *viewpointLevelOverride; // @synthesize viewpointLevelOverride=_viewpointLevelOverride;
@property(readonly, nonatomic) IGShoppingProfileShopFeedConfiguration *feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(readonly, nonatomic) IGShoppingProfileShopLoggingProviderFields *loggingFields; // @synthesize loggingFields=_loggingFields;
@property(readonly, nonatomic) id <IGShoppingProfileShopViewControllerDelegate> profileShopDelegate; // @synthesize profileShopDelegate=_profileShopDelegate;
@property(readonly, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
@property(readonly, nonatomic) long long shoppableFeedType; // @synthesize shoppableFeedType=_shoppableFeedType;
@property(readonly, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
- (id)initWithMerchantId:(id)arg1 shoppableFeedType:(long long)arg2 linkId:(id)arg3 profileShopDelegate:(id)arg4 loggingFields:(id)arg5 feedConfiguration:(id)arg6 viewpointLevelOverride:(id)arg7 attributedUsername:(id)arg8 storefrontInfo:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

