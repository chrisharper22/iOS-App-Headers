//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListItemViewProvider-Protocol.h>

@class IGTableLayoutSpec, IGTextRowBodyView, IGTextRowChevronDetailView, IGTextRowViewModel, NSString;
@protocol IGListItemViewProviderDelegate;

@interface IGTextRowViewProvider : NSObject <IGListItemViewProvider>
{
    IGTableLayoutSpec *_layoutSpec;
    IGTextRowBodyView *_bodyView;
    IGTextRowChevronDetailView *_chevronDetailView;
    _Bool selected;
    _Bool _enabled;
    id <IGListItemViewProviderDelegate> providerDelegate;
    IGTextRowViewModel *_viewModel;
    struct UIEdgeInsets _leadingViewInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) IGTextRowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (id)aggregatedAccessibilityLabel;
- (long long)trailingViewAlignment;
- (long long)trailingViewSizing;
- (id)trailingContentView;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (id)bodyContentView;
- (id)leadingContentView;
- (id)initWithLayoutSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
