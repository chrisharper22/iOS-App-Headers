//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCollectionViewLayoutAttributesModifier-Protocol.h"

@class NSString;
@protocol IGCollectionViewLayoutAttributesModifierDelegate;

@interface IGCollectionViewLayoutAttributesModifierAttachToViewPort : NSObject <IGCollectionViewLayoutAttributesModifier>
{
    unsigned long long _viewPortEdge;
    unsigned long long _edge;
    double _offset;
    _Bool _isActive;
    id <IGCollectionViewLayoutAttributesModifierDelegate> _delegate;
}

+ (id)bottom;
+ (id)top;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCollectionViewLayoutAttributesModifierDelegate> delegate; // @synthesize delegate=_delegate;
- (id)indexPathDependenciesWithCollectionView:(id)arg1;
- (void)_setIsActive:(_Bool)arg1 withContext:(id)arg2;
- (void)modifyAttributes:(id)arg1 withContext:(id)arg2;
- (id)initWithViewPortEdge:(unsigned long long)arg1 edge:(unsigned long long)arg2 offset:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

