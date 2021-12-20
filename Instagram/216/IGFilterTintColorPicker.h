//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol IGFilterTintColorPickerDelegate;

@interface IGFilterTintColorPicker : UIControl <UIGestureRecognizerDelegate>
{
    id <IGFilterTintColorPickerDelegate> _delegate;
    unsigned long long _currentTintType;
    unsigned long long _currentColorIndex;
    NSMutableArray *_boundingBoxes;
    NSMutableArray *_accessibilityItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *accessibilityItems; // @synthesize accessibilityItems=_accessibilityItems;
@property(retain, nonatomic) NSMutableArray *boundingBoxes; // @synthesize boundingBoxes=_boundingBoxes;
@property(nonatomic) unsigned long long currentColorIndex; // @synthesize currentColorIndex=_currentColorIndex;
@property(nonatomic) unsigned long long currentTintType; // @synthesize currentTintType=_currentTintType;
@property(nonatomic) __weak id <IGFilterTintColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (unsigned long long)currentTintColor;
- (_Bool)isAnyColorSelected;
- (void)_handleTapFrom:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)_closestColorIndex:(struct CGPoint)arg1;
- (double)_paddedPickerWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

