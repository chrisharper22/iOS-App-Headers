//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaAsset-Protocol.h>
#import <FBSharedFramework/IGStoryMediaAsset-Protocol.h>

@class IGAsyncTask, NSString, PHAsset, UIImage;

@interface IGStoryPhotoLibraryAsset : NSObject <IGMediaAsset, IGStoryMediaAsset>
{
    double _videoDuration;
    PHAsset *_phAsset;
    UIImage *_previewImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void)fetchPhotoBoothAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchBoomerangAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageOfSize:(struct CGSize)arg1 atTime:(CDStruct_1b6d18a9)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)fetchVideoWithUserSession:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool ig_isLoopable;
@property(readonly, nonatomic) long long assetType;
@property(readonly, nonatomic) struct CGSize mediaSize;
- (id)renderer;
@property(readonly, nonatomic) IGAsyncTask *ig_preferredTransform;
@property(readonly, nonatomic) double ig_mediaDuration;
@property(readonly, nonatomic) struct CGSize ig_mediaSize;
@property(readonly, nonatomic) IGAsyncTask *hasAudio;
- (id)initWithPhotoLibraryAsset:(id)arg1 previewImage:(id)arg2 videoDuration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

