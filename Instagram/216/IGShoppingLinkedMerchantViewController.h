//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGShoppingLinkedMerchantSectionDelegate-Protocol.h"

@class IGListAdapter, IGShoppingConsumptionFeedItemLogger, IGUser, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGShoppingLinkedMerchantViewControllerDelegate;

@interface IGShoppingLinkedMerchantViewController : UIViewController <IGListAdapterDataSource, IGListAdapterDelegate, IGShoppingLinkedMerchantSectionDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGUser *_user;
    NSArray *_merchants;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGShoppingConsumptionFeedItemLogger *_consumptionLogger;
    id <IGShoppingLinkedMerchantViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingLinkedMerchantViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewModelForMerchant:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)shoppingLinkedMerchantWasTapped:(id)arg1 allTaggedProductIDs:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 merchants:(id)arg2 consumptionLogger:(id)arg3;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 consumptionLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

