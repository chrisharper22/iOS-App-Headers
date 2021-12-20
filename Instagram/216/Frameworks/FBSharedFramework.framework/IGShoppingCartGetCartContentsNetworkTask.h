//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGShoppingCartNetworkTask-Protocol.h>

@class IGObjectStores, IGShoppingCartNetworkTaskState, NSSet, NSString;
@protocol IGAPIClient;

@interface IGShoppingCartGetCartContentsNetworkTask : NSObject <IGShoppingCartNetworkTask>
{
    id <IGAPIClient> _networker;
    IGObjectStores *_objectStores;
    IGShoppingCartNetworkTaskState *_state;
    NSSet *_affectedMerchantBagPks;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *affectedMerchantBagPks; // @synthesize affectedMerchantBagPks=_affectedMerchantBagPks;
@property(readonly, copy, nonatomic) IGShoppingCartNetworkTaskState *state; // @synthesize state=_state;
- (void)_postProcessResponse:(id)arg1;
- (_Bool)executeTaskWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (id)affectedMutationIds;
- (id)queries;
- (id)initWithNetworker:(id)arg1 objectStores:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

