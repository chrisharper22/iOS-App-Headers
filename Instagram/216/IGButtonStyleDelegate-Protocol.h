//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGButton, UIColor, UIImage;

@protocol IGButtonStyleDelegate <NSObject>
+ (UIColor *)titleShadowColorForControlState:(unsigned long long)arg1;
+ (UIColor *)titleColorForControlState:(unsigned long long)arg1;
+ (UIImage *)backgroundImageForControlState:(unsigned long long)arg1;
+ (struct UIEdgeInsets)titleEdgeInsetsForButton:(IGButton *)arg1;
+ (struct CGSize)sizeForButton:(IGButton *)arg1;
+ (void)configureButton:(IGButton *)arg1;
@end

