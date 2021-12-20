//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGShoppingHomeMediaUIConfig, IGShoppingNavigationAnalyticsContext, NSSet;

@interface IGFeedItemShoppingConfiguration : NSObject
{
    _Bool _shouldAutoRevealProductTags;
    _Bool _showCarouselIndexOfFeaturedProduct;
    _Bool _fromShoppingSource;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingNavigationAnalyticsContext *_sourceNavigationInfo;
    IGShoppingHomeMediaUIConfig *_mediaUIConfig;
    NSSet *_hiddenMediaPKs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *hiddenMediaPKs; // @synthesize hiddenMediaPKs=_hiddenMediaPKs;
@property(readonly, nonatomic) IGShoppingHomeMediaUIConfig *mediaUIConfig; // @synthesize mediaUIConfig=_mediaUIConfig;
@property(readonly, nonatomic) IGShoppingNavigationAnalyticsContext *sourceNavigationInfo; // @synthesize sourceNavigationInfo=_sourceNavigationInfo;
@property(readonly, nonatomic) _Bool fromShoppingSource; // @synthesize fromShoppingSource=_fromShoppingSource;
@property(readonly, nonatomic) _Bool showCarouselIndexOfFeaturedProduct; // @synthesize showCarouselIndexOfFeaturedProduct=_showCarouselIndexOfFeaturedProduct;
@property(readonly, nonatomic) _Bool shouldAutoRevealProductTags; // @synthesize shouldAutoRevealProductTags=_shouldAutoRevealProductTags;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (id)initWithShoppingSessionTracker:(id)arg1 shouldAutoRevealProductTags:(_Bool)arg2 showCarouselIndexOfFeaturedProduct:(_Bool)arg3 fromShoppingSource:(_Bool)arg4 sourceNavigationInfo:(id)arg5 mediaUIConfig:(id)arg6 hiddenMediaPKs:(id)arg7;

@end

