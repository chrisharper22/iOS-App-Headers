//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class FOAGridLayoutOutput, FOAGridLayoutStrategy, NSArray, NSValue;

@interface FOACollectionViewGridLayout : UICollectionViewLayout
{
    CDUnknownBlockType _inputItemProvider;
    CDUnknownBlockType _didPrepareLayoutCallback;
    _Bool _alwaysInvalidateOnBoundsChange;
    struct {
        struct FOAGridLayoutInput layoutInput;
        CDUnknownFunctionPointerType computeLayout;
    } _memoizationKey;
    FOAGridLayoutOutput *_layoutOutput;
    NSArray *_layoutAttributesList;
    NSArray *_previousLayoutAttributesList;
    NSArray *_updateItems;
    _Bool _hasSelfView;
    FOAGridLayoutStrategy *_layoutStrategy;
    NSValue *_floatingSelfViewRect;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *floatingSelfViewRect; // @synthesize floatingSelfViewRect=_floatingSelfViewRect;
@property(readonly, nonatomic) FOAGridLayoutOutput *layoutOutput; // @synthesize layoutOutput=_layoutOutput;
@property(retain, nonatomic) FOAGridLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (_Bool)_isTransitioningFromFloating;
- (_Bool)_isTransitioningToFloating;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)initWithInputItemProvider:(CDUnknownBlockType)arg1 didPrepareLayoutCallback:(CDUnknownBlockType)arg2;

@end

