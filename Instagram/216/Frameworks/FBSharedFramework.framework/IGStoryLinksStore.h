//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserDefaults;

@interface IGStoryLinksStore : NSObject
{
    IGUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxNumMultiProductTags;
@property(nonatomic) _Bool isMultiProductTaggingEnabled;
@property(nonatomic) _Bool hasIncentiveCollectionLinks;
@property(nonatomic) _Bool isProductCollectionLinkAllowed;
@property(nonatomic) _Bool isProductDetailPageLinkAllowed;
@property(nonatomic) _Bool isProfileShopLinkAllowed;
@property(nonatomic) _Bool isAREffectLinkAllowed;
@property(nonatomic) _Bool isIGTVLinkAllowed;
- (id)initWithUserDefaults:(id)arg1;

@end
