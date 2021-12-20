//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <FBSharedFramework/IGStoryMediaAsset-Protocol.h>

@class NSString;

@interface UIImage (IGStoryMediaAsset) <IGStoryMediaAsset>
- (void)fetchPhotoBoothAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchBoomerangAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchVideoWithUserSession:(CDUnknownBlockType)arg1 resultHandler:(id)arg2;
- (void)fetchImageOfSize:(struct CGSize)arg1 atTime:(CDStruct_1b6d18a9)arg2 resultHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) long long assetType;
@property(readonly, nonatomic) struct CGSize mediaSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

