//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSearchRequestBuilding-Protocol.h>

@class NSString;

@interface IGSearchHashtagRequestBuilder : NSObject <IGSearchRequestBuilding>
{
    long long _surfaceAttributionType;
}

- (id)initWithSearchSurfaceNetworkAttributionType:(long long)arg1;
- (id)requestBuilderForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 locationManager:(id)arg4 excludeList:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

