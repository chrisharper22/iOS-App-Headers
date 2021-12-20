//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingReconsiderationDataSourceProviderListener-Protocol.h"

@class IGUserSession, NSString;
@protocol IGShoppingReconsiderationDataSourceProvider, IGShoppingReconsiderationDestinationContext, IGShoppingReconsiderationDestinationSectionDelegate, IGShoppingReconsiderationDestinationSectionPaginationStrategy;

@interface IGShoppingReconsiderationDestinationSection : NSObject <IGShoppingReconsiderationDataSourceProviderListener>
{
    id <IGShoppingReconsiderationDestinationContext> _context;
    IGUserSession *_userSession;
    id <IGShoppingReconsiderationDataSourceProvider> _sourceProvider;
    id <IGShoppingReconsiderationDestinationSectionPaginationStrategy> _paginationStrategy;
    _Bool _isSingleMerchantView;
    id <IGShoppingReconsiderationDestinationSectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingReconsiderationDestinationSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingReconsiderationDataSourceProvider:(id)arg1 didUpdateItems:(id)arg2 withUpdateType:(id)arg3;
- (void)shoppingReconsiderationDataSourceProvider:(id)arg1 didUpdateFetchState:(id)arg2;
- (id)_itemForMediaTile:(id)arg1 index:(long long)arg2;
- (id)_itemModelForProductTile:(id)arg1 igProductItem:(id)arg2 index:(long long)arg3;
- (id)_itemModelForProductItem:(id)arg1 index:(long long)arg2;
- (id)_itemModelForFBProductItem:(id)arg1 productTileMetadata:(id)arg2 index:(long long)arg3;
- (void)dismissItemPk:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)loggingModuleName;
- (void)handleModuleHeaderActionButtonTapWithViewModel:(id)arg1;
- (_Bool)shouldDisplayEmptyState;
- (id)paginationModel;
- (id)itemModels;
- (id)headerModel;
- (void)requestDataWithAction:(long long)arg1;
- (_Bool)hasMoreAvailable;
- (id)fetchState;
- (id)title;
- (id)sectionIdentifier;
- (long long)sourceType;
- (id)initWithUserSession:(id)arg1 sourceProvider:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

