//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGInterceptingSwitchDelegate-Protocol.h"

@class IGCoreTextView, IGInterceptingSwitch, IGPromoteSwitchViewModel, IGTooltipView, NSString;
@protocol IGInterceptingSwitchDelegate;

@interface IGPromoteSwitchCell : UICollectionViewCell <IGInterceptingSwitchDelegate>
{
    IGCoreTextView *_titleView;
    IGCoreTextView *_subtitleView;
    IGInterceptingSwitch *_switchView;
    IGTooltipView *_tooltipView;
    IGPromoteSwitchViewModel *_viewModel;
    id <IGInterceptingSwitchDelegate> _delegate;
}

+ (double)heightThatFitsWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInterceptingSwitchDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) IGPromoteSwitchViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)switchDidInterceptToggling:(id)arg1;
- (void)switchDidSucceedToggling:(id)arg1;
- (_Bool)switchShouldInterceptToggling:(id)arg1;
- (void)_pinTooltipToSwitchToggleStatusOffTop;
- (void)_checkAndShowTooltipWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
