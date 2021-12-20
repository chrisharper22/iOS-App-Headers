//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCoauthorUserTagGroup, IGFBUserTagGroup, IGLocation, IGMedia, IGProductItemTagGroup, IGUsertagGroup, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface IGEditedPost : NSObject
{
    _Bool _isPaidPartnership;
    IGLocation *_location;
    NSString *_caption;
    IGUsertagGroup *_usertags;
    NSMutableDictionary *_postUsertags;
    IGFBUserTagGroup *_fbUserTags;
    NSMutableDictionary *_postFBUserTags;
    IGProductItemTagGroup *_productItemTags;
    NSMutableDictionary *_postProductItemTags;
    NSArray *_brandedContentTags;
    NSArray *_sponsorPartnersWithBoostPermission;
    IGMedia *_media;
    NSMutableDictionary *_postAccessibilityCaptions;
    NSArray *_productMentions;
    NSMutableDictionary *_postProductCollectionTags;
    NSArray *_featuredProducts;
    IGCoauthorUserTagGroup *_coauthorUserTags;
    NSMutableArray *_deletedSubitemPosts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *deletedSubitemPosts; // @synthesize deletedSubitemPosts=_deletedSubitemPosts;
@property(readonly, nonatomic) IGCoauthorUserTagGroup *coauthorUserTags; // @synthesize coauthorUserTags=_coauthorUserTags;
@property(readonly, nonatomic) NSArray *featuredProducts; // @synthesize featuredProducts=_featuredProducts;
@property(retain, nonatomic) NSMutableDictionary *postProductCollectionTags; // @synthesize postProductCollectionTags=_postProductCollectionTags;
@property(retain, nonatomic) NSArray *productMentions; // @synthesize productMentions=_productMentions;
@property(retain, nonatomic) NSMutableDictionary *postAccessibilityCaptions; // @synthesize postAccessibilityCaptions=_postAccessibilityCaptions;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) NSArray *sponsorPartnersWithBoostPermission; // @synthesize sponsorPartnersWithBoostPermission=_sponsorPartnersWithBoostPermission;
@property(nonatomic) _Bool isPaidPartnership; // @synthesize isPaidPartnership=_isPaidPartnership;
@property(retain, nonatomic) NSArray *brandedContentTags; // @synthesize brandedContentTags=_brandedContentTags;
@property(retain, nonatomic) NSMutableDictionary *postProductItemTags; // @synthesize postProductItemTags=_postProductItemTags;
@property(retain, nonatomic) IGProductItemTagGroup *productItemTags; // @synthesize productItemTags=_productItemTags;
@property(retain, nonatomic) NSMutableDictionary *postFBUserTags; // @synthesize postFBUserTags=_postFBUserTags;
@property(retain, nonatomic) IGFBUserTagGroup *fbUserTags; // @synthesize fbUserTags=_fbUserTags;
@property(retain, nonatomic) NSMutableDictionary *postUsertags; // @synthesize postUsertags=_postUsertags;
@property(retain, nonatomic) IGUsertagGroup *usertags; // @synthesize usertags=_usertags;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
- (id)taggedProductItemMerchants;
- (id)firstProductCollectionTag;
- (void)removeProductItemTag:(id)arg1;
- (void)_updateSponsorPartnerTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 localIsPaidPartnership:(_Bool)arg3 feedTags:(id)arg4 localTags:(id)arg5;
- (void)_updateProductCollectionTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTag:(id)arg3 localTag:(id)arg4;
- (void)_updateCarouselProductCollectionTagsParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTagsDict:(id)arg3 localTagsDict:(id)arg4;
- (void)_updateCarouselProductTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTagsDict:(id)arg3 localTagsDict:(id)arg4;
- (void)_updateCarouselTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTagsDict:(id)arg3 localTagsDict:(id)arg4;
- (void)_updateProductTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTags:(id)arg3 localTags:(id)arg4;
- (void)_updateTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTags:(id)arg3 localTags:(id)arg4;
- (void)addParametersToRequestBuilder:(id)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) _Bool hasUserTags;
@property(readonly, nonatomic) _Bool hasProductTags;
- (id)pk;
- (_Bool)hasChanged;
- (_Bool)_hasDeletedCarouselItems;
- (_Bool)_hasChangedAccessibilityCaption;
- (_Bool)_hasChangedCarouselProductItemTags;
- (_Bool)_hasChangedCarouselUserTags;
- (_Bool)_hasChangedCarouselFBUserTags;
- (_Bool)_hasChangedPaidBCPermission;
- (_Bool)_hasChangedSponsorPartnerTags;
- (_Bool)_hasChangedCarouselProductCollectionTags;
- (_Bool)_hasChangedProductCollectionTag;
- (_Bool)_hasChangedProductItemTags;
- (_Bool)_hasChangedUsertags;
- (_Bool)_hasChangedFBUserTags;
- (_Bool)_hasChangedBrandedContentSponsorWithBoostPermission:(id)arg1 withEditedBoostPermission:(id)arg2;
- (_Bool)_hasChangedBrandedContentTags:(id)arg1 withEditedTags:(id)arg2;
- (_Bool)_hasChangedFeedItemTags:(id)arg1 withEditedTags:(id)arg2;
- (_Bool)_hasChangedLocation;
- (_Bool)_hasChangedCaption;
- (id)initWithMedia:(id)arg1;

@end
