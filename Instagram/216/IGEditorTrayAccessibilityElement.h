//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class IGAccessibilityCollectionController;

@interface IGEditorTrayAccessibilityElement : UIAccessibilityElement
{
    IGAccessibilityCollectionController *_accessibilityCollectionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAccessibilityCollectionController *accessibilityCollectionController; // @synthesize accessibilityCollectionController=_accessibilityCollectionController;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (_Bool)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
@property(nonatomic) long long currentIndex;
- (void)setCollectionView:(id)arg1;
- (id)initWithCollectionController:(id)arg1 accessibilityContainer:(id)arg2;

@end

