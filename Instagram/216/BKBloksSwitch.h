//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISwitch.h>

@class UIColor;

@interface BKBloksSwitch : UISwitch
{
    UIColor *_onTintColor;
    UIColor *_offTintColor;
    UIColor *_disabledOnTintColor;
    UIColor *_disabledOffTintColor;
}

+ (struct CGSize)sizeThatFitsWithConstrainingSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateColors;
- (void)setEnabled:(_Bool)arg1;
- (void)setOnTintColor:(id)arg1 offTintColor:(id)arg2 disabledOnTintColor:(id)arg3 disabledOffTintColor:(id)arg4;

@end

