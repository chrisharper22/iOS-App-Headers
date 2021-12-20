//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSMutableSet;
@protocol IGShoppingPDPHeroCarouselNetworkerDelegate;

@interface IGShoppingPDPHeroCarouselNetworker : NSObject
{
    IGUserSession *_userSession;
    NSMutableSet *_inFlightProductItemPks;
    id <IGShoppingPDPHeroCarouselNetworkerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselNetworkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleRequestFailureForProductItem:(id)arg1 withError:(id)arg2;
- (void)_handleRequestSuccessWithHeroCarouselDataModel:(id)arg1 forProductItem:(id)arg2 loadTime:(double)arg3;
- (_Bool)fetchHeroCarouselForProductItem:(id)arg1 pinnedMedia:(id)arg2 showCatalogImagesLast:(_Bool)arg3 featuredProductPermissionId:(id)arg4;
- (id)initWithUserSession:(id)arg1;

@end
