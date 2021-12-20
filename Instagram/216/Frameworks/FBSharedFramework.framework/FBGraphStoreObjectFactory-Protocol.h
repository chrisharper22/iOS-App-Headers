//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FBGraphStoreObjectFactory <NSObject>
- (shared_ptr_b4f13e85)defaultTreeShapeResolver;
- (const struct FragmentSpace *)fragmentSpace;
- (const struct GeneratedGraphSchema *)graphSchema;
- (const struct NodeFactory *)nodeFactory;
- (shared_ptr_14a78dab)parsingStrategyPtr;
- (const void *)parsingStrategy;
- (id)newFromTree:(const void *)arg1;
@end

