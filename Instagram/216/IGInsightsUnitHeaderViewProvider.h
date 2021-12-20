//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGInsightsUnitHeaderViewDelegate-Protocol.h"
#import "IGListItemViewProvider-Protocol.h"

@class IGButton, IGInsightsUnitHeaderView, IGTableLayoutSpec, NSString;
@protocol IGInsightsUnitHeaderViewProviderDelegate, IGListItemViewProviderDelegate;

@interface IGInsightsUnitHeaderViewProvider : NSObject <IGInsightsUnitHeaderViewDelegate, IGListItemViewProvider>
{
    IGInsightsUnitHeaderView *_headerView;
    IGButton *_moreButton;
    _Bool selected;
    IGTableLayoutSpec *_layoutSpec;
    id <IGListItemViewProviderDelegate> providerDelegate;
    id <IGInsightsUnitHeaderViewProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInsightsUnitHeaderViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (long long)trailingViewSizing;
- (long long)trailingViewAlignment;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets;
- (void)insightsUnitHeaderViewDidTapInfoButton:(id)arg1;
- (void)_didTapMoreButton;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithLayoutSpec:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

