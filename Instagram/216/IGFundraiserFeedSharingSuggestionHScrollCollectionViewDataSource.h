//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol IGFundraiserFeedSharingSuggestionHScrollDelegate;

@interface IGFundraiserFeedSharingSuggestionHScrollCollectionViewDataSource : NSObject <UICollectionViewDataSource>
{
    id <IGFundraiserFeedSharingSuggestionHScrollDelegate> _suggestionHScrollDelegate;
    NSArray *_nonprofits;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *nonprofits; // @synthesize nonprofits=_nonprofits;
@property(nonatomic) __weak id <IGFundraiserFeedSharingSuggestionHScrollDelegate> suggestionHScrollDelegate; // @synthesize suggestionHScrollDelegate=_suggestionHScrollDelegate;
- (id)_nonprofitForIndexPath:(id)arg1;
- (void)_configureNonprofitSuggestionCell:(id)arg1 indexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) NSDictionary *registeredCellClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
