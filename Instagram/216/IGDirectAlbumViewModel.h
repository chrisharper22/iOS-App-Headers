//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSString, PHAsset, PHAssetCollection, UIImage;

@interface IGDirectAlbumViewModel : NSObject <IGListDiffable>
{
    long long _count;
    NSString *_title;
    NSString *_assetCollectionIdentifier;
    PHAssetCollection *_assetCollection;
    PHAsset *_asset;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, copy, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, copy, nonatomic) NSString *assetCollectionIdentifier; // @synthesize assetCollectionIdentifier=_assetCollectionIdentifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long count; // @synthesize count=_count;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;

@end

