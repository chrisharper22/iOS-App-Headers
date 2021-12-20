//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListItemViewProvider-Protocol.h"

@class IGProfileAndCheckmarkViewModel, IGProfileCellBodyView, IGProfilePictureImageView, IGTableLayoutSpec, NSString, UIImageView;
@protocol IGListItemViewProviderDelegate;

@interface IGProfileAndCheckmarkViewProvider : NSObject <IGListItemViewProvider>
{
    IGProfilePictureImageView *_profileImageView;
    IGProfileCellBodyView *_bodyView;
    UIImageView *_checkMarkImageView;
    _Bool _selected;
    _Bool _enabled;
    IGTableLayoutSpec *_layoutSpec;
    id <IGListItemViewProviderDelegate> providerDelegate;
    IGProfileAndCheckmarkViewModel *_viewModel;
    struct UIEdgeInsets _leadingViewInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGProfileAndCheckmarkViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (long long)trailingViewSizing;
- (long long)trailingViewAlignment;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
- (id)initWithLayoutSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
