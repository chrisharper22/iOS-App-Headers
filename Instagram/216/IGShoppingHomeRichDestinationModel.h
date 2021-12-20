//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGShoppingContentTileToProductCollectionNavigationMetadata, IGShoppingHomeAccountSeededChannelDestinationModel, IGShoppingHomeAdsMediaDestinationModel, IGShoppingHomeAdsRediscoveryDestinationModel, IGShoppingHomeDestinationModel, IGShoppingHomeIGTVVideoDestinationModel, IGShoppingHomeIgFundedIncentiveDestinationModel, IGShoppingHomeMediaViewerDestinationModel, IGShoppingHomeMerchantDestinationModel, IGShoppingHomeModuleDestinationModel, IGShoppingHomeProductDestinationModel, IGShoppingHomeSearchDestinationModel, IGShoppingHomeStyleDetailsPageDestinationModel, IGShoppingHomeUnseededChannelDestinationModel;

@interface IGShoppingHomeRichDestinationModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGShoppingHomeDestinationModel *_destination;
    IGShoppingHomeMerchantDestinationModel *_merchant;
    IGShoppingHomeSearchDestinationModel *_search;
    IGShoppingHomeProductDestinationModel *_product;
    IGShoppingHomeMediaViewerDestinationModel *_mediaViewer;
    IGShoppingHomeModuleDestinationModel *_module;
    IGShoppingHomeAccountSeededChannelDestinationModel *_accountSeededChannel;
    IGShoppingHomeUnseededChannelDestinationModel *_unseededChannel;
    IGShoppingHomeAdsMediaDestinationModel *_adsMedia;
    IGShoppingContentTileToProductCollectionNavigationMetadata *_productCollection;
    IGShoppingHomeAdsRediscoveryDestinationModel *_adsRediscovery;
    IGShoppingHomeIGTVVideoDestinationModel *_igtvVideo;
    IGShoppingHomeIgFundedIncentiveDestinationModel *_igFundedIncentive;
    IGShoppingHomeStyleDetailsPageDestinationModel *_styleDetailsPage;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (id)unseededChannel:(id)arg1;
+ (id)styleDetailsPage:(id)arg1;
+ (id)search:(id)arg1;
+ (id)productCollection:(id)arg1;
+ (id)product:(id)arg1;
+ (id)module:(id)arg1;
+ (id)merchant:(id)arg1;
+ (id)mediaViewer:(id)arg1;
+ (id)igtvVideo:(id)arg1;
+ (id)igFundedIncentive:(id)arg1;
+ (id)destination:(id)arg1;
+ (id)adsRediscovery:(id)arg1;
+ (id)adsMedia:(id)arg1;
+ (id)accountSeededChannel:(id)arg1;
- (void).cxx_destruct;
- (void)matchDestination:(CDUnknownBlockType)arg1 merchant:(CDUnknownBlockType)arg2 search:(CDUnknownBlockType)arg3 product:(CDUnknownBlockType)arg4 mediaViewer:(CDUnknownBlockType)arg5 module:(CDUnknownBlockType)arg6 accountSeededChannel:(CDUnknownBlockType)arg7 unseededChannel:(CDUnknownBlockType)arg8 adsMedia:(CDUnknownBlockType)arg9 productCollection:(CDUnknownBlockType)arg10 adsRediscovery:(CDUnknownBlockType)arg11 igtvVideo:(CDUnknownBlockType)arg12 igFundedIncentive:(CDUnknownBlockType)arg13 styleDetailsPage:(CDUnknownBlockType)arg14;
- (_Bool)matchBooleanDestination:(CDUnknownBlockType)arg1 merchant:(CDUnknownBlockType)arg2 search:(CDUnknownBlockType)arg3 product:(CDUnknownBlockType)arg4 mediaViewer:(CDUnknownBlockType)arg5 module:(CDUnknownBlockType)arg6 accountSeededChannel:(CDUnknownBlockType)arg7 unseededChannel:(CDUnknownBlockType)arg8 adsMedia:(CDUnknownBlockType)arg9 productCollection:(CDUnknownBlockType)arg10 adsRediscovery:(CDUnknownBlockType)arg11 igtvVideo:(CDUnknownBlockType)arg12 igFundedIncentive:(CDUnknownBlockType)arg13 styleDetailsPage:(CDUnknownBlockType)arg14;
- (id)contentType;
- (id)channelType;
- (id)productId;
- (id)queryText;
- (id)merchantId;
- (id)viewpointActionModelKey;
- (id)submodule;
- (id)analyticsModule;
- (id)igtvVideo;
- (id)adsMedia;
- (id)productCollection;
- (id)mediaViewer;
- (id)product;
- (id)pinnedContent;
- (id)merchant;
- (id)destination;
- (_Bool)isMerchantDestination;
- (_Bool)isFeedDestination;
- (_Bool)isSearchSubDestination;
- (_Bool)isSubDestination;
- (_Bool)isMainShopHomeFeed;
- (_Bool)isMainShopHomeFeedOrSubDestination;

@end
