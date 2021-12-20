//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingFeaturedProductsCarouselSelectionViewControllerDelegate-Protocol.h"
#import "IGTaggingSearchViewControllerDelegate-Protocol.h"

@class IGMedia, IGPostItem, IGUserSession, NSArray, NSNumber, NSString, UIViewController;
@protocol IGFeedItemFeaturedProductsRequestManagerDelegate, IGSponsoredInfoProviding;

@interface IGFeedItemFeaturedProductsRequestManager : NSObject <IGTaggingSearchViewControllerDelegate, IGShoppingFeaturedProductsCarouselSelectionViewControllerDelegate>
{
    IGUserSession *_userSession;
    UIViewController *_presentingViewController;
    IGMedia *_media;
    NSString *_sourceName;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
    NSArray *_suggestedItemIds;
    IGPostItem *_selectedPostItem;
    NSNumber *_selectedPostItemCarouselIndex;
    id <IGFeedItemFeaturedProductsRequestManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedItemFeaturedProductsRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleSuccessWithResponse:(id)arg1 forProductId:(id)arg2;
- (void)shoppingFeaturedProductsCarouselSelectionViewController:(id)arg1 didSelectPostItem:(id)arg2 atIndex:(long long)arg3;
- (void)taggingSearchViewControllerDidCancel:(id)arg1;
- (void)taggingSearchViewController:(id)arg1 didSelectFBUser:(id)arg2 IGUserResultShown:(id)arg3 searchingString:(id)arg4;
- (void)taggingSearchViewController:(id)arg1 didSelectProductCollection:(id)arg2;
- (void)taggingSearchViewController:(id)arg1 didSelectProductItems:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)taggingSearchViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)startPermissionRequest;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 media:(id)arg3 sourceName:(id)arg4 sponsoredInfoProvider:(id)arg5 suggestedItemIds:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
