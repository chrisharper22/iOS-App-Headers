//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class AVAsset, IGTVComposition, IGTVVideoFetchRequest;

@interface IGTVVideoCompositionAsset : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGTVVideoFetchRequest *_igtvGallery_fetchRequest;
    AVAsset *_igtvCameraOrFeed_asset;
    IGTVComposition *_igtvDrafts_composition;
    AVAsset *_igtvDovetail_asset;
}

+ (id)igtvGalleryWithFetchRequest:(id)arg1;
+ (id)igtvDraftsWithComposition:(id)arg1;
+ (id)igtvDovetailWithAsset:(id)arg1;
+ (id)igtvCameraOrFeedWithAsset:(id)arg1;
- (void).cxx_destruct;
- (void)matchIgtvGallery:(CDUnknownBlockType)arg1 igtvCameraOrFeed:(CDUnknownBlockType)arg2 igtvDrafts:(CDUnknownBlockType)arg3 igtvDovetail:(CDUnknownBlockType)arg4;
- (struct CGSize)size;

@end

