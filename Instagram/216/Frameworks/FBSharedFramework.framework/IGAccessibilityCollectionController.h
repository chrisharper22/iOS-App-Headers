//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAccessibilityMagicTapController, NSString, UICollectionView, UICollectionViewCell;

@interface IGAccessibilityCollectionController : NSObject
{
    IGAccessibilityMagicTapController *_magicTapController;
    _Bool _isScrollOnUpdateEnabled;
    long long _currentIndex;
    UICollectionView *_collectionView;
    UICollectionViewCell *_currentCollectionViewCell;
    NSString *_currentAccessibilityValue;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentAccessibilityValue; // @synthesize currentAccessibilityValue=_currentAccessibilityValue;
@property(nonatomic) __weak UICollectionViewCell *currentCollectionViewCell; // @synthesize currentCollectionViewCell=_currentCollectionViewCell;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isScrollOnUpdateEnabled; // @synthesize isScrollOnUpdateEnabled=_isScrollOnUpdateEnabled;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (_Bool)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)resetCurrentAccessibility;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityUpdate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)resetCurrentIndex:(long long)arg1;
- (id)initWithCollectionView:(id)arg1;

@end

