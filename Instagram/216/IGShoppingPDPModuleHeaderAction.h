//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGShoppingDestinationFeedChainingResponse, IGShoppingIGFundedIncentive, IGShoppingMediaCollectionModel, NSString;

@interface IGShoppingPDPModuleHeaderAction : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_mediaCollectionSeeAll_title;
    long long _mediaCollectionSeeAll_collectionType;
    IGShoppingMediaCollectionModel *_mediaCollectionSeeAll_mediaCollection;
    NSString *_seeAllFromMerchant_title;
    NSString *_seeAllFromMerchant_requestSource;
    NSString *_seeAllFromReconsiderationSurface_title;
    NSString *_seeAllFromReconsiderationSurface_navigationBarTitle;
    NSString *_mediaPivotsCollectionSeeAll_title;
    IGShoppingDestinationFeedChainingResponse *_mediaPivotsCollectionSeeAll_mediaPivotsCollection;
    NSString *_mediaPivotsCollectionSeeAll_fetchPath;
    NSString *_seeDetailsForIGFundedIncentive_title;
    IGShoppingIGFundedIncentive *_seeDetailsForIGFundedIncentive_igFundedIncentive;
    NSString *_seeAllFromBuyOnInstagram_title;
}

+ (id)seeDetailsForIGFundedIncentiveWithTitle:(id)arg1 igFundedIncentive:(id)arg2;
+ (id)seeAllFromReconsiderationSurfaceWithTitle:(id)arg1 navigationBarTitle:(id)arg2;
+ (id)seeAllFromMerchantWithTitle:(id)arg1 requestSource:(id)arg2;
+ (id)seeAllFromBuyOnInstagramWithTitle:(id)arg1;
+ (id)none;
+ (id)mediaPivotsCollectionSeeAllWithTitle:(id)arg1 mediaPivotsCollection:(id)arg2 fetchPath:(id)arg3;
+ (id)mediaCollectionSeeAllWithTitle:(id)arg1 collectionType:(long long)arg2 mediaCollection:(id)arg3;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 mediaCollectionSeeAll:(CDUnknownBlockType)arg2 seeAllFromMerchant:(CDUnknownBlockType)arg3 seeAllFromReconsiderationSurface:(CDUnknownBlockType)arg4 mediaPivotsCollectionSeeAll:(CDUnknownBlockType)arg5 seeDetailsForIGFundedIncentive:(CDUnknownBlockType)arg6 seeAllFromBuyOnInstagram:(CDUnknownBlockType)arg7;

@end

