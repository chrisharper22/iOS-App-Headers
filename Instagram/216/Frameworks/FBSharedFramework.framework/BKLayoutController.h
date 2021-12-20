//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface BKLayoutController : NSObject
{
    struct RCLayoutResult _computedLayout;
    struct CKSizeRange _computedAtSizeRange;
    NSSet *_mountedComponents;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct RCLayoutResult)computedLayout;
- (void)dealloc;
- (void)unmount;
- (void)updateLayoutResult:(const void *)arg1 constrainingSize:(struct CKSizeRange)arg2;
- (_Bool)computeLayoutWithModelIfNecessary:(id)arg1 constrainingSize:(struct CKSizeRange)arg2 context:(id)arg3;
- (void)mountInView:(id)arg1 context:(id)arg2;
- (struct CGSize)size;

@end

