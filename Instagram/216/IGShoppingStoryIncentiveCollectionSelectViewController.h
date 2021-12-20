//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGShoppingStoryDestinationServiceDelegate-Protocol.h"

@class IGEmptyFeedView, IGShoppingStoryDestinationService, NSArray, NSString, UIActivityIndicatorView;
@protocol IGShoppingStoryIncentiveCollectionSelectViewControllerDelegate;

@interface IGShoppingStoryIncentiveCollectionSelectViewController : IGGroupedTableViewController <IGEmptyFeedViewDelegate, IGShoppingStoryDestinationServiceDelegate>
{
    NSArray *_collections;
    IGShoppingStoryDestinationService *_service;
    UIActivityIndicatorView *_loadingIndicator;
    IGEmptyFeedView *_failureView;
    id <IGShoppingStoryIncentiveCollectionSelectViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingStoryIncentiveCollectionSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelTapped;
- (void)shoppingStoryDestinationServiceDidFailLoad:(id)arg1;
- (void)shoppingStoryDestinationService:(id)arg1 didLoadStoryDestinationsResponse:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 destinationService:(id)arg2 shoppingStoryCreationContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

