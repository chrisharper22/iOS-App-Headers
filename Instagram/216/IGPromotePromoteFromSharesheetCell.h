//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCollectionViewCell.h>

@class IGSwitch, IGTooltipView;
@protocol IGPromotePromoteFromSharesheetCellDelegate;

@interface IGPromotePromoteFromSharesheetCell : IGCollectionViewCell
{
    IGSwitch *_switch;
    IGTooltipView *_tooltipView;
    id <IGPromotePromoteFromSharesheetCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromotePromoteFromSharesheetCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didToggleSwitch:(_Bool)arg1;
- (void)showTooltip:(id)arg1;
- (void)setToggleStatus:(_Bool)arg1;
- (void)configureWithTitle:(id)arg1 isToggleOn:(_Bool)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
