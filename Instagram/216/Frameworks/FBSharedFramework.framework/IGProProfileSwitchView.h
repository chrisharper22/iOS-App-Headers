//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UISwitch;

@interface IGProProfileSwitchView : UIView
{
    UILabel *_titleLabel;
    UISwitch *_switchView;
    CDUnknownBlockType _didToggleSwitch;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didToggleSwitch; // @synthesize didToggleSwitch=_didToggleSwitch;
- (void)_toggleSwitched;
- (struct CGSize)_titleLabelSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_calculateLayout:(struct CGSize)arg1;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
