//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListItemViewProvider-Protocol.h>

@class IGRadioButton, IGRadioViewModel, IGSettingsDescriptionBodyView, IGTableLayoutSpec, NSString;
@protocol IGListItemViewProviderDelegate;

@interface IGRadioViewProvider : NSObject <IGListItemViewProvider>
{
    IGTableLayoutSpec *_layoutSpec;
    IGSettingsDescriptionBodyView *_bodyView;
    IGRadioButton *_radioButton;
    _Bool _shouldCenterAlignRadioButton;
    _Bool _selected;
    id <IGListItemViewProviderDelegate> providerDelegate;
    IGRadioViewModel *_viewModel;
    struct UIEdgeInsets _leadingViewInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGRadioViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (id)aggregatedAccessibilityLabel;
- (double)trailingCenterYBodyOffset;
- (long long)trailingViewSizing;
- (long long)trailingViewAlignment;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
- (void)setViewModel:(id)arg1;
- (id)initWithLayoutSpec:(id)arg1 shouldCenterAlignRadioButton:(_Bool)arg2;
- (id)initWithLayoutSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

