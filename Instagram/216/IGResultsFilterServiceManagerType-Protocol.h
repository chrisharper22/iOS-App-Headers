//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGResultsFilterMetadataProvider-Protocol.h"
#import "NSObject-Protocol.h"

@protocol IGResultsFilterListServiceType, IGResultsFilterTaxonomyServiceType;

@protocol IGResultsFilterServiceManagerType <NSObject, IGResultsFilterMetadataProvider>
@property(readonly, nonatomic) id <IGResultsFilterTaxonomyServiceType> taxonomyService;
@property(readonly, nonatomic) id <IGResultsFilterListServiceType> listService;
- (void)clearSelectedItems;
- (void)prefetchFilters;
@end

