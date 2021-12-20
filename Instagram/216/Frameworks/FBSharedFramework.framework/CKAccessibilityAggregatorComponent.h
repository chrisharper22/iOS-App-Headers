//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class CKAccessibilityAggregationCache, CKAccessibilityAggregatorElement, CKComponent;

@interface CKAccessibilityAggregatorComponent : CKCompositeComponent
{
    CKComponent *_childComponent;
    unsigned long long _accessibilityAttributes;
    CKAccessibilityAggregationCache *_accessibilityAttributesCache;
    CKAccessibilityAggregatorElement *_accessibilityElement;
}

+ (id)newWithComponent:(id)arg1 aggregatedAttributes:(unsigned long long)arg2;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (id)cachedAccessibilityAttributes;
- (struct MountResult)mountInContext:(const void *)arg1 layout:(const void *)arg2 supercomponent:(id)arg3;

@end
