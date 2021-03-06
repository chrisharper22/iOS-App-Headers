//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBGraphStoreObjectFactory-Protocol.h>

@class NSString;

@interface FBMemModelObjectFactory : NSObject <FBGraphStoreObjectFactory>
{
    struct shared_ptr<facebook::mobile::graphstore::NodeFactory> _nodeFactory;
    shared_ptr_a05df825 _graphQLAssetFactory;
    shared_ptr_b4f13e85 _defaultTreeShapeResolver;
    struct shared_ptr<facebook::graphql::parsing::GraphStoreGraphQLFactory> _strategy;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_b4f13e85)defaultTreeShapeResolver;
- (const struct FragmentSpace *)fragmentSpace;
- (const struct GeneratedGraphSchema *)graphSchema;
- (const struct NodeFactory *)nodeFactory;
- (shared_ptr_14a78dab)parsingStrategyPtr;
- (const void *)parsingStrategy;
- (Class)modelClassFromTypeId:(unsigned int)arg1;
- (id)allocFromTypeId:(unsigned int)arg1;
- (id)newFromFBTree:(const void *)arg1;
- (id)newFromTree:(const void *)arg1;
- (id)initWithNodeFactory:(const void *)arg1 postProcessors:(vector_6dd9e400)arg2 graphQLAssetFactory:(const void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

