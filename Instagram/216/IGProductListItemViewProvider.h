//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListItemViewProvider-Protocol.h"

@class IGImageView, IGProfileCellBodyView, IGTableLayoutSpec, IGTapButton, NSString;
@protocol IGListItemViewProviderDelegate, IGProductListItemViewProviderDelegate;

@interface IGProductListItemViewProvider : NSObject <IGListItemViewProvider>
{
    IGImageView *_imageView;
    IGProfileCellBodyView *_bodyView;
    IGTapButton *_trailingButtonView;
    _Bool selected;
    IGTableLayoutSpec *_layoutSpec;
    id <IGListItemViewProviderDelegate> providerDelegate;
    id <IGProductListItemViewProviderDelegate> _delegate;
    struct UIEdgeInsets _leadingViewInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProductListItemViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (long long)trailingViewSizing;
- (void)_buttonTapped;
- (void)setViewModel:(id)arg1 withUserSession:(id)arg2;
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
