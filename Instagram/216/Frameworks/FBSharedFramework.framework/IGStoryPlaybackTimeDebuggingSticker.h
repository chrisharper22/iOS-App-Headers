//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGAnimatedStickerViewType-Protocol.h>
#import <FBSharedFramework/IGDynamicSurfaceStickerViewType-Protocol.h>
#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>
#import <FBSharedFramework/IGSerializable-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegate-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class IGPlaybackTimeline, IGStoryStickerExportModel, NSString, UICollectionView;

@interface IGStoryPlaybackTimeDebuggingSticker : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGPlaybackTimelineDelegate, IGAnimatedStickerViewType, IGDynamicSurfaceStickerViewType, IGSerializable>
{
    UICollectionView *_collectionView;
    IGPlaybackTimeline *_timeline;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
@property(nonatomic) double playbackTime;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

