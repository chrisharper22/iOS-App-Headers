//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBMPCompositeFilter.h>

@class NSArray;

@interface FBMPDecoratorFilter : FBMPCompositeFilter
{
    NSArray *_extraConsumerPorts;
    _Bool _required;
}

+ (id)newWithFilter:(id)arg1 extraConsumerPorts:(id)arg2 required:(_Bool)arg3;
- (void).cxx_destruct;
- (_Bool)allowsConnectionsWithConsumerPortMapping:(id)arg1;
- (id)consumerPorts;

@end
