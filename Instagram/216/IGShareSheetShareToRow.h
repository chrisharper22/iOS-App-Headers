//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGSwitch, UILabel;
@protocol IGShareSheetShareToDelegate;

@interface IGShareSheetShareToRow : UIControl
{
    unsigned long long _rowType;
    UILabel *_title;
    IGSwitch *_switch;
    id <IGShareSheetShareToDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShareSheetShareToDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRowType:(unsigned long long)arg1;

@end
