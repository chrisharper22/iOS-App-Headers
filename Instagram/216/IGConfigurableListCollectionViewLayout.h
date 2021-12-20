//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListCollectionViewLayout.h>

#import "IGCollectionViewItemLayoutAttributesProvider-Protocol.h"

@class IGCollectionViewLayoutConfiguration, NSMutableDictionary, NSString;
@protocol IGCollectionViewLayoutConfigurationProvider, IGCollectionViewLayoutSeparatorDelegate;

@interface IGConfigurableListCollectionViewLayout : IGListCollectionViewLayout <IGCollectionViewItemLayoutAttributesProvider>
{
    double _topContentInset;
    NSMutableDictionary *_originalAttributesForIndexPaths;
    id <IGCollectionViewLayoutSeparatorDelegate> _separatorDelegate;
    id <IGCollectionViewLayoutConfigurationProvider> _configurationProvider;
    IGCollectionViewLayoutConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGCollectionViewLayoutConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <IGCollectionViewLayoutConfigurationProvider> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(nonatomic) __weak id <IGCollectionViewLayoutSeparatorDelegate> separatorDelegate; // @synthesize separatorDelegate=_separatorDelegate;
- (id)defaultLayoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGRect)_addContentInsetsToRect:(struct CGRect)arg1;
- (struct CGRect)_collectionViewVisibleRect;
- (id)originalAttributesForItemAtIndexPath:(id)arg1;
- (id)_layoutAttributesForSeparatorWithKind:(id)arg1 atIndexPath:(id)arg2 frame:(struct CGRect)arg3;
- (id)_layoutAttributesForBottomSeparatorAtIndexPath:(id)arg1;
- (id)_layoutAttributesForTopSeparatorAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 seenIndexPaths:(id)arg2 visibleRect:(struct CGRect)arg3;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (void)_updateConfigurationIfNecessary;
- (void)_invalidateConfiguration;
- (_Bool)_anyConfiguredItemVisibleWithNewBounds:(struct CGRect)arg1;
- (id)initWithTopContentInset:(double)arg1 separatorViewClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

