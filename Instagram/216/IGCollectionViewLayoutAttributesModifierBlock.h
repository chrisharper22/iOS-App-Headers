//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCollectionViewLayoutAttributesModifier-Protocol.h"

@class NSString;

@interface IGCollectionViewLayoutAttributesModifierBlock : NSObject <IGCollectionViewLayoutAttributesModifier>
{
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (id)indexPathDependenciesWithCollectionView:(id)arg1;
- (void)modifyAttributes:(id)arg1 withContext:(id)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

