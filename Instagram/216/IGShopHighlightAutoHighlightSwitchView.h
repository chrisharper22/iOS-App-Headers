//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGSwitchViewProviderDelegate-Protocol.h"

@class IGListItemView, IGSwitchViewModel, IGSwitchViewProvider, NSString;
@protocol IGShopHighlightAutoHighlightSwitchViewDelegate;

@interface IGShopHighlightAutoHighlightSwitchView : UIView <IGSwitchViewProviderDelegate>
{
    IGListItemView *_toggleCellView;
    IGSwitchViewProvider *_switchViewProvider;
    IGSwitchViewModel *_switchViewModel;
    _Bool _autoHighlightEnabled;
    id <IGShopHighlightAutoHighlightSwitchViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoHighlightEnabled; // @synthesize autoHighlightEnabled=_autoHighlightEnabled;
@property(nonatomic) __weak id <IGShopHighlightAutoHighlightSwitchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
