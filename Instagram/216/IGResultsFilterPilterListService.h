//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGResultsFilterListServiceType-Protocol.h"

@class IGResultsFilterModelsMetadata, NSString;
@protocol IGResultsFilterListServiceDelegate;

@interface IGResultsFilterPilterListService : NSObject <IGResultsFilterListServiceType>
{
    IGResultsFilterModelsMetadata *_resultsFilterMetadata;
    id <IGResultsFilterListServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGResultsFilterModelsMetadata *resultsFilterMetadata; // @synthesize resultsFilterMetadata=_resultsFilterMetadata;
@property(nonatomic) __weak id <IGResultsFilterListServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setSelectedItems;
- (_Bool)fetchDataForAttributes:(id)arg1;
- (id)viewModelsForAttributeType:(id)arg1;
- (id)initWithResultsFilterMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

