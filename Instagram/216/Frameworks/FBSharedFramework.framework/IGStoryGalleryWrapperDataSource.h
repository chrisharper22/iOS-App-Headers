//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGalleryDataSource, NSDictionary, NSMutableDictionary, NSMutableIndexSet;

@interface IGStoryGalleryWrapperDataSource : NSObject
{
    NSMutableDictionary *_injectedItemsAtIndices;
    NSMutableIndexSet *_injectedIndexSet;
    IGGalleryDataSource *_galleryDataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *injectedItemsAtIndices; // @synthesize injectedItemsAtIndices=_injectedItemsAtIndices;
@property(readonly, nonatomic) IGGalleryDataSource *galleryDataSource; // @synthesize galleryDataSource=_galleryDataSource;
- (id)_metadataTaskForIndexPath:(id)arg1 thumbnailSize:(struct CGSize)arg2 fetchBackgroundColorsBasedOnInitialThumbnail:(_Bool)arg3;
- (id)fetchMetadataTaskForPHAsset:(id)arg1 thumbnailSize:(struct CGSize)arg2 sectionCount:(long long)arg3;
- (long long)_wrapperIndexForGalleryDataSourceItemAtIndex:(long long)arg1;
- (long long)indexOfGalleryDataSourceItemAdjustedFromWrapperIndex:(long long)arg1;
- (id)fetchItemAtIndexPath:(id)arg1 thumbnailSize:(struct CGSize)arg2 fetchBackgroundColorsBasedOnInitialThumbnail:(_Bool)arg3;
- (void)removeItem:(id)arg1;
- (void)injectItem:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) long long numberOfItems;
- (id)initWithGalleryDataSource:(id)arg1;

@end

