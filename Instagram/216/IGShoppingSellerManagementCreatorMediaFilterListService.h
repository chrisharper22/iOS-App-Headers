//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGResultsFilterListServiceType-Protocol.h"

@class IGResultsFilterModelsMetadata, IGUserSession, NSDictionary, NSString;
@protocol IGResultsFilterListServiceDelegate;

@interface IGShoppingSellerManagementCreatorMediaFilterListService : NSObject <IGResultsFilterListServiceType>
{
    IGUserSession *_userSession;
    IGResultsFilterModelsMetadata *_resultsFilterMetadata;
    NSString *_endpointPath;
    NSDictionary *_endpointExtras;
    id <IGResultsFilterListServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGResultsFilterModelsMetadata *resultsFilterMetadata; // @synthesize resultsFilterMetadata=_resultsFilterMetadata;
@property(nonatomic) __weak id <IGResultsFilterListServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)fetchDataForAttributes:(id)arg1;
- (id)viewModelsForAttributeType:(id)arg1;
- (id)initWithUserSession:(id)arg1 resultsFilterMetadata:(id)arg2 endpointPath:(id)arg3 endpointExtras:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

