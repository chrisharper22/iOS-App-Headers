//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/CKLayoutComponent.h>

@class CKComponent;

@interface CKOverlayLayoutComponent : CKLayoutComponent
{
    CKComponent *_overlay;
    CKComponent *_component;
}

- (void).cxx_destruct;
- (struct RCLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct RCComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)childAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfChildren;
- (id)initWithComponent:(id)arg1 overlay:(id)arg2;
- (struct RCComponentSize)nodeSize;

@end
