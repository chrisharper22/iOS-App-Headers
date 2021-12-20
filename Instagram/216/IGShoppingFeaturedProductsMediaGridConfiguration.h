//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingMediaGridViewControllerConfigurationType-Protocol.h"

@class IGShoppingEmptyStateViewModel, NSString;

@interface IGShoppingFeaturedProductsMediaGridConfiguration : NSObject <IGShoppingMediaGridViewControllerConfigurationType>
{
    long long _topContentInsetStyle;
    _Bool _supportsPullToRefresh;
    _Bool _shouldLogMediaGridEntry;
    NSString *_title;
    IGShoppingEmptyStateViewModel *_emptyStateViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGShoppingEmptyStateViewModel *emptyStateViewModel; // @synthesize emptyStateViewModel=_emptyStateViewModel;
@property(nonatomic) _Bool shouldLogMediaGridEntry; // @synthesize shouldLogMediaGridEntry=_shouldLogMediaGridEntry;
@property(nonatomic) _Bool supportsPullToRefresh; // @synthesize supportsPullToRefresh=_supportsPullToRefresh;
@property(nonatomic) long long topContentInsetStyle; // @synthesize topContentInsetStyle=_topContentInsetStyle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)rightBarButtonItemConfiguration;
- (id)mediaThumbnailConfigurationForMedia:(id)arg1;
- (id)initWithTitle:(id)arg1 topContentInsetStyle:(long long)arg2 emptyStateViewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

