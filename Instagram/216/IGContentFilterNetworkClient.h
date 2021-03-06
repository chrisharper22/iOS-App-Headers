//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGContentFilterNetworkClientProtocol-Protocol.h"

@class FBGraphQLService, IGContentFilterQueryBuilderFactory, NSString;
@protocol IGAPIClient;

@interface IGContentFilterNetworkClient : NSObject <IGContentFilterNetworkClientProtocol>
{
    IGContentFilterQueryBuilderFactory *_queryBuilderFactory;
    FBGraphQLService *_graphQLService;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (void)modifyDictionaryWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDictionaryWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDictionaryListWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithQueryBuilderFactory:(id)arg1 graphQLService:(id)arg2 networker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

