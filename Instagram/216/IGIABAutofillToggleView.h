//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGSwitch, UILabel;
@protocol IGIABAutofillToggleViewDelegate;

@interface IGIABAutofillToggleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    IGSwitch *_toggle;
    id <IGIABAutofillToggleViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 toggleInitialState:(_Bool)arg2;

@end
