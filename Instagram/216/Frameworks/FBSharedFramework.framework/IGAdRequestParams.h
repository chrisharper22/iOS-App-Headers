//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, NSString;

@interface IGAdRequestParams : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSArray *_iGTVAdRequestParams_organicItemIds;
    NSString *_iGTVAdRequestParams_containerModule;
    NSString *_iGTVAdRequestParams_feedSessionId;
    NSString *_storiesAdRequestParam_traySessionId;
    NSString *_storiesAdRequestParam_viewerSessionId;
    NSArray *_storiesAdRequestParam_trayIds;
    _Bool _storiesAdRequestParam_isAdsSensitive;
    NSArray *_exploreAdRequestParam_organicItemIds;
    NSString *_exploreAdRequestParam_chainingSessionId;
    NSArray *_sundialAdRequestParam_allItems;
    long long _sundialAdRequestParam_newOrganicItemsCount;
    NSString *_sundialAdRequestParam_seedItemId;
    NSString *_sundialAdRequestParam_containerModule;
    NSString *_intentAwareFeedAdRequestParam_seedAdId;
    NSString *_intentAwareFeedAdRequestParam_seedAdToken;
    long long _intentAwareFeedAdRequestParam_seedAdPosition;
    NSString *_intentAwareFeedAdRequestParam_triggerType;
    NSString *_intentAwareFeedAdRequestParam_containerModule;
}

+ (id)sundialAdRequestParamWithAllItems:(id)arg1 newOrganicItemsCount:(long long)arg2 seedItemId:(id)arg3 containerModule:(id)arg4;
+ (id)storiesAdRequestParamWithTraySessionId:(id)arg1 viewerSessionId:(id)arg2 trayIds:(id)arg3 isAdsSensitive:(_Bool)arg4;
+ (id)intentAwareFeedAdRequestParamWithSeedAdId:(id)arg1 seedAdToken:(id)arg2 seedAdPosition:(long long)arg3 triggerType:(id)arg4 containerModule:(id)arg5;
+ (id)iGTVAdRequestParamsWithOrganicItemIds:(id)arg1 containerModule:(id)arg2 feedSessionId:(id)arg3;
+ (id)exploreAdRequestParamWithOrganicItemIds:(id)arg1 chainingSessionId:(id)arg2;
- (void).cxx_destruct;
- (void)matchIGTVAdRequestParams:(CDUnknownBlockType)arg1 storiesAdRequestParam:(CDUnknownBlockType)arg2 exploreAdRequestParam:(CDUnknownBlockType)arg3 sundialAdRequestParam:(CDUnknownBlockType)arg4 intentAwareFeedAdRequestParam:(CDUnknownBlockType)arg5;

@end

