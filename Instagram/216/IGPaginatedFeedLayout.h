//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGVerticalCollectionViewLayout.h"

#import "IGOriginalCollectionViewLayoutAttributesProvider-Protocol.h"

@class IGCollectionViewLayoutAttributesModifierController, IGPaginatedFeedFocusCoordinator, NSString;
@protocol IGPaginatedFeedLayoutDelegate, IGPaginatedFeedLayoutIndexPathProvider;

@interface IGPaginatedFeedLayout : IGVerticalCollectionViewLayout <IGOriginalCollectionViewLayoutAttributesProvider>
{
    id <IGPaginatedFeedLayoutIndexPathProvider> _indexPathProvider;
    IGPaginatedFeedFocusCoordinator *_focusCoordinator;
    _Bool _prioritizeForwardMomentum;
    IGCollectionViewLayoutAttributesModifierController *_layoutAttributesModifierController;
    _Bool _disableBottomAnchors;
    id <IGPaginatedFeedLayoutDelegate> _delegate;
    double _maximumFreescrollingSpeed;
}

- (void).cxx_destruct;
@property(nonatomic) double maximumFreescrollingSpeed; // @synthesize maximumFreescrollingSpeed=_maximumFreescrollingSpeed;
@property(nonatomic) _Bool disableBottomAnchors; // @synthesize disableBottomAnchors=_disableBottomAnchors;
@property(nonatomic) __weak id <IGPaginatedFeedLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_announceScrollTowardsIndexPath:(id)arg1;
- (_Bool)_allowPrioritizingForwardMomentum;
- (double)_absoluteBottomAnchorOffset;
- (double)_bottomAnchorOffsetForAttributes:(id)arg1;
- (double)_topAnchorOffsetForAttributes:(id)arg1;
- (_Bool)_anchorExtendsViewportHeightForAttributes:(id)arg1 nextAttributes:(id)arg2;
- (id)_targetOffsetsForIndexPath:(id)arg1 anchoredIndexPath:(id)arg2 nextAnchorIndexPath:(id)arg3;
- (id)originalLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setLayoutConfigurationProvider:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)initWithIndexPathProvider:(id)arg1 focusCoordinator:(id)arg2 topContentInset:(double)arg3 prioritizeForwardMomentum:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

