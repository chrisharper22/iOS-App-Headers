//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCollectionViewLayoutAttributesModifier-Protocol.h"

@class IGCollectionViewLayoutAttributesModifierAttachToIndexPath, IGCollectionViewLayoutAttributesModifierAttachToViewPort, NSString;
@protocol IGCollectionViewLayoutAttributesModifierDelegate;

@interface IGCollectionViewLayoutAttributesModifierStickyHeader : NSObject <IGCollectionViewLayoutAttributesModifier>
{
    IGCollectionViewLayoutAttributesModifierAttachToViewPort *_viewPortModifier;
    IGCollectionViewLayoutAttributesModifierAttachToIndexPath *_indexPathModifer;
    id <IGCollectionViewLayoutAttributesModifierDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCollectionViewLayoutAttributesModifierDelegate> delegate; // @synthesize delegate=_delegate;
- (id)indexPathDependenciesWithCollectionView:(id)arg1;
- (void)modifyAttributes:(id)arg1 withContext:(id)arg2;
- (id)initWithNextStickyHeaderIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
