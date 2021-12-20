//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGShoppingContentTileDropsMetadata, IGShoppingHomeRankingInfo, IGShoppingPDPSourceMedia, IGShoppingProductTileDecorations, IGShoppingProductTileLabel, IGShoppingProductTileUIConfiguration, NSArray, NSString, UCIProductLoggingInfo;
@protocol IGGenericProductItem><IGProductMerchantProfileImageProviding><IGSavableObject;

@protocol IGShoppingGenericProductTileViewModel <NSObject>
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) IGShoppingContentTileDropsMetadata *dropsMetadata;
@property(readonly, nonatomic) IGShoppingProductTileUIConfiguration *uiConfiguration;
@property(readonly, nonatomic) UCIProductLoggingInfo *uciLoggingInfo;
@property(readonly, nonatomic) IGShoppingHomeRankingInfo *rankingInfo;
@property(readonly, nonatomic) IGShoppingPDPSourceMedia *pdpSourceMedia;
@property(readonly, nonatomic) _Bool isHidden;
@property(readonly, nonatomic) long long sectionIndex;
@property(readonly, nonatomic) long long ctaType;
@property(readonly, nonatomic) long long previewActions;
@property(readonly, nonatomic) NSString *productFeedSectionId;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly, nonatomic) _Bool saveStatus;
@property(readonly, copy, nonatomic) NSArray *coverMedias;
@property(readonly, nonatomic) IGShoppingProductTileDecorations *decorations;
@property(readonly, nonatomic) IGShoppingProductTileLabel *secondSubtitleLabel;
@property(readonly, nonatomic) IGShoppingProductTileLabel *firstSubtitleLabel;
@property(readonly, nonatomic) IGShoppingProductTileLabel *titleLabel;
@property(readonly, nonatomic) id <IGGenericProductItem><IGProductMerchantProfileImageProviding><IGSavableObject> genericProductItem;
@end

