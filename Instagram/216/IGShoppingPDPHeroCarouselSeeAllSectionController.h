//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListWorkingRangeDelegate-Protocol.h"
#import "IGShoppingPDPHeroCarouselSeeAllCellDelegate-Protocol.h"

@class IGMediaPreloader, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPHeroCarouselSeeAllViewModel, IGUserSession, NSMutableDictionary, NSString;
@protocol IGShoppingPDPHeroCarouselSeeAllSectionControllerDelegate;

@interface IGShoppingPDPHeroCarouselSeeAllSectionController : IGListSectionController <IGListWorkingRangeDelegate, IGShoppingPDPHeroCarouselSeeAllCellDelegate>
{
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGShoppingPDPHeroCarouselSeeAllViewModel *_viewModel;
    IGMediaPreloader *_mediaPreloader;
    NSMutableDictionary *_gradientColorCache;
    id <IGShoppingPDPHeroCarouselSeeAllSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselSeeAllSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_preloadMedia;
- (void)shoppingPDPHeroCarouseldidTapSeeAll;
- (void)shoppingPDPHeroCarouselSeeAllCell:(id)arg1 didComputeGradientColors:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

