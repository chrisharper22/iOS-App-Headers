//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGInlineGalleryDataSource-Protocol.h>
#import <FBSharedFramework/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSString, PHAssetCollection, PHCachingImageManager, PHFetchOptions, PHFetchResult, PHImageRequestOptions;
@protocol IGInlineGalleryDataSourceDelegate, OS_dispatch_queue;

@interface IGInlineGalleryPHDataSource : NSObject <PHPhotoLibraryChangeObserver, IGInlineGalleryDataSource>
{
    NSString *_selectedAssetIdentifier;
    int _imageRequestID;
    id <IGInlineGalleryDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _maxItems;
    PHFetchResult *_fetchCollectionsResult;
    PHAssetCollection *_chosenCollection;
    PHFetchResult *_assetsInCollectionResult;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    PHFetchOptions *_fetchOptions;
    long long _galleryTimeLimitInDays;
    struct CGSize _thumbnailSize;
}

+ (id)dataSourceWithMaxItems:(long long)arg1 sortBy:(id)arg2;
+ (id)dataSourceWithItemsSinceDate:(id)arg1 preferredMediaTypes:(id)arg2 itemLimit:(long long)arg3;
+ (id)dataSourceWithMaxItems:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long galleryTimeLimitInDays; // @synthesize galleryTimeLimitInDays=_galleryTimeLimitInDays;
@property(readonly, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(nonatomic) int imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) PHFetchResult *assetsInCollectionResult; // @synthesize assetsInCollectionResult=_assetsInCollectionResult;
@property(retain, nonatomic) PHAssetCollection *chosenCollection; // @synthesize chosenCollection=_chosenCollection;
@property(retain, nonatomic) PHFetchResult *fetchCollectionsResult; // @synthesize fetchCollectionsResult=_fetchCollectionsResult;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) long long maxItems; // @synthesize maxItems=_maxItems;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *selectedAssetIdentifier; // @synthesize selectedAssetIdentifier=_selectedAssetIdentifier;
@property(nonatomic) __weak id <IGInlineGalleryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)decorateGridCell:(id)arg1 forAssetAtIndexPath:(id)arg2;
- (long long)numberOfItems;
- (long long)numMediaSince:(double)arg1;
- (void)imageForIndex:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)assetForIndex:(long long)arg1;
- (id)assetForIndexPath:(id)arg1;
- (void)_assignDefaultAlbum:(CDUnknownBlockType)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)pauseDataFetch;
- (void)startDataFetchWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasCameraRollAccess;
- (id)initWithFetchOptions:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

