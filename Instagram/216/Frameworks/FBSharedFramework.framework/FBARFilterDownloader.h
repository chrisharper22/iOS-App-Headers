//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARFilterDownloading-Protocol.h>

@class NSString;
@protocol FBARDeliveryFacade;

@interface FBARFilterDownloader : NSObject <FBARFilterDownloading>
{
    id <FBARDeliveryFacade> _deliveryFacade;
}

- (void).cxx_destruct;
- (pair_b3ada1ea)_fetchRequestsForFilters:(id)arg1;
- (id)fetchFilters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareFilterDescriptors:(id)arg1 forFetchResults:(id)arg2 fetchError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_createFilterDescriptor:(id)arg1 forFilter:(id)arg2;
- (id)initWithDeliveryFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

