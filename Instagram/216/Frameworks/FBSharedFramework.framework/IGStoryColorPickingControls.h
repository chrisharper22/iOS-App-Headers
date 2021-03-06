//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStoryColorPaletteView, IGStoryEyedropperToggleButton, IGStoryHuePickerView;

@interface IGStoryColorPickingControls : UIView
{
    _Bool _huePickerVisible;
    IGStoryColorPaletteView *_colorPaletteView;
    IGStoryEyedropperToggleButton *_eyedropperToggleButton;
    IGStoryHuePickerView *_huePickerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool huePickerVisible; // @synthesize huePickerVisible=_huePickerVisible;
@property(readonly, nonatomic) IGStoryHuePickerView *huePickerView; // @synthesize huePickerView=_huePickerView;
@property(readonly, nonatomic) IGStoryEyedropperToggleButton *eyedropperToggleButton; // @synthesize eyedropperToggleButton=_eyedropperToggleButton;
@property(readonly, nonatomic) IGStoryColorPaletteView *colorPaletteView; // @synthesize colorPaletteView=_colorPaletteView;
- (void)setHuePickerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithColorPalettes:(id)arg1 eyedropperColorPickerEnabled:(_Bool)arg2;

@end

